#pragma once
#include <list/listnode.h>
namespace m_std{

    template <typename T>
    class list_iterator{


        typedef listnode<T> node;
        typedef list_iterator<T> iterator;
    public:
        list_iterator():m_pointer(nullptr){}
        list_iterator(node *pointer):m_pointer(pointer){}
        ~list_iterator()=default;

        bool operator ==(const iterator &other){
            return m_pointer==other.m_pointer;

        }
        bool operator !=(const iterator &other){
            return m_pointer!=other.m_pointer;

        }

        iterator & operator=(const iterator &other){
            if(this==&other){
                return *this;
            }
            m_pointer=other.m_pointer;
            return *this;
        }

        T& operator*(){
            return m_pointer->m_value;
        }

        //前缀++，--
        iterator & operator++(){
            m_pointer=m_pointer->m_next;
            return *this;
        }
        iterator & operator--(){
            m_pointer=m_pointer->m_prev;
            return *this;
        }
        //后缀++，--
        iterator  operator++(int n){
            iterator it =*this;
            ++(*this);
            return it;
        }
        iterator  operator--(int n){
            iterator it =*this;
            --(*this);
            return it;
        }

        iterator operator + (int n){

            iterator it=*this;
            for(int i=0;i<n;i++){
                ++it;
            }
            return it;

        }
        node* m_pointer;


    };

}