#include <iostream>
#include <stack>
using namespace std;

bool IsMatching(char a, char b)
{
    if ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'))
    {
        return true;
    }
    return false;
    
}

bool IsBalanced(string str)
{
    stack<int> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty() == true)
            {
                return false;
            }
            else if (IsMatching(st.top(), str[i])== false)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }

    return(st.empty()== true);
}

int main()
{
    string s;
    getline(cin, s);
    cout << IsBalanced(s);

    return 0;
}