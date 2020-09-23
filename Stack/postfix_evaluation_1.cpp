#include<bits/stdc++.h>
#include<string>

using namespace std;

void postfixeval(string s){
    std::stack<int> stak ;
    int k;
    for(int i=0; i < s.length() ;i++){
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){

            switch(s[i]){
                case '0':
                            k=0;
                            stak.push(k);
                            break;
                case '1':
                            k=1;
                            stak.push(k);
                            break;
                case '2':
                            k=2;
                            stak.push(k);
                            break;
                case '3':
                            k=3;
                            stak.push(k);
                            break;
                case '4':
                            k=4;
                            stak.push(k);
                            break;
                case '5':
                            k=5;
                            stak.push(k);
                            break; 
                case '6':
                            k=6;
                            stak.push(k);
                            break;
                case '7':
                            k=7;
                            stak.push(k);
                            break;
                case '8':
                            k=8;
                            stak.push(k);
                            break;
                default:
                            k=9;
                            stak.push(k);
                            
            }
        }
        else
        {
            char c;
            char a= stak.top();
            stak.pop();
            char b=stak.top();
            stak.pop();
            switch(s[i]){
                case '^':
                        c= b ^ a;
                        stak.push(c);
                        break;
                case '%':
                        c= b % a;
                        stak.push(c);
                        break;
                case '*':
                        c= b * a;
                        stak.push(c);
                        break;
                case '+':
                        c= a + b;
                        stak.push(c);
                        break;
                case '-':
                        c= b - a;
                        stak.push(c);
                        break; 
                default: 
                       cout<<"Unwanted expression";
            }
        }
    
        //cout<<'n'<<stak.top();
    }
    cout<<stak.top();
}

int main(){
    string expp= "231*+9-";
    postfixeval(expp);
    return 0;
}