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
    Node *temp;
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cout << "Enter number in linked list\n";
    cin >> n;
    while (n != -1)
    {

        Node *newNode = new Node(n);
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
        cin >> n;
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
    cout << endl;
}

bool searchNode(Node *head, int search)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == search)
            return true;
        else
            temp = temp->next;
    }
    return false;
}
void abc(Node *&head, int i)
{
    Node *a, *b;
    a = head;
    int c = 0;
    while (a != NULL)
    {
        c++;
        a = a->next;
    }
    for (int l = 0; l < c - i; l++)
    {
        b = b->next;
    }
    head = b;

    a = head;
}

void InsertNode(Node *&head, int i, int d)
{
    Node *newNode = new Node(d);
    int count = 0;
    Node *temp = head;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
}
Node *DeleteNode(Node *head, int i)
{
    int count = 0;
    Node *prev = NULL;
    Node *curr = head;
    if (curr == NULL)
        return NULL;
    while (count < i)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev = curr->next;

    delete (curr);
    return head;
}
int main()
{
    Node *head = takeInput();
    print(head);

    InsertNode(head, 4, 20);
    print(head);

    cout << "####################################\n";
    abc(head, 2);
    print(head);
}