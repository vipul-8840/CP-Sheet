#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    
        int n ;
        cin>>n;
        int mini = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mini= min(mini,abs(a-0));
        }
        cout<<mini<<"\n";
        return 0;
}
