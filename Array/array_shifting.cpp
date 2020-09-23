#include <iostream>

using namespace std;

int main()
{
int i,shift,n;
//Enter size of array
cout<<"Enter n:"<<endl;
cin>>n;
int a[n];
//Enter array 
cout<<"Enter array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
//Enter no. by which we are shiffying array
cout<<"enter no. of shifting"<<endl;
cin>>shift;
int p=shift-1;
int b[n],c[p];

//storing a[0] to a[shift-1] in an array
for(i=0;i<=p;i++)
{
    c[i]=a[i];
}

//storing a[sift] to a[n-1] in resultant array
int j=0;
for(i=shift;i<n;i++)
{
 b[j]=a[i];  
 j++;
}

//storing c[shift-1] array to resultant array
int k=0;
for(i=j;i<n && k<= p;i++)
{
    b[i]=c[k];
    k++;
    
}

cout<<"Output:"<<endl;
for(i=0;i<n;i++)
{
    cout<<b[i]<<" ";
}


return 0;
}
