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

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin >> tc;
    while (tc--){
        int n,c,a,ans;
        ans=0;
        int ar[101]={0};
        cin>>n;
        cin>>c;
        for(int i=0;i<n;i++){
            cin>>a;
            ar[a]++;
        }
        for(int i=0;i<=100;i++){
            if(ar[i]>=c)
                ans+=c;
            else    
                ans+=ar[i];
        }
        cout<<ans<<endl;
    }         
    return 0;
}