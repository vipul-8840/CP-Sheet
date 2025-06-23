#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>grid=
{
     {1,1,1,1,1,1,1,1,1,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,1,1,1,1,1,1,1,1,1}


};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       vector<string>s(10);
       for(int i=0;i<10;i++)
       {
      
        cin>>s[i];
       
       }
      long long sum=0;
       for(int i=0;i<10;i++)
       {
        for(int j=0;j<10;j++)
        {
            if(s[i][j]=='X')
            {
                sum+=grid[i][j];
            }
        }
       }
       cout<<sum<<endl;
    }
    return 0;
}
