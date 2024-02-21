//
// Created by bbs on 24-2-19.
//
#include <threadpool/threadpool.h>

void testfun(void *arg){
    std::cout<<"thread"<<std::to_string(pthread_self())<<"testfun!!"<<std::endl;
    return;
}


int main(){
    std::queue<int> tt;
    threadpool pool(5,10);
//    pool.pushtask(testfun,NULL);
//    pool.pushtask(testfun,NULL);
//    pool.pushtask(testfun,NULL);
//    pool.pushtask(testfun,NULL);
//    pool.pushtask(testfun,NULL);
//    pool.pushtask(testfun,NULL);
    pool.show();
    std::cout<<"threadpool"<<std::endl;


}