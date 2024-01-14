#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll check(ll mid, ll n, ll k, vector<ll> &a)
{
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += sqrt(mid / a[i]);
    }
    return x >= k;
}
signed main()
{
    int _t;
    cin >> _t;
    while (_t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll lo = 0, hi = 1ll * mx * k * k, ans = hi;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (check(mid, n, k, a) == 1)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
}