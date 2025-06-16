#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
       int n;
       cin>>n;
       

       
            vector<int>arr(n);
            for(int i=0;i<n;i++)
            {
                 cin>>arr[i];
            }
            unordered_map<int,int>m;
            for(int i=0;i<n;i++)
            {
                m[arr[i]]++;
            }
             
            if(m.size()==1)
            cout<<"YES"<<endl;

            else if(m.size()==2)
            {
                  int a1 = 0;
                  int a2= 0;
                  for(auto it:m)
                  {
                      if(a1==0)
                      a1 = it.second;
                      else{
                        a2=it.second;
                      }
                  }
                  
                  if((a1 + 1)==a2 || (a2+1)==a1|| a1==a2)
                  cout<<"YES"<<endl;
                  else
                   cout<<"NO"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
       
       
    }
    return 0;
}
