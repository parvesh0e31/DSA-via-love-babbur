#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node *next;
    Node(int value){

        data = value;
        next = NULL;

    }
};

class list{
    public:
    Node *head = NULL;
    Node *tail = NULL ;


    void push_front(int value){

        Node *newnode = new Node(value);
        if (head == NULL)
        {

            head = tail = newnode;
            return ;
        }
        newnode->next = head;
        head = newnode;

    }
    void push_back(int value){

        Node *newnode = new Node(value);

        if(head == NULL){


        head = tail = newnode;
        }

        else
        {

        tail ->next = newnode;
        tail = newnode;
        }
    }

    void pop_front(){

    if(head == NULL){
    cout<<"list is empty";}
    else {

    Node *temp;
    temp = head;
    
    head = head -> next;
    temp -> next = NULL;
    delete temp;
    }}

    void pop_back(){

    if (head == NULL){
    cout<<"list is empty";
return ;}
if(head == tail){
    delete head;
    head = tail = NULL;
    return ;
}

    Node *temp = head;

    while(temp->next != tail){

    temp = temp->next;

    }

delete tail;
tail = temp;
tail -> next = NULL;
  }
    
    void printll(){

        Node *temp = head;
        while(temp!=NULL){

            cout<<temp->data<<" -> ";

            temp = temp->next;
        }
        cout<<"NULL";

    }
}
;
int main(){

    
   list ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.printll();
    cout<<endl;


ll.pop_front();
    ll.pop_back();

    ll.printll();
    return 0;
}
