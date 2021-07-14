#include <iostream>
#include <list>
using namespace std;

/*when we say a List, we talk about doubly linked list. 
For implementing a singly linked list, we use forward list.*/

/*Lists are sequence containers that allow non-contiguous memory allocation. 
    As compared to vector, list has slow traversal, 
    but once a position has been found, 
    insertion and deletion are quick*/
//insert O(1), erase O(n)

void Display_L(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); ++it)
    {
        cout << '\t' << *it;
    }
    cout << endl;
}

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    l.push_back(20);
    l.push_front(10);
    l.push_back(12);
    l.push_front(31);
    Display_L(l);

    cout << l.front() << endl;
    cout << l.back() << endl;
    l.pop_back();
    l.pop_front();
    cout << l.front() << endl;
    cout << l.back() << endl;

    Display_L(l);
    l.reverse();
    Display_L(l);
    l.sort();
    Display_L(l);

    return 0;
}