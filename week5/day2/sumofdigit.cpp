#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#include <stack>
int arr[100001];
int n, s;
bool check(int x)
{
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int low = 1, high = n;
        int ans = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (check(mid))
                ans++,high = mid - 1;
            else
                low = mid + 1;
        }
        cout << ans << "\n";
    }
}