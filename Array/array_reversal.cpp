/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void reverse(int arr[],int start,int end)
{
    
    
    int temp;
    while(start < end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printarr(int a[],int k)
{
    for(int i=0;i<=k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    cout<<"Hello World";
    int a[4];
    cout<<"Enter array elements";
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    printarr(a,3);
    reverse(a,0,3);
    printarr(a,3);
    return 0;
}
