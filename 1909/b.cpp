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

int exists[10001];

int check(int ar[2], int n)
{
    int ans = 0;
    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    else
    {
        if (ar[0] != 0)
            ans = check(ar, n - ar[0]);

        if (ans == 1)
            return ans;
        if (ar[1] != 0)
            ans = check(ar, n - ar[1]);
        return ans;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, x, y;
        cin >> n;
        cin >> x;
        cin >> y;
        int ar[2] = {x, y};
        int ans = -1;
        int winner = 1;
        if (check(ar, (n - 1)) != 1)
        {
            cout << "-1" << endl;
            continue;
        }
        else if(x!=0 && y!=0){
            cout << "-1" << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                cout << winner << " ";
                if (x != 0 && (i) % x == 0)
                    winner = i+1;
                else if (y != 0 && (i) % y == 0)
                    winner = i+1;
            }
        }
        cout << endl;
    }
    return 0;
}