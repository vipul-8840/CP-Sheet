
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        if(s.find(k)!=s.end())
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
       
    }
    return 0;
}
