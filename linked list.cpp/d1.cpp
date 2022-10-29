#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void take_at_first(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    
}
void take_at_tail(Node* &tail,int d){
    Node *temp1=new Node(d);
    tail->next=temp1;
    temp1->prev=tail;
    tail=temp1;
}
Node *takeInput(){
    int data;
    cout<<"enter the linked list"<<" ";
    cin>>data;
     Node *h1=NULL;
     Node *h2=NULL;
     
     
    while(data!=-1){
       Node *newNode=new Node(data);
       if(prev==NULL && next==NULL){
           h1=newNode;
           h2=newNode;
       }
       else{
           h2->next=newNode;
           newNode->prev=h2;
           h2=newNode;
       }
       cin>>data;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail=node1;
    print(head);
    take_at_first(head,12);
    print(head);
    take_at_tail(tail,43);
    print(head);
    cout<<"take an input as a new function="<<" ";
    Node *head1=takeInput();
    print(head1);
    
    
}