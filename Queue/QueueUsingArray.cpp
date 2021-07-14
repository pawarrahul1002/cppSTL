#include <iostream>
using namespace std;

class Queue
{
private:
    int n;
    int front, rear;
    int *arr;

public:
    Queue(int n)
    {
        this->n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void Enqueue(int x)
    {
        if (rear == n - 1)
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }

    void Dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            cout << "Dequeued Element : " << arr[front] << endl;
            front = rear = -1;
        }
        else
        {
            cout << "Dequeued Element : " << arr[front] << endl;
            front++;
        }
    }

    void Display()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            for (int i = 0; i < rear + 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void Peek(){
        if (front==-1 && rear == -1)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        {
            cout<<arr[front]<<endl;
        }
        
    }
};

int main(){
        system("CLS");
        Queue *q = new Queue(4);
        q->Enqueue(1);
        q->Enqueue(2);
        q->Enqueue(3);
        q->Display();
        q->Dequeue();
        q->Enqueue(77);
        q->Display();
        q->Dequeue();
        q->Dequeue();
        q->Dequeue();
        q->Dequeue();




    return 0;
}
