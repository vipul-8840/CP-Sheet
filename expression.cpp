// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std ;

string convert(string & s1)
{
       stack<char>s;
       string temp="";
       int  n = s1.size();
       int i=0;
       while(i<n)
       {
           cout<<"working"<<endl;
           if(s.empty()==0 && s1[i]>='a' && s1[i]<='z')
           {
               temp+=s1[i];
                i++;
           }
           else if (s1[i]=='-')
           {
                 s.push(s1[i]);
                 i++;
           }
           
           else if (!s.empty() && s.top()=='-' &&  s1[i]>='a' && s1[i]<='z')
           {
               temp = temp + '-' + s1[i];
               s.pop();
               i++;
               
           }
           
           else if (!s.empty() && s.top()=='-' && s1[i]=='(')
           {
               cout<<"ineer loop"<<endl;
                 i++;
                while(i<n && s1[i]!=')' )
                {
                    if(!s.empty() && s1[i]>='a' && s1[i]<='z')
                    {
                        temp = temp + '-' + s1[i];
                        i++;
                    }
                    else if (!s.empty()&& s1[i]=='-')
                    {
                        temp= temp + '+' + s1[i+1];
                        i=i+2;
                    }
                    else if(!s.empty() && s1[i]=='+')
                    {
                        
                        temp= temp + '-' + s1[i+1];
                        i=i+2;
                        cout<<"this loop"<<endl;
                        cout<<i<<endl;
                    }
                    
                    else
                    {
                         i++;
                    }
                }
                s.pop();
           }
           
           else
           {
               i++;
           }
           
       }
       cout<<"temp"<<endl;
       return temp;
}
int main ()
{
      string s1;
      string s2 ;
      
      cin>>s1;
      cin>>s2 ;
      string temp = convert(s1);
      if(temp==s2)
      cout<<"yes"<<endl;
      
      else
      {
          cout<<"No"<<endl;
      }
      return 0 ;
}