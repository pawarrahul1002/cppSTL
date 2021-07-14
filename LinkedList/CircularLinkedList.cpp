#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};

class CircularLL
{
private:
    Node *head;

public:
    CircularLL()
    {
        head = NULL;
    }

    void AddAtBeg(int d)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->next = head;

        if (head == NULL)
        {
            head = curr;
            curr->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            head = curr;
            temp->next = curr;
        }
    }

    void addAtEnd(int d)
    {
        Node *curr = new Node();
        curr->data = d;

        if (head == NULL)
        {
            head = curr;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = curr;
        }
        curr->next = head;
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "LinkedList is Empty" << endl;
        }
        else
        {
            Node *i = head;
            cout << i << " ->";
            //cout<<"head ->";
            do
            {
                cout << i->data << " ->";
                i = i->next;
            } while (i != head);
            //cout<<"<- head"<<endl;
            cout << i;
            //this format is just to check first and last node address same or not
        }
    }
};

int main()
{
    CircularLL *l = new CircularLL();
    l->addAtEnd(10); //addAtEnd
    l->addAtEnd(20);
    l->addAtEnd(30);
    l->addAtEnd(40);
    l->addAtEnd(50);
    l->addAtEnd(60);
    l->AddAtBeg(5);
    l->AddAtBeg(50);
    l->AddAtBeg(60);
    l->AddAtBeg(70);
    l->print();
}