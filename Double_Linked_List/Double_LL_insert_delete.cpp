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
      
       Node* prev;
       Node* next;
       int data;
};

void push(Node** head, int dat)
{
    Node* node =new Node();
    Node* a= *head;
    
    node->data =dat;
    node->prev=NULL;
    node->next= *head;
    //node->prev = *head->prev;
    if(*head != NULL)
    {
        (*head)->prev= node;
    }
    *head = node;
    
}

void insertafter(Node* node, int dat)
{
    Node* ins =new Node();
    ins->data= dat;
    ins->next= node->next;
    ins->prev= node;
    node->next =ins;
    ins->next->prev= ins;
}

void pushend(Node** head, int dat)
{
    Node* node= new Node();
    Node* temp = *head;
    node->data=dat;
    if(*head == NULL)
    {
     node->prev=NULL;
     node->next=*head;
     *head=node;
     return;
    }
    
    while(temp->next != NULL)
      temp=temp->next;
      
    node->next=temp->next;
    temp->next=node;
    node->prev= temp;
    //node->next->prev= node;
}

void delatfront(Node** head)
{
    Node* a= *head;
    a->next->prev = a->prev;
    *head = a->next;
    free(a);
}

void delement(Node** prv){
    Node* del=(*prv)->next;
    del->prev->next =del->next;
    del->next->prev =del->prev;
    free(del);
    
}

void printt(Node* head)
{
    while(head !=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node* he =NULL;
    
    push(&he, 4);
    push(&he, 3);
    push(&he, 2);
    push(&he, 1);
        
    
    printt(he);
    pushend(&he, 5);
    cout<<"\nafter pushing at end:"<<endl;
        printt(he);
    insertafter(he->next->next,8);
    cout<<"\nafter insertion of element:"<<endl;
        printt(he);
        
    //deletion at front of list
    delatfront(&he);
    cout<<"\nAfter front delete:"<<endl;
         printt(he);
    //delete after given node         
    delement(&he->next);
    cout<<"\nAfter any delete:"<<endl;
         printt(he);
        
    return 0;
}
