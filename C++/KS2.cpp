#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool check(ll n){
    ll sum=0;
    for (ll x = n; x > 0; x = x / 10) 
            sum = sum + x % 10; 
    
    if (sum%10==0)
        return true;
    else
        return false;
}

void func(ll n){
    ll values;
    ll res;
    if(n>9){
        values = (n-10)/10 +1;
        n=n%10;
    }
    else
        ll values = 0;

    n+=1;
    
    ll count=0;
    ll init=values*100;
    ll term = init+100;
    for (ll i =init;i<=term;i++){
        if (check(i)){
            count++;
        }
        if (count==n){
            res = i;
            break;
        }
    }
    cout<<res<<"\n";
}

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        func(n);
    }
}