#include <iostream>
#include <vector>
using namespace std;

//linear tc for access

int main()
{
    vector<int> v;
    cout << "Capacity of vector : " << v.capacity() << endl; //just like dynamic array
    v.push_back(10);
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.push_back(20);
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.push_back(30);
    cout << "Capacity of vector : " << v.capacity() << endl;
    //it doubles the capacity when fill full

    cout << "size of vector : " << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear();
    cout << "Capacity of vector : " << v.capacity() << endl;
    cout << "size of vector : " << v.size() << endl;

    vector<int> v1(5, 101);
    v1.push_back(55);
    v1.push_back(85);
    v1.push_back(45);

    cout << "Output of begin and end: " << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    vector<int> v2(v1);
    cout << "Output of begin and end of v2 copied from v1: " << endl;
    for (auto i = v2.begin(); i != v2.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    v1.resize(3);

    cout << "\nSize : " << v1.size(); // prints the vector size after resize()

    if (v1.empty() == false)
    {
        cout << "\nVector is not empty";
    }
    else
    {
        cout << "\nVector is empty";
    }

    // Shrinks the vector
    v1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    vector<int> v6;

    for (int i = 1; i <= 10; i++)
        v6.push_back(i * 10);

    cout << "at : v6.at(4) = " << v6.at(4) << endl;

    cout << "front() : v6.front() = " << v6.front() << endl;

    cout << "back() : v6.back() = " << v6.back() << endl;

    return 0;
}