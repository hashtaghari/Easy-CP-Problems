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

#define tr(container, it)\
for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)

ll ans[100000];

void solve(int r){
    if(r<0)
        return;
    ll k = sqrt(2*r);
    k*=k;
    ll l = k-r;
    solve(l-1);
    for(;l<=r;l++,r--){
        ans[l]=r;
        ans[r]=l;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin >> tc;
    while (tc--){
        ll n;
        cin>>n;
        solve(n-1);
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }         
    return 0;
}

