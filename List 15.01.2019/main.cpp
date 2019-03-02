#include <iostream>

using namespace stu
{
    template<class T>
    struct list
    {
        using value_type = T;
        using size_type = std::size_t;
        using difference_type = std::ptrdiff_t;
        using reference = value_type&;
        using const_reference = const value_type&;
        using pointer = value_type*;
        using const_pointer = const value_type*;
    private:
        struct Node
        {
            T m_value;
            Node* next = nullptr;
            Node() = default;
            explicit Node(T value) : m_value(value){};
            explicit Node(T value, Node* n) : m_value(value), next(m) {};
        };
        Node* head = nullptr;

        void push_back(T value);

    };
    template<class T>
    void list<T>::push_back(T value)
    {
        if(heaf == nullptr)
        {
            m_head = new Node(value);
        }
        else
        {
            Node* temp = getLast();
            temp->m_next = new Node(value);
        }
        m_size++;
    }

    template<class T>
    Node* list<T>::get_last()
    {
        for(; i->m_next != nullptr; i = i->m_next);
        return i;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
