#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Queue
{
private:
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    void Enqueue(int d)
    {
        Node *curr = new Node();
        curr->data = d;
        curr->next = NULL;

        if (front == NULL)
        {
            front = rear = curr;
        }
        else
        {
            rear->next = curr;
            rear = curr;
        }
    }

    void Dequeue()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is Empty" << endl;
        }
        else if (front == rear)
        {
            Node *temp = front;
            front = rear = NULL;
            delete temp;
        }
        else
        {
            Node *temp = front;
            cout << "Dequeued element : " << front->data << endl;
            front = front->next;
        }
    }

    void Peek()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << front->data << endl;
        }
    }

    void Display()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    Queue *q = new Queue();
    q->Enqueue(1);
    q->Enqueue(2);
    q->Enqueue(3);
    q->Enqueue(4);
    q->Enqueue(5);
    q->Display();
    q->Dequeue();
    q->Dequeue();
    q->Peek();
    q->Display();
    q->Enqueue(60);
    q->Display();









    return 0;
}







