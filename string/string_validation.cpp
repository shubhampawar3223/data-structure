#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"hello";
    int k,l=0,m=0,n=0;
    char store[12] ={'1','2','3','4','5','6','7','8','9','=','-','+'};
    string eqn;
    getline(cin,eqn);
    for(int i=0;i<eqn.length();i++)
    {
        cout<<eqn[i];
        k=0;
        for(int j=0; j<12;j++)
        {
            if(eqn[i] == store[j])
            {
                k=1;
                break;
            }
            
        }
            if(eqn[i]=='-')
             l=1;
            else if(eqn[i]=='+')
            m=1;
            else if(eqn[i]=='=')
            n=1;
            else 
            continue;

        if(k==1)
        continue;
        else 
         break;
    }
    cout<<l<<m<<n;
    if(k==1 && l==1 && m==1 && n==1 )
    cout<<"Equation is  valid";
    else 
    cout<<"Eqaution is not valid";
    return 0;
}