/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
};

void push(Node** head_ref, int data) 
{ 
    // Create a new node and make head as next 
    // of it. 
    Node* ptr1 = new Node(); 
    ptr1->data = data; 
    ptr1->next = *head_ref; 
  
    /* If linked list is not NULL then set the  
    next of last node */
    if (*head_ref != NULL) { 
        // Find the node before head and update 
        // next of it. 
        Node* temp = *head_ref; 
        while (temp->next != *head_ref) 
            temp = temp->next; 
        temp->next = ptr1; 
    } 
    else
        ptr1->next = ptr1; /*For the first node */
  
    *head_ref = ptr1; 
} 
  
void del(Node** head_ref, int k)
{
    Node* n= *head_ref;
    Node* temp  =*head_ref;
    Node* d =*head_ref;
    if((*head_ref)->data == k)
    {
        while(n->next != *head_ref)
        {
           n=n->next;
        }
         n->next = (*head_ref)->next;
         *head_ref=temp->next;
         free(temp);
        return;      
    }
    while(temp->next != (*head_ref) && temp->next->data != k)
    {
        temp=temp->next;
    }
    
    if(temp->next->data ==k)
    {
        d= temp->next;
        temp->next=d->next;
        free(d);
    }
    else
     cout<<"Wrong input";
}

void printList(Node* head) 
{ 
    Node* temp = head; 
    if (head != NULL) { 
        do { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } while (temp != head); 
    } 
  
    cout << endl; 
}

int main()
{
    Node* head= NULL;
    Node* target= new Node();
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    //cout<<head->data;
    printList(head);
    del(&head,2);
    printList(head);
    del(&head,1);
        printList(head);
    del(&head,5);
        printList(head);
    return 0;
}
