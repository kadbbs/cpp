
#include <string>
#include <list>
#include <iostream>
#include <list/list.h>
int main(){

    std::list<std::string>mylist_string;
    std::list<double>mylist_double(6);
    std::list<std::string>::iterator iter_strlist;
//---------初始化mylist_string
    mylist_string.push_front("1:  Jack");
    mylist_string.push_front("2:  Tom");
    mylist_string.push_front("3:  Mike");


    std::cout<<"list size = "<<mylist_string.size()<<std::endl;
    std::cout<<"list max size = "<<mylist_string.max_size()<<std::endl;
    std::cout<<"list first element = "<<*mylist_string.begin()<<std::endl;

    mylist_string.pop_front();
    std::cout<<"list first element = "<<*mylist_string.begin()<<std::endl;

    mylist_string.pop_front();
    std::cout<<"list first element = "<<mylist_string.front()<<std::endl;

    m_std::m_list<int> myll;


}