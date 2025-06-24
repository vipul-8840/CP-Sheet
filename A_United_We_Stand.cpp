#include <bits/stdc++.h>
using namespace std;


void print(vector<int>& arr)
{
    
     for(int i=0;i<arr.size();i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       int n ;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       {
          cin>>arr[i];
       }   
       int maxi = *max_element(arr.begin(),arr.end());
       vector<int>b;
       vector<int>c;

       for(int i=0;i<n;i++)
       {
           if(arr[i]!=maxi)
           {
              b.push_back(arr[i]); 
           }
           else 
           c.push_back(arr[i]);
       }

       if(b.size()==0)
       cout<<"-1"<<endl;
       else{
             cout<<b.size()<<" "<<c.size()<<endl;
            print(b);
            print(c);
       }

    }
    return 0;
}
