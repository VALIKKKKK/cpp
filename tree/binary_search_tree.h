#ifndef BINARY_SEARCH_TREE_H_INCLUDED
#define BINARY_SEARCH_TREE_H_INCLUDED


struct BinarySearchTree
{



    struct Node
    {
        Node* m_left = nullptr;
        Node* m_right = nullptr;
        int m_value;
        Node() = default;
        Node(int v):m_value(v){}
    };

    Node* head = nullptr;
    BinarySearchTree() = default;

    Node* add(Node* node, int value)
    {
        if(node == nullptr)
        {
            return new Node(value);
        }
        if(value < node->m_value)
        {
            node->m_left = add(node->m_left, value);
        }
        if(value >= node->m_value)
        {
            node->m_right = add(node->m_right, value);
        }

        return node;
    }

    void insert(int value)
    {
        //if(head == nullptr)
        {
            head = add(head, value);
        }
        /*else
        {
            add(head, value);
        }*/

    }

    void print(Node* node)
    {
        if(node != nullptr)
        {
            print(node->m_left);
            std::cout << node->m_value << std::endl;
            print(node->m_right);
        }
    }

    void print_all()
    {
        print(head);
    }

};



#endif // BINARY_SEARCH_TREE_H_INCLUDED
