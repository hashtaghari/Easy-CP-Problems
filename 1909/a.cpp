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
        int n,k;
        ll sum,max;
        sum=0;
        cin>>n;
        cin>>k;
        ll ar[101];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<k;i++){
            max=ar[i];
            for(int j=i;j<n;j+=k){
                if(ar[j]>max)
                    max=ar[j];
            }
            sum+=max;
        }
        cout<<sum<<endl;
    }         
    return 0;
}