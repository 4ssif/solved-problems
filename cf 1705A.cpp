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
        ll n,x; cin>>n>>x;
        n *=2;
        vector<ll> v(n);
        fi(n) cin>>v[i];
        sortall(v);
        ll f=1;
        fi(n/2){
            if(v[(n/2)+i]-v[i]<x) {
                f=0;
                break;
            }
        }
        
        if(f==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}




