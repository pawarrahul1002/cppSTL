#include <iostream>
using namespace std;

class Queue
{
public:
    int n;
    int front;
    int rear;
    int *arr;

    Queue(int n)
    {
        // cout << this->n << endl;
        this->n = n;

        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void Enqueue(int x)
    {

        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[front] = x;
        }
        else if ((rear + 1) % n == front)
        {
            cout << " Queue is full.. cant add" << endl;
        }
        else
        {

            rear = (rear + 1) % n;
            arr[rear] = x;
        }
    }

    void Dequeue()
    {
        if (front == rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << "Dequeued element is : " << arr[front] << endl;
            front = (front + 1) % n;
        }
    }

    void Peek()
    {
        if (front == rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            cout << arr[front] << endl;
        }
    }

    void Display()
    {
        if (front == rear == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue is : " << endl;
            int i = front;
            while (i != rear)
            {
                cout << arr[i] << " ";
                i = (i + 1) % n;
            }
        }
    }
};

int main()
{
    system("CLS");
    Queue *q = new Queue(6);
    q->Enqueue(1);
    q->Enqueue(2);
    q->Enqueue(3);
    q->Enqueue(4);
    q->Enqueue(5);
    q->Enqueue(6);
    q->Dequeue();
    q->Dequeue();
    q->Dequeue();
    q->Enqueue(60);
    q->Enqueue(70);
    q->Enqueue(80);
    q->Enqueue(90);
    q->Display();
    return 0;
}
