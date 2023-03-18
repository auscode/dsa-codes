#include <bits/stdc++.h>

using namespace std;

// creating node class
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

// taking input as a linked list
Node *takeInput()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        // creating new node dynamically
        Node *newNOde = new Node(data);
        // if head is empty
        if (head == NULL)
        {
            // give new node data to the head
            head = newNOde;
            tail = newNOde;
        }
        else
        {
            // passing head to temp
            tail->next = newNOde;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

// creating function to print
// passing head to function
void print(Node *head)
{
    Node *temp = head;
    // checking if the head is null or 0
    while (temp != NULL)
    {
        // printing data value at head
        cout << temp->data << " ";
        // passing head to next element
        temp = temp->next;
    }
}

int main()
{
    /*
    //statically creating
    Node n1(1);

    //storing node 1
    Node *head = &n1;

    Node n2(6);

    //connecting it with node 1
    n1.next = &n2;

    cout<<n1.data<<" "<<n2.data <<endl;

    */

    /*
    //    generating node
       Node *n3 = new Node(10);
       Node *n4 = new Node(50);

    //    connecting node
        n3-> next = n4;

        // storing head
        Node *head  = n3;

        // cout << n3->data << " " << n4->data << endl;

    print(n3);

    */

    /*
     Node n5(6);
     Node *head = &n5;

     //    generating node
     Node n6(40);
     Node n7(80);
     Node n8(40);

     // connecting nodes
     n5.next = &n6;
     n6.next = &n7;
     n7.next = &n8;

     print(head);

    */

    // print(takeInput());

    
}