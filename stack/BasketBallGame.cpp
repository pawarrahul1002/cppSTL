#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int Score(string arr[], int size)
{
    stack<int> st;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == "combine")
        {
            cout << "Removed : " << st.top() << endl;
            st.pop();
        }
        else if (arr[i] == "double")
        {
            int a = 2 * st.top();

            cout << "doubled : " << st.top() << " = " << 2 * st.top() << endl;
            st.push(a);
        }
        else if (arr[i] == "add")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = a + b;
            st.push(b);
            st.push(a);
            st.push(c);
        }
        else
        {
            st.push(stoi(arr[i]));
            cout << "Added : " << st.top() << endl;
        }
    }

    int sum = 0;

    cout << "stack is " << endl;
    while (!st.empty())
    {
        sum += st.top();
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return sum;
}

int main()
{
    stringstream ss;
    // string ops[] = {"5", "-2", "combine", "double", "add"};
    string ops[] = {"5", "-2", "4", "combine", "double", "9", "add", "add"};
    int size = sizeof(ops) / sizeof(ops[0]);
    // // cout << size << endl;
    cout << Score(ops, size);
    // for (int i = 0; i < size; i++)
    // {
    //     // int num;
    //     // ss << (ops[i]) << endl;
    //     // ss>>num;
    //     cout<<stoi(ops[i]);
    // }

    return 0;
}