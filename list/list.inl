#include <iostream>

template <typename T>
m_std::m_list<T>::m_list(int vaule){
    l_size=0;
    l_max_size=9999;

}

template <typename T>
m_std::m_list<T>::m_list(){
    l_size=0;
    l_max_size=9999;
    std::cout<<"default m_list() is runing"<<std::endl;
}