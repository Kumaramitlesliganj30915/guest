#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
Node takeInput()
{
    int data;
    cin >> data;
    
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                temp->next = newNode;
            }
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }
}
int main()
{
    Node *head = takeInput();
    print(head);
}