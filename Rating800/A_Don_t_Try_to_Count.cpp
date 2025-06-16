// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int count=0;

        while(x.size()<s.size())
        {
            x = x + x ;
            count++;
        }
         bool found = false;
        for (int i = 0; i <= 2; ++i) {
            if (x.find(s) != string::npos) {
                cout << count + i << endl;
                found = true;
                break;
            }
            x += x;
        }

        if (!found)
            cout << -1 << endl;



    }
    return 0;
}
