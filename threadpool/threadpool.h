//
// Created by bbs on 24-2-19.
//

//#ifndef CLION_LEETCODE_THREADPOOL_H
//#define CLION_LEETCODE_THREADPOOL_H
//
//#endif //CLION_LEETCODE_THREADPOOL_H
#pragma once
#include <pthread.h>
#include <list>
#include <queue>
#include <iostream>

//class ThreadPool{
//
//
//    struct NWORKER{
//        pthread_t threadid;		//线程id
//        bool terminate;			//是否需要结束该worker的标志
//        int isWorking;			//该worker是否在工作
//        ThreadPool *pool;		//隶属于的线程池
//    };
//
//    struct NJOB{
//        void (*func)(void *arg);     //任务函数
//        void *user_data;			 //函数参数
//    };
//
//
//
//};
#if 0
class ThreadPool{
private:
    struct NWORKER{
        pthread_t threadid;
        bool terminate;
        int isWorking;
        ThreadPool *pool;
    } *m_workers;

    struct NJOB{
        void (*func)(void *arg);     //任务函数
        void *user_data;
    };
public:
    //线程池初始化
    //numWorkers:线程数量
    ThreadPool(int numWorkers, int max_jobs);
    //销毁线程池
    ~ThreadPool();
    //面向用户的添加任务
    int pushJob(void (*func)(void *data), void *arg, int len);

private:
    //向线程池中添加任务
    bool _addJob(NJOB* job);
    //回调函数
    static void* _run(void *arg);
    void _threadLoop(void *arg);

private:
    std::list<NJOB*> m_jobs_list;
    int m_max_jobs;							//任务队列中的最大任务数
    int m_sum_thread;						//worker总数
    int m_free_thread;						//空闲worker数
    pthread_cond_t m_jobs_cond;           //线程条件等待
    pthread_mutex_t m_jobs_mutex;         //为任务加锁防止一个任务被两个线程执行等其他情况
};



#endif


#if 0
using callback=void(*)(void*);

class task{

    task(){
        function = nullptr;
        arg= nullptr;
    }
    task(callback f, void* arg)
    {
        function = f;
        this->arg = arg;
    }


private:
    callback function;
    void * arg;


};


class taskqueue{

public:
    taskqueue()=default;
    ~taskqueue()=default;

    void addtask(task &task);

    task taketask();

    int tasknumber();

private:
    pthread_mutex_t m_mutex;
    std::queue<task> m_queue;
};

class threadpool{

    public:
        threadpool(int min, int max);
        ~threadpool();

        void addtask(task task);

        int getbusynumber();
        int getalivenumber();

private:
    void * worker(void *);
    void * manager(void *);
private:
    pthread_mutex_t m_lock;
    std::vector<pthread_t> m_threadids;
    pthread_t m_managerid;
    int m_minNum;
    int m_maxNum;
    int m_busyNum;
    int m_aliveNum;
    bool m_shutdown = false;
};

#endif

using function=void (*)(void *);

class threadpool{
    struct task{
        task(function f,void *arg);
        ~task()=default;
        function fun;
        void *arg;

    };
    std::queue<task> taskQ;
    //std::vector<pthread_t> threadids;
    pthread_t * threadids;
    pthread_t managerid;
    int minnum;             //最小线程数
    int maxnum;             //最大线程数
    int busynum;            //忙线程
    int livenum;            //活线程
    int exitnum;
    pthread_mutex_t pool_mutex;         //锁
    pthread_mutex_t busy_mutex;
    int shutdown;
    pthread_cond_t notfull;
    pthread_cond_t notempty;
public:
    void show();
    threadpool(int min,int max);
    void testthis(void *);

    ~threadpool();

    void pushtask(task& task);
    void pushtask(function f,void *arg);
    //task taketask();
    static void *work(void *arg);
    static void *manager(void *arg);

    int getlive();

    int getbusy();

};