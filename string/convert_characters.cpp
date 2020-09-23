#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    string str,t;
    getline(cin,str);
    stringstream X(str);
    while(getline(X,t,' ')){
        cout<<t<<endl;
    }
    cout<<str;
    
    for(int i=0;i<str.length();i++)
    {
        if('A' <= str[i] && str[i]<='Z')
            str[i]=tolower(str[i]);
        else if('a' <= str[i] && str[i]<='z')
            str[i]=toupper(str[i]);
        else 
        continue;
    }
    
    cout<<str;
}