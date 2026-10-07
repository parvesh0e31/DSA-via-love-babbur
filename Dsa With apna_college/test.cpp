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

    // FIXED: Removed the "ll." prefix from the function name
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

    void PrintLl(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << " "; // Added a space for cleaner output
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.PrintLl(); // Output will be: 3 2 1 

    return 0;
}
