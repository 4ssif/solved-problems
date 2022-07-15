#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define fi(n) for(int i=0; i<n; i++)
#define fj(n) for(int j=0; j<n; j++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,f=0,cnt=0,sum=0; cin>>n;
        vector<ll> v(n);
        fi(n){
            cin>> v[i];
            if(v[i]!=0) f=1;
            if(f==1) if(v[i]==0 && i!=v.size()-1) cnt++;
            if(i!=v.size()-1) sum+=v[i];
        }
        
        cout<<cnt+sum<<endl;
    }
    return 0;
}




