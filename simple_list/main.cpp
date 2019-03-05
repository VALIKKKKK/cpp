#include <iostream>

template<class T>
struct Fwd_list_node
{
    Fwd_list_node() = default;
    Fwd_list_node* next;
    T value;
};

template<class T>
struct list
{
    using value_type = T;
    using size_type	= std::size_t;
    using difference_type = std::ptrdiff_t;
    Fwd_list_node_base* m_storage;

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

int main()
{
    Fwd_list_node_base* temp;
    return 0;
}
