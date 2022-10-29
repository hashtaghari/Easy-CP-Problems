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
        int n;
        cin>>n;
        if(n==1 || n==3){
            cout<<"-1"<<endl;
        }
        else if(n==2){
            cout<<"2 1"<<endl;
        }
        else{
            // if(n%2==0){
                
            // }
            // else{
            //     for(int i=n;i>0;i--){
            //         // cout<<i-1<<" "<<i<<" ";
            //         cout<<i<<" ";
            //     }
            //     // cout<<"1 2 3"<<endl;
            // }
            int k=1;
            for(int i=n;i>0;i--){
                    if(i!=k){
                        cout<<i<<" ";
                        k++;
                    }
                    else{
                        for(int j=1;j<=k;j++){
                            cout<<j<<" ";
                        }
                        break;
                    }
            }
            cout<<endl;
        }
    }         
    return 0;
}