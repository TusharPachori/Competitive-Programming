#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
    int T;
    cin >> T;
    while(T--){
        ll n, x;
        cin >> n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        ll hand_shakes = 0;
        ll population = v[0];
        for (ll i=1;i<n;i++){
            hand_shakes += population * v[i];
            population += v[i];
        }
        cout<<hand_shakes<<endl;
    }
}