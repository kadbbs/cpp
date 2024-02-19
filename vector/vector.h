////
//// Created by bbs on 24-2-17.
////
//
//#ifndef CLION_LEETCODE_VECTOR_H
//#define CLION_LEETCODE_VECTOR_H
//
//
//
//
//#endif //CLION_LEETCODE_VECTOR_H
#pragma once

namespace m_std{
    template<typename T>
    class m_vector{
        public:
            m_vector();
            m_vector(int size);


        m_vector(std::initializer_list<T> initList);
            ~m_vector();
            T & at(int index);
            void push_back(const T & vaule);
            void show();
            const T & at(int index) const;

            int capacity();
            int size();

        private:
            T *m_data;
            int m_size;
            int m_capacity;

    };

#include<vector/vector.inl>
}