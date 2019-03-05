#include <iostream>
#include <set>
#include <algorithm>

namespace stu
{

struct Fwd_list_node_base
{
    Fwd_list_node_base() = default;
    Fwd_list_node_base* m_next = nullptr;

    Fwd_list_node_base*
    m_transfer_after(Fwd_list_node_base* begin,
                     Fwd_list_node_base* end)
    {
        Fwd_list_node_base* keep = begin->m_next;
        if(end)
        {
            begin->m_next = end->m_next;
            end->m_next = m_next;
        }
        else
        {
            begin->m_next = 0;
        }
         m_next = keep;
         return end;
    }
    void reverse_after()
    {
        Fwd_list_node_base* tail = m_next;
        if(!tail)
        {
            return;
        }
        Fwd_list_node_base* temp;
        while(temp = tail->m_next)
        {
            Fwd_list_node_base keep = m_next;
            m_next = temp;
            tail->m_next = temp->m_next;
            m_next->m_next = keep;
        }

    }

};

template<class T>
struct Fwd_list_node:public Fwd_list_node_base
{
    Fwd_list_node() = default;
};

template<class T>
struct list
{
    using value_type = T;
    using size_type	= std::size_t;
    using difference_type = std::ptrdiff_t;
    //using iterator = LegacyBidirectionalIterator;
    //using const_iterator = Constant LegacyBidirectionalIterator;
    //using reverse_iterator = std::reverse_iterator<iterator>;
    //using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    /*reference front();
    reference back();
    iterator begin();
    iterator end();
    reverse_iterator rbegin();
    reverse_iterator rend();
    bool empty() const;
    size_type size() const;
    size_type max_size() const;
    iterator insert( iterator pos, const T& value );
    void clear();
    iterator erase( iterator pos );
    void push_back( const T& value );
    void pop_back();
    void push_front( const T& value );
    void pop_front();
    void resize( size_type count, T value = T() );
    void swap( list& other );*/

};

}

int main()
{
    std::set<int> a{11,11,2,2,65,32,13,165,4,321,3516,84,61,32,132};
    std::for_each(a.begin(), a.end(), [](int a)
    {
        std::cout << a << " ";
    });
    return 0;
}
