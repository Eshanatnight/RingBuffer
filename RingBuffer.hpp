#pragma once
#include <iostream>

template <typename T>
class ring
{
    private:
        int m_pos;
        int m_size;
        T *m_values;

    public:
        class iterator;

    public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL){
        m_values = new T[size];
    }        // !Constructor and Alocator

    ~ring() {
        delete[] m_values;
    }        // !Destructor and Deletor

    int size() {
        return m_size;
    }

    void add(T value) 
    {
        m_values[m_pos++] = value;
        if(m_pos == m_size)
            m_pos = 0;
    }

    T &get(int pos) {
        return m_values[pos];
    }
};



template<typename T>
class iterators
{


};