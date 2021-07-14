#include <iostream>
#include <stack>
using namespace std;

void printNextGreaterElement(int a[], int n)
{
    stack<int> st;
    st.push(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (st.empty())
        {
            st.push(a[i]);
        }
        else
        {
            while (!st.empty() && a[i] > st.top())
            {
                cout << st.top() << " -> " << a[i] << endl;
                st.pop();
            }
            st.push(a[i]);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " -> " << -1 << endl;
        st.pop();
    }
}

int main()
{
    int a[] = {1, 3, 4, 2};
    int n;
    n = sizeof(a) / sizeof(a[0]);
    printNextGreaterElement(a, n);

    return 0;
}