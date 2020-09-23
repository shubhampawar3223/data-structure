#include<bits/stdc++.h>

using namespace std;

class Queue {
public:
//declaration of two stacks
std::stack<int> s1,s2 ;
void enque(int item) {
//check if s2 is empty 
    if(!s2.empty())
       cout<<"error in s2"<<endl;
//push elemnts of s1 into s2     
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    
    s1.push(item);
//push elemnts of s2 into s1    
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    cout<<s1.top();
    cout<<item<<"is in enQ"<<endl;
}

int dequeue(){
    if(s1.empty()){
        cout<<"Q s1 is empty"<<endl;
        exit(0);
    }
    
    int x= s1.top();
    s1.pop();
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

    return 0;
}