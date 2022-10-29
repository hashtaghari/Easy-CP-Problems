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
        int n,x,y;
        int winner=1;
        cin>>n;
        cin>>x;
        cin>>y;
        if(x!=0 && y!=0){
            cout<<"-1"<<endl;
            continue;
        }
        else if(x==0 && y==0){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            if(x==0)
                x=y;
            if((n-1)%x!=0){
                cout<<"-1"<<endl;
                continue;
            }
            for(int i=1;i<n;i++){
                
                cout<<winner<<" ";
                if(i%x==0)
                    winner=i+2;
                
            }

        }
        cout<<endl;
    }         
    return 0;
}