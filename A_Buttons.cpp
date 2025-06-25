#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
      long long  a,b,c;
       cin>>a>>b>>c;

       long long int K_moves = a + (c+1)/2;
       long long int V_moves = b + (c)/2;

       if(K_moves >V_moves)
       cout<<"First"<<endl;
       else{
         cout<<"Second"<<endl;
       }
    

    }
    return 0;
}
    

