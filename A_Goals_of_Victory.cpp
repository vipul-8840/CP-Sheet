#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<endl;
        vector<int> arr(n,0);
        for (int i = 0; i < n-1; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            sum += arr[i];
        }
        cout << (-1) * sum ;
    }
    return 0;
}
