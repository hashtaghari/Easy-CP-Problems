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
        int a,b,c,t1,t2;
        cin>>a;
        cin>>b;
        cin>>c;
        if(b>c){
            t2= b;
        }
        else{
            t2= 2*c-b;
        }
        if(a<t2){
            cout<<"1\n";
        }
        else if(a>t2){
            cout<<"2\n";
        }
        else{
            cout<<"3\n";
        }
    }         
    return 0;
}