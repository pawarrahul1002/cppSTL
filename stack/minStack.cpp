#include <iostream>
using namespace std;

class stack
{
private:
    int data[100];
    int top;
    int minEle;

public:
    stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void getMin()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "minimum element in stack is :" << minEle << endl;
        }
    }

    void push(int d)
    {
        if (top == 100)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        if (isEmpty())
        {
            top++;
            data[top] = d;
            minEle = d;
        }
        else
        {
            if (d < minEle)
            {
                top++;
                data[top] = 2 * d - minEle;
                minEle = d;
            }
            else
            {
                top++;
                data[top] = d;
            }
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return;
        }
        int topEle = data[top];
        top--;
        if (topEle < minEle)
        {
            cout << "Pop element is : " << minEle << endl;
            minEle = 2 * minEle - topEle;
        }
        else
        {
            cout << "Popped element is : " << topEle << endl;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int topEle = data[top];
        if (topEle < minEle)
        {
            cout << minEle << endl;
        }
        else
        {
            cout << topEle << endl;
        }
    }
};

int main()
{
    stack *st = new stack();
    st->push(-20);
    st->push(-5);
    st->push(-10);
    // st->push(1);
    // st->push(5);
    // st->push(-4);
    // st->push(7);
    // st->pop();
    // st->peek();
    st->push(-20000);
    st->pop();
    // st->peek();

    st->getMin();

    return 0;
}