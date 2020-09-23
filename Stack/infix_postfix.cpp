
#include <bits/stdc++.h>
using namespace std;

int stat(char p)
{
    if(p=='^')
    return 3;
    else if(p=='/' || p=='*')
    return 2;
    else if(p=='+' || p=='-')
    return 1;
    else
    return -1;
    
}

void infix_post(string eqn)
{
    std::stack<char> st;
    st.push('N');
    string s;
    char c;
    
    for(int i=0; i < eqn.length(); i++)
    {
        if((eqn[i]>= 'a' && eqn[i]<='z')|| (eqn[i]>= 'A' && eqn[i]<='Z'))
        {
            s+=eqn[i];
        }
        
        else if(eqn[i] =='(')
        {
            st.push(eqn[i]);
        }
        else if(eqn[i]==')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                c=st.top();
                st.pop();
                s+=c;
            }
            
            if(st.top()=='(')
            {
                c=st.top();
                st.pop();
            }
        }
        else
        {
            while(st.top() != 'N' && stat(st.top()) >= stat(eqn[i]))
            {
                c=st.top();
                st.pop();
                s+=c;
            }
            st.push(eqn[i]);
        }
        
    }
    
    while(st.top() != 'N')
    {
        c=st.top();
        st.pop();
        s+=c;
    }
    cout<<s;
}

int main()
{
    string eqn = "a+b*(c^d-e)^(f+g*h)-i";
    infix_post(eqn);
    return 0;
}
