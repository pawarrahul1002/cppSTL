#include <iostream>
#include <stack>
using namespace std;

int *sortusingStacks(int a[], int n)
{
    stack<int> s1;
    stack<int> s2;

    s1.push(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > s1.top())
        {
            s1.push(a[i]);
        }
        else if (a[i] < s1.top())
        {
            while (!s1.empty())
            {
                if (a[i] > s1.top())
                {
                    break;
                }
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(a[i]);
        }

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = s1.top();
        s1.pop();
    }
    return a;
}

int main()
{
    int a[] = {1, 50, 3, 4, 20};
    int s = sizeof(a) / sizeof(a[0]);

    int *arr = sortusingStacks(a, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}