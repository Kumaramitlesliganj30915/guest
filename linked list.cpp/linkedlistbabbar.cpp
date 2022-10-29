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
void InsertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
void InsertatPostion(Node* & head, int data, int pos)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deletion(Node* &head,int pos)
{
    Node *curr=head;
    Node *prev=NULL;
    int i=0;
    //deleting first node
    if(pos==1)
    {
        Node *temp=head;
      head=head->next;
      delete(temp);
    }

    //deleting any node
    else{
  Node *prev;
  Node *curr=head;
    while(i<pos-1)
    {
        prev=curr;
        curr=curr->next;
        i++;
    }
    
    }

}
int main()
{
    int d;
    cout << "Enter the data of the linked list\n";
    cin >> d;
    Node *head;
    while (d != -1)
    {
        InsertAthead(head, d);
        cin >> d;
    }

    print(head);
    InsertatPostion(head, 12, 3);
    print(head);
}