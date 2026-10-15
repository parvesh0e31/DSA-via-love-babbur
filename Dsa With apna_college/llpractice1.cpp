#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node *next;

    Node(int val){

    data = val;
    next = NULL;
    }
};

class list {
    private:

    Node * head;
    Node * tail;

    public:
    list() {
            
    head = tail = NULL;
    }
    void insertatmiddle(int val,int pos){

        Node *temp = head;
        Node *newnode = new Node(val);

        if(pos == 0){

            head = newnode;
            newnode->data = val;
            return ;
        }

int i = 0;
        while(i<pos-1){
            
            temp = temp->next;
          
            i ++;
        }
          newnode->next = temp->next;
            temp->next = newnode;


    }

void printlist(){

    Node * temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;


    }
    cout<<"NULL";
}
};
int main(){
    list ll;

    ll.insertatmiddle(9,0);
    ll.insertatmiddle(8,1);
    ll.insertatmiddle(7,2);
    ll.insertatmiddle(4,3);
    ll.insertatmiddle(3,4);
    ll.insertatmiddle(2,5);
    ll.printlist();
return 0;

}