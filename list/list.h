//
// Created by bbs on 24-2-25.
//
//
//#ifndef CLION_LEETCODE_LIST_H
//#define CLION_LEETCODE_LIST_H
//
//#endif //CLION_LEETCODE_LIST_H

#pragma once

#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <list/listnode.h>


namespace m_std{



    template<typename T>
    class m_list{
        typedef listnode<T> node;

    public:
        m_list();
        m_list(int vaule);
        ~m_list()=default;
        void push_front(T vaule);
        void push_back(T vaule);
        T&front();
        T&back();

        void pop_front();
        void pop_back();
        int size();
        bool empty();
        //int insert();
        node* m_head;
        node* m_tail;
        int l_size;
        int l_max_size;

    };

#include <list/list.inl>
}