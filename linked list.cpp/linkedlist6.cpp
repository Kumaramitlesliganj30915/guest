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
Node *takeInput()
{
    int d1;
    cout << "Enter a linked list number";
    cin >> d1;
    Node *head = NULL;
    Node *tail = NULL;
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
void print(Node *s)
{
    Node *temp = s;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int count(Node *count1)
{
    int c = 0;
    Node *temp1 = count1;
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        c++;
    }
    return c;
}
bool search(Node *head, int item)
{
    Node *s2 = head;
    while (s2 != NULL)
    {
        if (s2->data == item)
            return true;
        else
            s2 = s2->next;
    }
    return false;
}
int main()
{

    Node *head = takeInput();
    print(head);
    cout << "Number of linked list is=" << count(head) << endl;
    if (search(head, 10))
        cout << "Number is found";
    else
        cout << "Number is not fount";
}