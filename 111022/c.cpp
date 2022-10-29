#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;   // 1d vec
typedef vector<vl> vvl;  // 2d vec
typedef pair<ll, ll> pl; // pair

#define ff first // to access pl.first

#define pb push_back
#define sz(v) ll(v.size())
#define all(v) v.begin(), v.end()

#define tr(container, it)\
for (typeof (container.begin()) it = container.begin(); it != container.end(); it++)

ll ar[2000];
ll m;
int thic;

// int check(int i, int j, int n, int sum){
    
//     while(i>0 && j<n){
//             if(right == 0){
//                 if(sum>left){
//                     break;
//                 }
//                 else if(sum<left){
//                     i--;
//                     sum+=ar[i];
//                 }
//                 else{
//                     thic = min(t,max())
//                 }
//             }
//             else if(left==0){

//             }
//         }
// }

// int solve(int i, ll s, ll t, int n){
//     if(i>=n)
//         return n;
//     for(;i>n;i++){
//             s+=ar[i];
//             t-=ar[i];
//             if(s<ar[m])
//                 continue;
//             if(s>t)
//                 return n;
//             if(s<t){
//                 thic = std::min(thic, solve(i+1,0,t,n));
//             }
//             if(s==t){
//                 thic =  
//             }
//         }
// }

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin >> tc;
    while (tc--){
        int n;
        cin>>n;
        m=0;
        ll t_sum=0;
        ll sum=0;
        thic=n;
        
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>ar[m]){
                m=i;  
            }
            t_sum+=ar[i];
        }
        for(int i=0 ;i<n;i++){
            sum+=ar[i];
            t_sum-=ar[i];
            //cout<<sum<<t_sum<<" **"<<endl;
            if(sum<ar[m]){
                // continue;
            }
            else if(sum>t_sum){
                break;
            }
            else{
                //cout<<"HERE "<<i<<" "<<sum<<endl;

                int t=0,ss=0;
                int flag=1;
                int tc=i+1;
                for(int j=i+1;j<n;j++){
                    ss+=ar[j];
                    t++;
                    if(ss>sum){
                        flag=0;
                        break;
                    }
                    if(ss==sum){
                        ss=0;
                        tc=max(tc, t);
                        t=0;
                    }
                    else if(j==n-1 && ss<sum){
                        flag=0;
                    }
                }
                if(flag==1){
                    thic=min(thic,tc);
                }
            }
        }
        cout<<thic<<endl;

    }         
    return 0;
}

