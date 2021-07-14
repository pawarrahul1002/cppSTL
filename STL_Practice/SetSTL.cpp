#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s1;
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}