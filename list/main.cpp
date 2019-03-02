#include <iostream>

struct Node
{
    Node* next;
    int value;
    Node() = default;
    Node(int v)
    {
        value = v;
        next = nullptr;
    }
};

struct List
{
    int m_size;
    Node* head = new Node(4);
    List()
    {
        m_size = 0;
        head = nullptr;
    }
    void push_back();
    void find();
};

Node* find(Node* head, int m_size)
{
    Node* temp = head;
    for(int i = 0; i < m_size; ++i)
    {
        temp = temp->next;
    }
    return temp;
}

void push_back(int value)
{
    if(head == nullptr)
    {
        head = new Node(value);
    }

}

int main()
{
    Node a;
    std::cout << std::endl;
    return 0;
}
