#include<bits/stdc++.h>
using namespace std ;

void print(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main ()
{
    int t ;
    cin>>t;
    while(t--)
    {
       int n ;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       
       for(int i=0;i<n;i++)
       {
           arr[i] = n + 1 - arr[i];
       }
       print(arr);
    }
    return 0;
}