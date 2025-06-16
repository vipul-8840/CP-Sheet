// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std ;
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
         cout<<endl;
         int i=1;
         while(i<(n-1))
         {
             if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
             {
                 swap(arr[i],arr[i+1]);
             }
             else
             {
                 i++;
             }
         }
         vector<int>temp = arr ;
         sort(arr.begin(),arr.end());
         if(arr==temp)
         cout<<"yes"<<endl;
         else
         cout<<"NO"<<endl;
         
     }
     return 0;
 }