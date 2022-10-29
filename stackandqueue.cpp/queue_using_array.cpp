#include <bits/stdc++.h>
using namespace std;
class q
{
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    q(int s)
    {
        arr = new int[s];
        front = 0;
        rear = 0;
    }
    void enquqe(int data)
    {
        if (rear == size)
        {
            cout << "queue iss full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
        return ans;
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    q(10);
    q.enquqe(20);
    q.enquqe(30);
    int ans = q.dequeue();
    cout << ans << endl;
}