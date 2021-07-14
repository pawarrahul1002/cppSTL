#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};

class SingleLinkedList
{
public:
    Node *head;
    SingleLinkedList()
    {
        head = NULL;
    }

    void AddAtBeg(int d)
    {
        cout << "added" << endl;
        Node *curr = new Node();
        curr->data = d;
        curr->next = head;
        head = curr;
    }

    void delFromBeg()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

class stack
{
private:
    SingleLinkedList *l;

public:
    stack()
    {
        l = new SingleLinkedList();
    }

    void push(int d)
    {
        l->AddAtBeg(d);
    }

    int top()
    {
        if (l->head == NULL)
        {
            cout << "head underflow" << endl;
        }
        else
        {
            return l->head->data;
        }
    }

    void pop()
    {
        if (l->head == NULL)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            int ans = l->head->data;
            l->delFromBeg();
            cout << ans << " is removed from stack" << endl;
        }
    }

    void peek()
    {
        if (l->head == NULL)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << l->head->data;
        }
    }

    bool isEmpty()
    {
        if (l->head != NULL)
        {
            return false;
        }
        return true;
    }

    void display()
    {
        if (l->head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            for (Node *i = l->head; i != NULL; i = i->next)
            {
                cout << i->data << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    stack *st = new stack();
    st->push(10);
    st->push(11);
    st->push(12);
    st->push(13);
    st->push(14);
    st->display();
}
