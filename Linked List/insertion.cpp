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
    Node* no = new Node();
    Node* ab = *head;
    no->data=dat;
    no->next=NULL;
    
    if(*head ==NULL)
    {
        *head = no;
        return;
    }
    
    while(ab->next != NULL)
    {
        ab=ab->next;
    }
    
    ab->next =no;
}

void front(Node** head, int dat)
{
    Node* h = new Node();
    h->data= dat;
    h->next = *head;
    *head =h;
}

void ins(Node* nod,int dat)
{
    Node* ni=new Node();
    ni->data= dat;
    ni->next=nod->next;
    nod->next= ni;
}

void prin(Node* head){
    cout<<"Linked List elements are:";
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{

    Node* a = NULL;
    
    insert(&a, 1);
    insert(&a, 2);
    front(&a,0);
    insert(&a, 3);
    insert(&a, 4);
    insert(&a, 5);
    ins(a->next->next,11);
    
    prin(a);
    return 0;
}
