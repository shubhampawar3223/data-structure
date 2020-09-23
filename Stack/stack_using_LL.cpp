#include<bits/stdc++.h>

using namespace std;

class Stacknode{
  public:
      int data;
      Stacknode* next;
};

Stacknode* newNode(int dat)
{
   //create new Stacknode and return it
    Stacknode* node= new Stacknode();
    node->data=dat;
    node->next=NULL;
    return node;
}

int isempty(Stacknode* root)
{
    //return if stack is empty or not
    return !root;    
}


void push(Stacknode** root,int dat)
{
    //call newNode() and create new object
    Stacknode* node= newNode(dat);
    node->next=*root;
    *root= node;
    cout<<dat<<"is pushed in stack"<<endl;
}

int peek(Stacknode** root)
{
    if(isempty(*root))
       return INT_MIN;
    else
       return (*root)->data;
}

int pop(Stacknode** root)
{
    //-2147483648 is returned if stack is empty
    if(isempty(*root))
    {
        return INT_MIN;
    }
    Stacknode* temp =*root;
    *root=(*root)->next;
    return temp->data;
    free(temp);
}



int main()
{   
    int k;
    Stacknode* head = NULL;
    k =pop(&head);
    cout<<k<<"is popped out"<<endl;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    k =pop(&head);
    cout<<k<<"is popped out"<<endl;
    k = peek(&head);
    cout<<k<<"is peek element"<<endl;
    return 0;
}