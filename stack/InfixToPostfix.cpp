#include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void InfixToPostfix(string s)
{
    stack<char> st;
    int l = s.length();
    string ns = "";

    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'b') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            ns += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.empty() != true && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (st.empty() != true && prec(s[i]) < prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }

            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        char c = st.top();
        ns += c;
        st.pop();
    }
    cout << ns << endl;
}

int main()
{
    string s;
    getline(cin,s);
    InfixToPostfix(s);

    return 0;
}