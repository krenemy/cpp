#include <iostream>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
typedef long long ll;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    long long ans = 0;
    map<string, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            string st = "";
            bool flag=true;
            for (int k = i; k <j; k++)
            {
                if(s[k]!=s[k+1]){flag=false;break;}
                st+=s[k];
            }
            if (flag) mp[st]++;            
        }
    }
    for (auto i : mp)
    {
        cout<<i.first<<endl;
    }
    cout << ans;
}