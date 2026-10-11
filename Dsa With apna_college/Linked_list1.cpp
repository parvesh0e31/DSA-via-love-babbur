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
            
            delete temp;

        }
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
    ll.pop_front();
    cout<<endl;
    ll.PrintLl();

    return 0;
}