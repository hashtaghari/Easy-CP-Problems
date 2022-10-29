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


struct num{
    int a;
    int b;
} ;

bool compare1(num f, num s)
{
if(f.a > s.a) 
return 1;
else
return 0;
}

bool compare2(num f, num s)
{
if(f.a < s.a) 
return 1;
else
return 0;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin >> tc;
    while (tc--){
        char s[300001];
        struct num p[300001];
        cin>>s;
        int cost = abs((int)s[0] - (int)s[(strlen(s)-1)]);
        //cout<<strlen(s)<<endl;
        int i=0;
        for(i=0;s[i]!='\0';i++){
            p[i].a= (int)s[i] - '`';
            //cout<<p[i].a<<endl;
            p[i].b=i+1;
        }
        if(s[0]>s[(strlen(s)-1)])
            sort(p,p+strlen(s),compare1);
        else
            sort(p,p+strlen(s),compare2);
        int k=0;
        while(p[k].a!= (int)s[0] - '`'){
            k++;
        }
        // while(k<= (strlen(s)-1)){
        //     cout<<p[k].a<<" "<<p[k].b<<endl;
        //     k++;
        // }
        int jumps=0;
        int temp=k;
         while(k<strlen(s)){
            if(s[0]>s[(strlen(s)-1)]){
                if(p[k].a< (int)s[strlen(s)-1] - '`'){
                 break;
                }
            }
            if(s[0]<s[(strlen(s)-1)]){   
                if(p[k].a> (int)s[strlen(s)-1] - '`'){
                 break;
                }
            }
            if(s[0]==s[(strlen(s)-1)]){
                if(p[k].a != ((int)s[strlen(s)-1] - '`')){
                 break;
                }
            }
            //cout<<p[k].b<<" ";
            k++;
            jumps++;
        }
        k=temp;
        cout<<cost<<" "<<jumps<<endl;
        while(k<strlen(s)){
            if(s[0]>s[(strlen(s)-1)]){
                if(p[k].a< (int)s[strlen(s)-1] - '`'){
                 break;
                }
            }
            if(s[0]<s[(strlen(s)-1)]){   
                if(p[k].a> (int)s[strlen(s)-1] - '`'){
                 break;
                }
            }
            if(s[0]==s[(strlen(s)-1)]){
                if(p[k].a != ((int)s[strlen(s)-1] - '`')){
                 break;
                }
            }
            cout<<p[k].b<<" ";
            k++;
        }
        

        cout<<endl;
    }         
    return 0;
}