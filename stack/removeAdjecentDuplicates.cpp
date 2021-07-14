#include <iostream>
#include <stack>
using namespace std;

void removeDuplicates(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() || st.top() != s[i])
        {
            cout << "pushed " << s[i] << endl;
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }

    if (st.empty())
    {
        cout << "Empty String" << endl;
    }
    else
    {
        string newStr = "";
        while (!st.empty())
        {
            newStr = st.top() + newStr;
            st.pop();
        }
        cout << newStr << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    removeDuplicates(s);

    return 0;
}