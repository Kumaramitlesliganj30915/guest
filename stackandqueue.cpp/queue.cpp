#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << "sizeof queue is=" << q.size() << endl;
    // cout << "top element of queue=" << q.top() << endl;
    // int num = q.pop();
    // cout << "pop element is=" << num << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "quque is not empty" << endl;
    }
    cout << "size of second queue=" << q.size();
    cout << "front of quque is=" << q.front() << endl;
}