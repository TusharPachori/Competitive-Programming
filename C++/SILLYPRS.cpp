#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        ll a_even = 0;
        ll b_even = 0;
        ll x,y;
        ll sum =0;
        ld res = 0;
        for(ll i=0;i<n;i++){
            cin >> x;
            if(x%2==0)
                a_even +=1;
            sum += x;
        }
        for(ll i=0;i<n;i++){
            cin >> y;
            if(y%2==0)
                b_even +=1;
            sum += y;
        }
        ll diff = a_even > b_even ? a_even-b_even : b_even-a_even;
        res = (ld)sum/2 - (0.5)*diff;
        cout<< (ll)res<<"\n";
    }
}