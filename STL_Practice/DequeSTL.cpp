#include <iostream>
#include <deque>
using namespace std;

/*They are similar to vectors, but are more efficient 
in case of insertion and deletion of elements.
 Unlike vectors, contiguous storage allocation may not be guaranteed.*/

/*Double ended queues are a special case of queues where insertion
 and deletion operations are possible at both the ends*/

void Display_q(deque<int> q)
{
    deque<int>::iterator it;
    for (it = q.begin(); it != q.end(); ++it)
    {
        cout << '\t' << *it;
    }
    cout << endl;
}

int main()
{
    deque<int> q;
    q.push_back(40);
    q.push_front(30);
    q.push_back(50);
    q.push_front(20);

    cout << "The deque gquiz is : ";
    Display_q(q);
    cout << "size " << q.size() << endl;

    cout << "q.at(2) : " << q.at(2) << endl;
    cout << "q.front() : " << q.front() << endl;
    cout << "q.back() : " << q.back() << endl;

    Display_q(q);
    q.pop_back();
    cout << "after removing last element q.back() : " << q.back() << endl;

    Display_q(q);
    q.pop_front();
    cout << "after removing last element q.back() : " << q.front() << endl;

    Display_q(q);
    cout << "Empty or not " << q.empty() << endl;
    q.erase(q.begin(),q.begin()+1);
    
    Display_q(q);

    return 0;
}