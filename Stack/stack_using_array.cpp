
#include <bits/stdc++.h>

using namespace std;
# define max 1000

class Stack{
    private:
        int top;
    public:
        int a[max];
        Stack() {top=-1;}
        void push(int x);
        int pop();
        int peek();
        bool isempty();
};

void Stack::push(int x)
{
    //check if stack is overflow or not.
    if(top > max-1)
    {
        cout<<"Stack is overflow"<<endl;
    }
    else
    {
        a[++top]= x;
        cout<<x<<"is pushed in stack"<<endl;
    }
}

int Stack::pop()
{
    //chek if stack is underflow or not.
    if(top < 0)
    cout<<"Stack is underflow"<<endl;
    else
    {
        int x= a[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top > max-1)
        cout<<"Stack is overflow"<<endl;
    else if(top < 0)
    cout<<"Stack is underflow"<<endl;
    else
       return a[top];
}

bool Stack::isempty()
{
    if(top < 0)   
       return true;
}

int main()
{
    //printf("Hello World");
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    int k=s.peek();
    cout<<k<<"is peek element"<<endl;
     k=s.pop();
    cout<<k<<"is popped out"<<endl;
    k=s.peek();
    cout<<k<<"is peek element"<<endl;
    return 0;
}
