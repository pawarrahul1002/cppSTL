#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{

    array<int, 4> arr = {51, 22, 63, 14}; //not use in compettive coz it is static array

    int size = arr.size(); //for getting size use size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "3rd index element : " << arr.at(3) << endl;           // tc O(1)
    cout << "Check if empty or not " << arr.empty() << endl;       // tc O(1)
    cout << "For getting first element : " << arr.front() << endl; // tc O(1)
    cout << "For getting last element : " << arr.back() << endl;   // tc O(1)

    sort(arr.begin(), arr.end());

    cout << "\nsorted arr : ";
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;


    arr.fill(0);
    cout << " 0 assigned arr : ";
    for (auto i : arr)
    {
        cout << i << ' ';
    }

    return 0;
}