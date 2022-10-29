#include <bits/stdc++.h>
using namespace std;



int main()
{
    int tc=1;
    cin >> tc;
    while (tc--){
        long long int n;
        long long int ar[10000];
        long long int ar2[10000];
        long long int sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>ar2[i];
            sum+=ar2[i];
        }
        sum/=n;
        cout<<sum<<endl;

    }         
    return 0;
}