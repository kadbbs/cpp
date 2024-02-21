//
// Created by bbs on 24-2-19.
//
#include <threadpool/threadpool.h>
#include <pthread.h>
threadpool::threadpool(int min,int max){
    minnum=min;
    maxnum=max;
    busynum=0;
    livenum=min;
    exitnum=0;
    shutdown=0;
    if(pthread_mutex_init(&pool_mutex,NULL)!=0||
    pthread_mutex_init(&busy_mutex,NULL)!=0||
    pthread_cond_init(&notfull,NULL)!=0||
    pthread_cond_init(&notempty,NULL)!=0

    ){
        std::cout<<"mutex or condition init fail..."<<std::endl;
        return ;
    }
    //testthis(this);
    pthread_create(&managerid,NULL,threadpool::manager,NULL);
    threadids=new pthread_t[min];
    if(threadids== nullptr){

    }
    for(int i=0;i<min;i++){
        pthread_create(&threadids[i],NULL,threadpool::work,this);
    }


}

void threadpool::pushtask(task& task) {
    taskQ.push(task);
    return ;

}


void threadpool::pushtask(function f,void *arg) {

    task task(f,arg);
    taskQ.push(task);
    return ;

}

void *threadpool::work(void *arg){

    threadpool* pool=static_cast<threadpool*>(arg);
    while(true){
        pthread_mutex_lock(&pool->pool_mutex);


        while(pool->taskQ.empty()&&!pool->shutdown){
            std::cout<<"thread"<<std::to_string(pthread_self())<<"waiting !!!"<<std::endl;
            pthread_cond_wait(&pool->notempty,&pool->pool_mutex);

        }

//        //解锁阻塞，判断是否销毁线程
//        if(pool->exitnum>0){
//            pool->exitnum--;
//
//        }
        //判断线程池是否关闭
        if(pool->shutdown){
            pthread_mutex_unlock(&pool->pool_mutex);
            //关闭
        }
        //取任务
        task task=pool->taskQ.front();
        pool->taskQ.pop();
        //threadpool::task task=threadpool::taketask();
        pool->busynum++;

        pthread_mutex_unlock(&pool->pool_mutex);

        //run task
        std::cout<<"thread"<<std::to_string(pthread_self())<<"start working!!"<<std::endl;

        task.fun(task.arg);
        delete task.arg;

        task.arg= nullptr;

        //task over

        std::cout<<"thread"<<std::to_string(pthread_self())<<"over!!"<<std::endl;

        pthread_mutex_lock(&pool->busy_mutex);
        pool->busynum--;
        pthread_mutex_lock(&pool->busy_mutex);

    }

    return nullptr;

}
void *threadpool::manager(void *arg){
    threadpool* tt=static_cast<threadpool*>(arg);





}


threadpool::~threadpool(){
    if(threadids!= nullptr){
        delete [] threadids;
    }
}


void threadpool::testthis(void *arg) {
       threadpool *tt=(threadpool*)arg;
    //threadpool* tt=static_cast<threadpool*>(arg);
    std::cout<<"testthis="<<tt->maxnum<<std::endl;

}

//threadpool::task threadpool::taketask() {
//    task task=taskQ.front();
//    taskQ.pop();
//    return task;
//
//}

threadpool::task::task(function f,void *arg){
    fun=f;
    arg=arg;

}



void threadpool::show(){
    std::cout<<"taskQnumber"<<taskQ.size()<<std::endl;
}