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
template <typename T>
T &m_std::m_list<T>::front() {

    return m_head->m_value;
}
template <typename T>
T &m_std::m_list<T>::back() {
    return m_tail->m_value;

}
template <typename T>
int m_std::m_list<T>::size() {
    return l_size;

}
template <typename T>
void m_std::m_list<T>::push_back(T value) {

    auto nnode = new node(value);
    if(l_size==0){
        m_head=m_tail=nnode;
        l_size++;
        return ;
    }

    m_tail->m_next=nnode;
    nnode->m_prev=m_tail;
    nnode->m_next= nullptr;
    m_tail=nnode;
    l_size++;


}
template <typename T>
void m_std::m_list<T>::push_front(T value)  {

    auto nnode = new node(value);

    if(l_size==0){
        m_head=m_tail=nnode;
        l_size++;
        return ;
    }
    nnode->m_next=m_head;
    m_head->m_prev=nnode;
    m_head=nnode;
    l_size++;

}

template <typename T>
void m_std::m_list<T>::pop_front()  {




    if(l_size==0){
        return ;
    }else if(l_size==1){
        l_size--;
        delete m_head;
        m_head=m_tail= nullptr;
    }

    auto head =m_head->m_next;
    head->m_prev= nullptr;
    delete m_head;
    m_head=head;
    l_size--;

}
template <typename T>
void m_std::m_list<T>::pop_back()  {

    if(l_size==0){
        return ;
    }else if(l_size==1){
        l_size--;
        delete m_head;
        m_head=m_tail= nullptr;
    }
    m_tail=m_tail->m_prev;
    delete m_tail->m_next;

    m_tail->m_next= nullptr;
    l_size--;

}

template <typename T>
bool m_std::m_list<T>::empty(){
    return l_size==0;
}

template <typename T>
typename m_std::m_list<T>::iterator m_list<T>::begin() {

    return iterator (m_head);



}
template <typename T>
typename m_std::m_list<T>::iterator m_list<T>::end() {

    if(l_size==0){
        iterator() ;
    }
    return iterator (m_tail->m_next);


}


template <typename T>

typename m_std::m_list<T>::iterator m_std::m_list<T>::insert(typename m_std::m_list<T>::iterator it,T value){

    if(it==begin()){
        push_front(value);
        return iterator(m_head);
    }else if(it==end()){
        push_back(value);
        return iterator(m_tail);
    }

    auto nnode = new node(value);
    auto next=it.m_pointer;
    auto prev=it.m_pointer->m_prev;
    prev->m_next=nnode;
    nnode->m_prev=prev;
    nnode->m_next=next;
    next->m_prev=nnode;
    it.m_pointer=nnode;
    l_size++;
    return it;


}
template <typename T>

typename m_std::m_list<T>::iterator m_std::m_list<T>::erase(typename m_std::m_list<T>::iterator it){
    if(it==begin()){
        pop_front();
        return iterator(m_head);
    }else if(it==end()){
        pop_back();
        return iterator(m_tail);
    }

    it.m_pointer->m_next->m_prev=it.m_pointer->m_prev;
    it.m_pointer->m_prev->m_next=it.m_pointer->m_next;
    auto pos=it.m_pointer->m_next;
    delete it.m_pointer;
    it.m_pointer=pos;
    l_size--;
    return it;
}