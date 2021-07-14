#include <iostream>
using namespace std;

class stack
{
private:
    int data[100];
    int top; //index inside an array
public:
    stack()
    {
        top = -1;
    }

    bool push(int d)
    {
        if (top == 100)
        {
            cout << "Stack is full" << endl;
            return 0;
        }
        top++;
        data[top] = d;
        return 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void pop()
    {
        if (isEmpty() == 1)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout << data[top] << " is removed" << endl;
            data[top--];
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            cout << -1000 << endl;
        }
        else
        {
            cout << data[top];
        }
    }

    void print()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout << data[i] << endl;
            }
        }
    }
};

int main()
{
    stack *st = new stack();
    st->push(10);
    st->push(20);
    st->push(30);
    st->push(40);
    st->push(50);
    st->push(60);
    // st->peek();
    st->pop();
    st->print();

    return 0;
}