
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
    myll.push_front(1);
    myll.push_front(2);
    myll.push_front(3);
    myll.push_front(4);
    myll.push_front(5);
    myll.push_back(9);

    std::cout<<"my list size = "<<myll.size()<<std::endl;
    myll.pop_front();
    myll.pop_front();
    myll.pop_back();


    std::cout<<"my list size = "<<myll.size()<<std::endl;

    std::cout<<"my list first element = "<<myll.front()<<std::endl;
    std::cout<<"my list tail element = "<<myll.back()<<std::endl;
    m_std::m_list<std::string> mystrlist;
    mystrlist.push_back("1 yu");
    mystrlist.push_back("5 io");
    mystrlist.push_back("3 ui");
    mystrlist.push_back("1 yu");
    mystrlist.push_back("5 io");
    mystrlist.push_back("3 ui");
    std::cout<<"my list first element = "<<mystrlist.front()<<std::endl;

    std::cout<<"----------------------------"<<std::endl;
    for(auto it=myll.begin();it!=myll.end();++it){
        std::cout<<"my list  element = "<<*it<<std::endl;

    }
    for(auto it=mystrlist.begin();it!=mystrlist.end();++it){
        std::cout<<"my list  element = "<<*it<<std::endl;

    }
    std::cout<<"my list element is zero?  "<<myll.empty()<<std::endl;

}