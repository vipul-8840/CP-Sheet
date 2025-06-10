#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin>>t;
    while(t--)
    {
          int n ;
          int x;
          cin>>n>>x;
          vector<int>arr(n);
          for(int i=0;i<n;i++)
          {
             cin>>arr[i];
              
          }
          int maxi = 0;
          for(int i=1;i<n;i++)
          {
              maxi = max(arr[i]-arr[i-1],maxi);
          }
          
          maxi = max(arr[0]-0 , maxi);
          maxi = max(2*(x - arr[n-1]),maxi);
          
          cout<<maxi<<endl;
           
    }
    return 0;
}