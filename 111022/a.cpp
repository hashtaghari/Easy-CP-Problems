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
        char s1[51],s2[51];
        cin>>s1>>s2;
        char a,b;
        a=s1[strlen(s1)-1];
        b=s2[strlen(s2)-1];
        if(a==b){
            if(a=='S'){
                if(strlen(s1)>strlen(s2)){
                    cout<<"<"<<endl;
                }
                else if(strlen(s1)<strlen(s2)){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
            else if(a=='L'){
                if(strlen(s1)>strlen(s2)){
                    cout<<">"<<endl;
                }
                else if(strlen(s1)<strlen(s2)){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
            else{
                cout<<"="<<endl;
            }
        }
        else if(a=='L'){
            cout<<">"<<endl;
        }
        else{
            cout<<"<"<<endl;
        }

    }         
    return 0;
}