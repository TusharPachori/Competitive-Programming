#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);

        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        ll rem = k%(3*n);
        if((k/n >= 3) && n%2!=0){
            v[n/2]=0;
        }
        for(ll i=0;i<rem;i++){
            v[i%n] = v[i%n]^v[n-(i%n)-1];
        }

        for(ll i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;
    }

}