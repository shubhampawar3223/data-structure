//implementation of queue using stack by method of cotsly dequeue.

#include<bits/stdc++.h>

using namespace std;

class Queue {
public:
//declaration of two stacks
std::stack<int> s1,s2 ;
void enque(int item) {
    s1.push(item);    
}

int dequeue(){
    //check if stack s2 is empty or not
    if(!s2.empty()){
        cout<<"Q s2 is not empty"<<endl;
        exit(0);
    }
    //copy elements of s1 to s2    
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }    
    //perform pop operation on s2   
    int x= s2.top();
    s2.pop();
    
    //send elements of s2 to s1
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}
};

int main(){
    Queue q;
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    
    cout<<q.dequeue()<<"is deQ form Q"<<endl;
    cout<<q.dequeue()<<"is deQ form Q"<<endl;
    cout<<q.dequeue()<<"is deQ form Q"<<endl;

    return 0;
}