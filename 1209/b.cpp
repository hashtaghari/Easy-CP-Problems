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
    int a,b;
    cin >> tc;
    while (tc--){
        int n;
        cin>>n;
        char s[n+1];
        char ans[100000];
        cin>>s;
        int i=n-1;
        int ctr=0;
        while(i>-1){
            if(s[i]=='0'){
                i--;
                a = (int)s[i] - '0';
                i--;
                b=(int) s[i] - '0';
                b=b*10+a;
                b--;
                char c = (char) b +'a';
                //cout<<c;
                ans[ctr]=c;
                ctr++;
            }
            else{
                a = (int)s[i] - '0';
                a--;
                char c = (char) a +'a';
                //cout<<c;
                ans[ctr]=c;
                ctr++;
            }
            i--;
        }
        for(int j=ctr-1;j>=0;j--){
            cout<<ans[j];
        }
        cout<<"\n";
    }         
    return 0;
}