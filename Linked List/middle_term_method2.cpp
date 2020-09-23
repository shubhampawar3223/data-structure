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

void push(Node** hed,int dat)
{
     Node* a= new Node();
     a->data = dat;
     a->next = *hed;
     *hed = a;
}

void reverse(Node** head)
{
    Node* curr= *head;
    Node* prev= NULL;
    Node* nex = NULL;
    
    while(curr != NULL)
    {
        nex= curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    *head=prev;
}

void mid(Node* head)
{
    Node* a= head;
    Node* b= head;
    int len=0;
    
    while(a != NULL)
    {
        len++;
        a=a->next;
    }
    
    cout<<"length is"<<len;
    int r=len%2;
    if(r==0)
    {
        for(int i=1; b!= NULL && i != ((len/2)+1) ; i++)
        {
            b=b->next;
        }
        cout<<"Middle term by method 1 : "<<b->data<<endl;
    }
    else
    {
        for(int i=1; b!= NULL && i != (len+1)/2 ; i++)
        {
            b=b->next;
        }
        cout<<"Middle term by method 1: "<<b->data<<endl;
    }
}

void mid_method2(Node* head)
{
 Node* slow =head;
 Node* fast =head;
 
 while(fast != NULL && fast->next != NULL)
 {
    slow= slow->next;
    fast= fast->next->next;
 }
 cout<<"Middle term by method 2: "<<slow->data<<endl;
}

void printlist(Node* hed)
{
    while(hed != NULL){
        cout<<hed->data<<" ";
        hed= hed->next;
    }
    
}




int main()
{
    cout<<"Hello World";
     Node* head =NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    //push(&head,5);
    printlist(head);
    mid(head);
    mid_method2(head);
  //  reverse(&head);
 //    printlist(head);
    
    return 0;
}
