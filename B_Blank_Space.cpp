#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
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
        
        int start = 0;
        int end = 0;
        int maxi = 0;
        while(end<n)
        {
            if(arr[end]==1)
            {
                start++;
                end++;
            }
            else
            {
                while(end<n && arr[end]!=1)
                {
                    end++;
                }
                 maxi = max(end-start,maxi);
                 start = end ;
            }
           
        }
        cout<<maxi<<endl;
    }
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
