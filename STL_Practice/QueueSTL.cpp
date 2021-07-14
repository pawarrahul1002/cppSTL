#include <iostream>
#include <queue>
using namespace std;

/*Queues are a type of container adaptors which operate in a
 first in first out (FIFO) type of arrangement. 
Elements are inserted at the back (end) and are deleted from the front.*/

int main()
{
    queue<string> q;
    q.push("Rahul");
    q.push("Pawar");

    cout << q.front() << endl;
    cout << q.back() << endl;

    while (!q.empty())
    {
        cout << '\t' << q.front();
        q.pop();
    }
    cout << endl;
    cout << q.empty() << endl;

    return 0;
}