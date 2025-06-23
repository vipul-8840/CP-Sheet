#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n ;
        cin>>n;
         vector<int>arr(n);
         vector<int>a;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        a.push_back(arr[0]);
        
        int i=1;
        while(i<n)
        {  
            if(arr[i]>=arr[i-1])
            {
                a.push_back(arr[i]);
            }
            else{
                a.push_back(arr[i]);
                a.push_back(arr[i]);
            }
            i++;
        }
     
        cout<<a.size()<<endl;

       for(int i=0;i<a.size();i++)
       {
        cout<<a[i]<<" ";
       }
        
     cout<<endl;
       
    }
    return 0;
}
