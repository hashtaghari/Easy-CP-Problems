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
        int n,m;
        cin>>n>>m;
        int flag=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                   if((i+2)>n && (i-2)<1){
                        if((i+1)>n && (i-1)<1){
                            cout<<i<<" "<<j<<endl;
                            flag=1;
                            goto L1;
                        }
                        else if((j+2)>m && (j-2)<1){
                            cout<<i<<" "<<j<<endl;
                            flag=1;
                            goto L1;
                        }
                   }
                   else if((j+1)>m && (j-1)<1){
                            cout<<i<<" "<<j<<endl;
                            flag=1;
                            goto L1;
                    }
            }
        }
        L1:
        if(flag==0){
            cout<<n<<" "<<m<<endl;
        }
    }         
    return 0;
}