/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int delarr(int arr[],int n,int x)
{  
    int i;
    for(i=0; i<=n; i++)
    {
        if(arr[i]==x)
        break;
    }
    
    if(i < n)
    {
        int j;
        n=n-1;
        for( j=i; j<=n; j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return n;
}

void printarr(int a[],int k)
{
    for(int i=0 ;i<=k ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int x,n;
    cout<<"Hello World";
    cout<<"Enter n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    printarr(a,n-1);
    cout<<"Enter element to delete";
    cin>>x;
    int ne=delarr(a,n-1,x);
    printarr(a,ne);
    return 0;
}
