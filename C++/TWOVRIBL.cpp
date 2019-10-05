#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >>T;
    while(T--){
        ll xf, x=0, y=0, count=1;
        cin >> xf;
        ll temp = xf*xf;
        for(ll i=xf-1;i>0;i--){
            ll temp2 = i*i;
            if (temp2*2 < temp){
                temp = temp2;
                count+=1;
            }
        }
        cout<<count<<"\n";
    }
}
