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

void printlist(Node* hed)
{
    while(hed != NULL){
        cout<<hed->data<<" ";
        hed= hed->next;
    }
    
}

void del(Node** hed, int dat){
  
   Node* temp = *hed, *prev;
   
   if(temp != NULL && temp->data == dat)
   {
       *hed = temp->next;
       free(temp);
       return;
   }
   
   while(temp != NULL && temp->data != dat )
   {
       prev=temp;
       temp= temp->next;
   }
   
   if(temp == NULL)
   {
       return;
   }
   
   prev->next=temp->next;
   free(temp);
  
}

int main()
{
    cout<<"Hello World";
    struct Node* head =NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    printlist(head);

    del(&head, 3);
    printlist(head);
    return 0;
}
