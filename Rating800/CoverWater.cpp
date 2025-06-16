
#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>>n;
        string s ;
        cin>>s ;
        int count = 0 ;
        int emptyCell = 0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(s[i]=='.')
                 {
                     count=1;
                     emptyCell++;
                 }
            }
            else if (s[i]=='.' && s[i]==s[i-1])
            {
                 count++;
                 emptyCell++;
                 if(count%3==0)
                  break;
                
            }
            else
            {
                if(s[i]=='.')
                {
                    count=1;
                    emptyCell++;
                }
                
            }
        }
        if(count != 0 && count%3==0)
        cout<<2<<endl;
        else
        cout<<emptyCell<<endl;
        
    }
    return 0;
}