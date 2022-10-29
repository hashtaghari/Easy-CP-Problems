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
        ll n;
        cin>>n;
        ll x[10000];
        ll t[10000];
        float x0,t0;
        ll min,max;
        max=0;
        min=INT_MAX;
        ll sum1,sum2;
        sum1=sum2=0;
        for(int i=0;i<n;i++){
            cin>>x[i];
            sum1+=x[i];
            if(x[i]<min)
                min=x[i];
            if(x[i]>max)
                max=x[i];
        }
        //x0=(float)sum1/(float)n;
        x0=((float)min+(float)max)/(float)2;
        ll c,d;
        c=min;
        d=max;
        for(int i=0;i<n;i++){
            cin>>t[i];
            sum2+=t[i];
        }
        //cout<<"**"<<endl;
        t0=(float)sum2/(float)n;
        ll min2,max2;
        max=0;
        min=INT_MAX;
        max2=0;
        min2=INT_MAX;
        ll a,b;
        //cout<<x0<<endl;
        a=b=x0;
        cout<<x0<<endl;
        for(int i=0;i<n;i++){
            if(x[i]<x0){
                if((x0-x[i])+t[i]>max){
                    max= (x0-x[i])+t[i];
                    a=x[i]-t[i];
                }
                if((x0-x[i])+t[i]<min){
                    min= (x0-x[i])+t[i];
                }
            }
            if(x[i]>x0){
                if((x[i]-x0)+t[i]>max2){
                    max2= (x[i]-x0)+t[i];
                    b=x[i] + t[i];
                }
                if((x[i]-x0)+t[i]<min2){
                    min2= (x[i]-x0)+t[i];
                }
            }
            x0 =((float)a+(float)b)/(float)2;
        }
        
        
        if (x0<0)
            x0=0;
        cout<<x0<<endl;
        //cout<<"**"<<endl;
        

    }         
    return 0;
}