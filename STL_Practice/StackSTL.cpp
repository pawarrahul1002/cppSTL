#include <iostream>
#include <stack>
using namespace std;

/*LIFO(Last In First Out) type of working, 
where a new element is added at one end and (top) an 
element is removed from that end only*/

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty())
    {
        cout << ' ' << s.top();
        s.pop();
    }
    cout << endl;
    cout << s.size();
    return 0;
}