#include<iostream>
using namespace std;
    class node{
        public:
        int data;
        node *next;

    };
Node *input(Node*head, int d){
    node*ptr=head;
    node*temp = new node;
    temp-> data = d;
    temp->next = Null;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr-> data = d;
    ptr->next = head;
    return head;
 
    void printList(Node*head)
    {
        while(root!=Null){
        cout<<root->data<<" ";
        root = root ->next;
    }
 }
int main(){
    int n;
    node*head=Null;
    cout<<"Enter the number of elements in the list"<<endl;
    cin>>n;
    cout<<"Enter elements :"<<endl;
    int temp;
    cin>>temp;
    head = new node;
    head->data = temp;
    head-> next= Null;

    for(int i=0; i<n-1; i++){
        cin>>temp;
        head= input(head,temp);
    }
    print(head);
   return 0; 
}