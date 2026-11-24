#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()

    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop_front(){

        if (head == NULL){

            cout<<"list is empty "<<endl;

        }
        else {

            Node *temp = head;
            head = head->next;
            temp ->next = NULL;

            if (head == NULL) {
                tail = NULL;
            }
            
            delete temp;

        }
    }

    void insertatmiddle(int value , int pos){

        if (pos < 0){
                return;
            }

            if (pos==0){
                push_front(value);
                return ;
            }

        Node *newnode = new Node (value);
        Node *temp = head;

        for(int i =0; i < pos-1;i++){
            if(temp == NULL){
                cout<<"Ivalid position to insert an element"<<endl;
                delete newnode;
                return;
            }
            
            temp = temp -> next ;

        }

        if (temp == NULL) {
            cout<<"Ivalid position to insert an element"<<endl;
            delete newnode;
            return;
        }

         newnode->next = temp->next;
         temp->next = newnode;
         if (newnode->next == NULL) {
             tail = newnode;
         }
    }

    void search(int value){
        int i = 0;
        Node *temp = head;
        while(temp!=NULL){
            if(temp->data == value){

                cout<<"\nfound the value at index : "<<i<<endl;
                return ;
            }
            temp = temp->next;
            i++;


        }
        cout<<"\nnot found the value in the ll";
    }

    Node* reverselist(Node* start){

        Node * prev = NULL;
        Node * curr = start;
        Node * next = NULL;
        while(curr!=NULL){

            next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = next ;

        }

        tail = start;
        head = prev;
        return prev;
    
    }

    Node* getHead(){
        return head;
    }

    void PrintLl(){

        Node *temp = head;
        while (temp!= NULL){
            cout<<temp->data << " -> ";
            temp = temp->next;
                    

        }
        cout<<"NULL";
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.PrintLl();
    cout<<"\n";
    ll.insertatmiddle(5,8);
    ll.PrintLl();
    ll.search(2);

    
    cout<<endl;
    ll.PrintLl();
Node* newHead = ll.reverselist(ll.getHead());
    ll.PrintLl();

    return 0;
}