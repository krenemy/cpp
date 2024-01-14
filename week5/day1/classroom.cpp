#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#include <stack>
int arr[100001];
int n, k;
bool check(int minDiffAllowed)
{
    int students = 1;
    int x=minDiffAllowed;
    int i = 0;
    while (i < n)
    {   
       
        i+=it;
        students++;
    }
    return students>=k;
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
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        int low = 1, high = 1e9;
        int ans = high;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (check(mid)==1)
                ans = mid, low = mid + 1;
            else
                high=mid-1;
        }
        cout << ans << "\n";
    }
}