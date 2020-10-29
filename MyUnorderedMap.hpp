#include "Dictionary.h"

using std::cout;
using std::endl;

/*
Writes to a string array containing:
    * the your (the student author’s) Campus Username in lowercase (at index 0)
Takes as input a pre-existing string.
*/
void get_identity(std::string &my_id)
{

    my_id[0] = "avsrcm";
    my_id[1] = 12449123;
}
/*
MyPair<K, V> *m_data = nullptr;

int data_size = 0;
int reserved_size = 0;

// To make it easier on you (rather than use void pointers) we'll only test with std::string keys (remember values can be any type)
int hash(const K &key) const;
*/
// Constructor
// Should start data_size and reserved_size at 0, m_data to nullptr
template <typename K, typename V>
MyUnorderedMap<K,V>::MyUnorderedMap()
{
    MyPair<K, V> *m_data = nullptr;

    int data_size = 0;
    int reserved_size = 0;
}

// Destructor
template <typename K, typename V>
MyUnorderedMap<K,V>::~MyUnorderedMap()
{
    delete [] m_data;
}

// Copy Constructor
template <typename K, typename V>
MyUnorderedMap<K,V>::MyUnorderedMap(const MyUnorderedMap<K, V> &source)
{

}

// Operator=
template <typename K, typename V>
MyUnorderedMap<K,V>::MyUnorderedMap<K, V> & operator=(const MyUnorderedMap<K, V> &source)
{

}

// at
template <typename K, typename V>
V & MyUnorderedMap<K,V>::at(const K &key)
{
    if(m_data == nullptr)
    {
        throw std::out_of_range("MyUnoderedMap::at");
    }

    return m_data[];
}

// [] operator
template <typename K, typename V>
V & MyUnorderedMap<K,V>::operator[](const K &key)
{

}

template <typename K, typename V>
bool MyUnorderedMap<K,V>::empty() const
{
    if(m_data->)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename K, typename V>
int MyUnorderedMap<K,V>::size() const
{
    return data_size;
}

// data_size and reserved_size should be 0 after this,
// and m_data should be nullptr.
template <typename K, typename V>
void MyUnorderedMap<K,V>::clear()
{

}

template <typename K, typename V>
void MyUnorderedMap<K,V>::insert(const MyPair<K, V> &init_pair)
{

}

template <typename K, typename V>
void MyUnorderedMap<K,V>::erase(const K &key)
{
    if(m_data == nullptr)
    {
        m_data = nullptr;
    }
    else if(key < m_data->data.first)
    {
        erase_helper(rt->left, key);
    }

    else if(key > rt->data.first)
    {
        erase_helper(rt->right, key);
    }
    else
    {
        TreeNode<MyPair<K,V>> *temp = rt;
        if(rt->left == nullptr)
        {
            rt = rt->right;
            delete temp;
        }
        else if(rt->right == nullptr)
        {
            rt = rt->left;
            delete temp;
        }
        else
        {
            TreeNode<MyPair<K,V>> *temp = get_min(rt->right);
            rt->data.first = temp->data.first;
            rt->data.second = temp->data.second;
            delete temp;
        }
    }
}

// Should return nullptr for key not in HT
template <typename K, typename V>
MyPair<K, V> * MyUnorderedMap<K,V>::find(const K &key) const
{
    return
}

// Not actually std::
// Backwards in order traversal print (for BST)
// For Hash table, just print all elements in any order,
// so that it looks like this when you print(unordereded_map_obj):
// [(K0: V0), (K1: V1), (K2: V2)]
// Do not use any newlines or endl in this function.
// Do not modify the table.
// Only print valid current data elements.
template <typename K, typename V>
void MyUnorderedMap<K,V>::print() const
{

}

template <typename K, typename V>
int MyUnorderedMap<K,V>::count(const K &key) const
{

}

// This one was not in the BST, but is in the HT
// Grows or shrinks reserved_size and size of dynamic array to be new_cap large,
// and nothing else.
// Other functions, like insert, erase, or [], should decide how large to make the new cap
// and call reserve themselves with that size.
// Those other functions should choose to double the reserved size when the HT becomes 60% full,
// and to shrink the HT when it becomes 10% full, to a resulting 30%.
// Remember to re-hash!
template <typename K, typename V>
void MyUnorderedMap<K,V>::reserve(int new_cap)
{

}

template <typename K, typename V>
int MyUnorderedMap<K,V>::hash(const K &key) const
{
    int i, sum;
    for(sum = 0; x[i] != '\0'; i++)
        sum += (int) x[i];
    return sum %
}

