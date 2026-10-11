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
    Node *tail ;


    void push_front(int value){

        Node *newnode = new Node(value);
        if (head == NULL)
        {

            head = newnode;
            return ;
        }
        newnode->next = head;
        head = newnode;

    }
    void printll(){

        Node *temp = head;
        while(temp!=NULL){

            cout<<temp->data<<" -> ";

            temp = temp->next;
        }
        cout<<"NULL";

    }
};

int main(){

    list ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.printll();
    return 0;
}