#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll x,y,k;
        cin >>x >>y >>k;
        
        ll temp = 0;
        temp = (x+y)/k;
        if (temp%2==0){
            cout<< "Chef"<< "\n";
        }else{
            cout<< "Paja"<< "\n";
        }
    }
}
