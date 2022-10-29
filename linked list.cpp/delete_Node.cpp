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
        this->next = NULL;
    }
};
Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteNode(Node *head, int i)
{
    int count = 0;
    Node *temp = head;
    Node *a;
    Node *b;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    a = temp->next;
    b = a->next;
    temp->next = b;
    delete (temp);
}
int main()
{
    Node *head = takeInput();
    print(head);
    deleteNode(head, 3);
    print(head);
}