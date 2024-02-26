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
        ~list_iterator();

        bool operator ==(const iterator &other){
            return m_pointer==other.m_pointer;

        }
        bool operator !=(const iterator &other){
            return m_pointer!=other.m_pointer;

        }

        iterator & operator=(const iterator &other){
            if(this==&other){
                return;
            }
            m_pointer=other.m_pointer;
            return *this;
        }

        //前缀++，--
        //后缀++，--



    private:
        node* m_pointer;


    };

}