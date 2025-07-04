#include<bits/stdc++.h>
using namespace std ;

void display(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

bool find(int target,int end ,int x,int count,int&flag,vector<int>&arr)
{
    if(target==0)
    {
         flag = 1;
        cout<<"YES"<<endl;
        cout<<count<<endl;
        display(arr);
        return true ;
    }
    if(target<0 )
    {
        return false ;
    }
    
    
    
   
    for(int i=1;i<=end;i++)
    {
        if(i==x)
        continue;
        arr.push_back(i);
        
        if (find(target - i, end, x, count + 1, flag,arr)) {
            return true;  // Stop on first success
        }
           arr.pop_back();
    }
 
    return false;
}

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        int k;
        int x;
        cin>>n>>k>>x;
        int flag = 0;
        vector<int>arr ;
        
        find(n,k,x,0,flag,arr);
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}