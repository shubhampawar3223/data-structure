#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int item){
        data= item;
        next= NULL;
    }
};

class Queue{
    public:
    Node *front, *rear;
    Queue(){
        front= rear =NULL;
    }
    
    void enqueue(int item){
        Node* temp = new Node(item);
        if(rear== NULL){
            front=rear=temp;
            return;
        }
        
        rear->next= temp;
        rear= temp;
        
        cout<<rear->data<<"is qued "<<endl;
    }
    
    void dequeue(){
        if(front== NULL)
        return ;
        
        Node* temp = front;
        front = front->next;
        
        cout<<temp->data<<"is dequed data"<<endl;
        if(front == NULL)
          rear= NULL;
          
         delete(temp);
    }
};

int main(){
    
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    q.dequeue();
}