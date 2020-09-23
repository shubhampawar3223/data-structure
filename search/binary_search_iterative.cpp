#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[],int l,int r,int x)
{
    while(l<= r)
    {
    int mid=l + (r-l) /2;
    
    //if the element is present at middle 
    if(x==a[mid])
    return mid;
    
    //if lement is greater than middle no.

    if(x > a[mid])
         l=mid+1;
    else
    r=mid-1;              //if lement is lesser than middle no.
    
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
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //Enter no. which needed to be searched
    cout<<"Enter no. to search"<<endl;
    cin>>x;
    result=binary_search(a,0,n-1,x);
    
    if(result == -1)
    cout<<"Element is not present in array";
    else
    cout<<"present and index:"<<result;
  
     return 0;
}