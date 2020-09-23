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
      Node* prev;
};

void push(Node** head_ref, int dat) 
{  
    Node* node= *head_ref;
    Node* temp= *head_ref;
    Node* a=new Node;
    a->data= dat;
    a->next=*head_ref;
    if(*head_ref !=NULL)
    {
    while(temp->next != *head_ref)
     temp=temp->next;
     
    a->next = temp->next;
    temp->next=a;
    a->prev= temp;
    (*head_ref)->prev=a;
    *head_ref=a;
    return;
    }
    else
    {
        *head_ref=a;
        (*head_ref)->next=*head_ref ;
        (*head_ref)->prev=*head_ref ;
        return;
    }
}
  
/*void del(Node** head_ref, int k)
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
*/

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
   // cout<<head->next->next->data;
    printList(head);
/*    del(&head,2);
    printList(head);
    del(&head,1);
        printList(head);
    del(&head,5);
        printList(head);
*/  
    return 0;
}
