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
        
        int flag = 1;
        int mini = INT_MAX;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                flag = 0;
                break;
            }
            mini = min(mini,(arr[i]-arr[i-1]));
        }
        
        if(flag==0)
        cout<<"0"<<endl;
        else
        {
            cout<<(mini/2)+1<<endl;
        }
    }
    return 0;
}