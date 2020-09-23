#include<iostream>

using namespace std;

int main(){
int n,i,x,j,sub[3];
cout<<"Enter n:";
cin>>n;
int a[n];
cout<<"Enter array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}

cout<<"Enter updation array";
for(i=0;i<3;i++)
{
    cin>>sub[i];
}
for(i=sub[0];i<=sub[1];i++)
{
    a[i]=a[i]+sub[2];
}

for(i=0; i<n;i++)
{
    cout<<a[i]<<" ";
}
}