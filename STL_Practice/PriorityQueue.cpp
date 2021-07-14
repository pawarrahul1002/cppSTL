#include <iostream>
#include <queue>
using namespace std;

/*Priority queues are a type of container adapters,
 specifically designed such that the first element of 
the queue is the greatest of all elements in the queue*/

int main()
{
    //max heap:
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(10);
    maxi.push(51);
    maxi.push(54);
    maxi.push(564);
    int size = maxi.size();

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(10);
    mini.push(51);
    mini.push(54);
    mini.push(564);
    int minisize = mini.size();

    for (int i = 0; i < minisize; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}