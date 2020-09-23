#include<iostream>

using namespace std;

int main(){
int n,i,x,j;
cout<<"Enter n:";
cin>>n;
int a[n];
cout<<"Enter array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter element to insert"<<endl;
cin>>x;
cout<<"Enter position:"<<endl;
cin>>j;
for(i=n; i>=(j);i--)
{
    a[i]= a[i-1];
}

a[j-1]=x;
for(i=0; i<=n;i++)
{
    cout<<a[i]<<" ";
}
}