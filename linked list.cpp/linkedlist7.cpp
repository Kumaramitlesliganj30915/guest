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
    Node *head = NULL;
    Node *tail = NULL;
    int d1;
    cout << "Enter a number\n";
    cin >> d1;
    while (d1 != -1)
    {
        Node *newNode = new Node(d1);
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
        cin >> d1;
    }
    return head;
}
Node *InsertNode(Node *head, int data, int pos)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
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
int main()
{
    Node *head = takeInput();
    int data, pos;
    cout << "Enter the position of to insert a new node data and pos" << endl;
    cin >> data >> pos;
    Node *h1 = InsertNode(head, data, pos);
    print(h1);
}