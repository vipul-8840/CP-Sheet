#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int negCount = 0;
        int posCount= 0;
        for(int i=0;i<n;i++)
        {
            int a ;
            cin>>a;
            if(a<0)
            {
                negCount++;
            }
            else
            {
                posCount++;
            }
            
        }
        int op=0;
        while(posCount<negCount || (negCount%2)!=0)
        {
            posCount++;
            negCount--;
            op++;
            
        }
        cout<<op<<endl;
    }
    return 0;
}