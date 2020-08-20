#pragma once
#include <iostream>
#include <initializer_list>

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
    ring(int size): m_pos(0), m_size(size), m_values(nullptr){
        m_values = new T[size];
    }        // *Constructor and Alocator

    ~ring() {
        delete[] m_values;
    }        // *Destructor and Deletor

    int size() const {
        return m_size;
    }


    void push_fornt(T value)
    {
        m_values[0] = value;
    }


    iterator begin() {
        return iterator(0, *this);
    }

    iterator end() {
        return iterator(m_size, *this);
    }

    void push_back(T value) 
    {
        m_values[m_pos++] = value;
        if(m_pos == m_size)
            m_pos = 0;
    }      // new: Updated PushBack

    T &get(int pos) {
        return m_values[pos];
    }
};



template<typename T>
class ring<T>::iterator
{
    private:
        int m_pos;
        ring &m_ring;

    public:
        iterator(int pos, ring &obj): m_pos(pos), m_ring(obj)
        {}
        
        iterator &operator++(int)
        {
            m_pos++;
            return *this;
        }   // !Postfix ++ operator

        iterator &operator++()
        {
            m_pos++;
            return *this;
        }   // !Prefix ++ operator

        T &operator*() {
            return m_ring.get(m_pos);
        }   // ! *Dereference operator

        bool operator!=(const iterator &other) const {
            return m_pos != other.m_pos;
        }   // ! !NotEquals operator
};