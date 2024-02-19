template <typename T>
m_vector<T>::m_vector():m_data(nullptr),m_size(0),m_capacity(0){}
template <typename T>
m_vector<T>::m_vector(int size) {
    m_data=new T[size];
    m_size=0;
    m_capacity=size*2;
}
//template <typename T>
//m_vector<T>::m_vector(const T & vaule) {
//    m_data=new T[1];
//    m_data[0]=vaule;
//    m_size=1;
//    m_capacity=1;
//}
template <typename T>
m_vector<T>::~m_vector(){
    if(m_data!= nullptr){
        delete [] m_data;
    }
    m_size=0;
    m_capacity=0;
}
template <typename T>
T & m_vector<T>::at(int index){
    if(index<0||index>=m_capacity){
        throw std::out_of_range("out of range");
    }

    return m_data[index];

}
template <typename T>
void m_vector<T>::push_back(const T &vaule) {
    if(m_size<m_capacity){
        m_data[m_size]=vaule;
        m_size++;
        return ;
    }
    m_capacity=m_capacity*2;
    T *data=new T[m_capacity];
    for(int i=0;i<m_capacity;i++){
        data[i]=m_data[i];
    }
    data[m_size]=vaule;
    if(m_data!= nullptr){
        delete [] m_data;
        m_data= nullptr;
    }
    m_data=data;
    m_size++;
    return ;
}
template <typename T>
void m_vector<T>::show(){
    std::cout<<"size= "<<m_size<<std::endl;
    std::cout<<"capacity= "<<m_capacity<<std::endl;

    for(int i=0;i<m_size;i++){
        std::cout<<"size"<<i<<"="<<m_data[i]<<" ";
    }
    std::cout<<std::endl;
}
template <typename T>
m_vector<T>::m_vector(std::initializer_list<T> initList) {
    m_size = 0;
    m_capacity = initList.size();
    m_data = new T[m_capacity];

    for (const T& element : initList) {
        m_data[m_size] = element;
        m_size++;
    }
}


template <typename T>
int m_vector<T>::size(){
    return m_size;
}
template <typename T>
int m_vector<T>::capacity() {
    return m_capacity;
}
