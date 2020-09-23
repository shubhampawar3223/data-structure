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

void insert(Node** head, int dat)
{
Node* ptr1 = new Node();
Node* temp = *head;
ptr1->data = dat;
ptr1->next = *head;

if(*head != NULL)
{
    while(temp->next != *head)
    {
        temp=temp->next;
    }
    temp->next=ptr1;
}
else
   ptr1->next=ptr1;

    *head = ptr1;
}



void prin(Node* head){
    cout<<"Circular Linked List elements are:";
    Node* a =head;
    do
    {
        cout<<a->data<<" ";
        a=a->next;
    }while(a != head);
}

int main()
{

    Node* a = NULL;
    
    insert(&a, 1);
    insert(&a, 2);
    insert(&a, 3);
    insert(&a, 4);
    insert(&a, 5);
    
    prin(a);
    return 0;
}
