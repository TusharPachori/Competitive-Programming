#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    int T;
    cin >> T;
    while (T--){
        ll n,k;
        cin >> n >> k;
        ll x = n/k;
        if (x==n || x%k ==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}