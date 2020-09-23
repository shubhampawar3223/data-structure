#include<bits/stdc++.h>

using namespace std;

int binary_sort(int a[],int l,int r,int x)
{
    if(r>=l)
    {
    int mid=l + (r-l) /2;
    
    //if the element is present at middle 
    if(x==a[mid])
    return mid;
    
    //if lement is greater than middle no.
    //ie.present in left sub array

    if(x > a[mid])
         return (binary_sort(a,mid+1,r,x));
    
        //if lement is lesser than middle no.
        //ie.present in right sub array
        return (binary_sort(a,0,mid-1,x));
}
    return -1;
}

int main(){
    //Enter array size
    int n;
    cin>>n;
    int result,x;
    //enter array elements which should be sorted
    int a[n];
   for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //Enter no. which needed to be searched
    cout<<"Enter no. to search"<<endl;
    cin>>x;
    result=binary_sort(a,0,n-1,x);
    
    if(result == -1)
    cout<<"Element is not present in array";
    else
    cout<<"present and index:"<<result;

    
     return 0;
}