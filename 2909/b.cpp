#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;   // 1d vec
typedef vector<vl> vvl;  // 2d vec
typedef pair<ll, ll> pl; // pair

#define ff first // to access pl.first
#define ss second
#define pb push_back
#define sz(v) ll(v.size())
#define all(v) v.begin(), v.end()

#define tr(container, it) \
    for (typeof(container.begin()) it = container.begin(); it != container.end(); it++)

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        int ar[100];
        int ans[100];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                ans[i] = ar[0];
            else
            {
                ans[i] = ans[i - 1] + ar[i];
                int a = ans[i - 1] - ar[i];
                if (a >= 0 && ar[i]!=0)
                {
                    cout << "-1";
                    goto L1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

    L1:
        cout << endl;
    }
    return 0;
}
