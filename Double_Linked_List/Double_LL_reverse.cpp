
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void insert(Node** head, int dat )
{
    Node* temp= *head;
    Node* a= new Node();
    a->data= dat;
    a->next=*head;
    a->prev=NULL;
    
    if(*head != NULL)
    {
        (*head)->prev=a;
    }
    *head=a;
}

void reverse(Node **head_ref)  
{  
    Node *temp = NULL;  
    Node *current = *head_ref;  
      
    /* swap next and prev for all nodes of  
    doubly linked list */
    while (current != NULL)  
    {  
        temp = current->prev;  
        current->prev = current->next;  
        current->next = temp;              
        current = current->prev;  
    }  
      
    /* Before changing the head, check for the cases like empty  
        list and list with only one node */
    if(temp != NULL )  
        *head_ref = temp->prev;  
}  
  
  

void printt(Node* head)
{
    Node* node = head;
    while(node!= NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){
    Node* he=NULL;
    insert(&he,5);
    insert(&he,4);
    insert(&he,3);
    insert(&he,2);
    insert(&he,1);
    printt(he);
    reverse(&he);
    printt(he);
}