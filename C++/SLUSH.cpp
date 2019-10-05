#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n,m;
        cin >>n>>m;
        ll C[m], D[n], F[n],B[n];
        for(ll i=0;i<m;i++){
            cin >> C[i];
        }
        for(ll i=0;i<n;i++){
            cin >> D[i] >> F[i] >> B[i];
        }
        ll profit=0;
        ll order[n];
        for(ll i=0;i<n;i++){
            if(C[D[i]-1]>0){
                
            }
        }

    }
}