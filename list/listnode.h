//
// Created by bbs on 24-2-26.
//

#ifndef CLION_LEETCODE_LISTNODE_H
#define CLION_LEETCODE_LISTNODE_H



namespace m_std{
    template<typename T>
    class listnode{
        typedef listnode<T> node;

    public:
        listnode()=delete;
        listnode(const T&value):m_value(value),m_next(nullptr),m_prev(nullptr){}
        ~listnode()=default;



        T m_value;
        node *m_prev;
        node *m_next;
    };

}








#endif //CLION_LEETCODE_LISTNODE_H
