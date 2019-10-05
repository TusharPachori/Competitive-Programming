#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll exponentiation(ll base, ll exp) {
    ll t=1L;
    while (exp > 0) {
        if (exp % 2 != 0) 
            t = (t * base); 
        base = (base * base); 
        exp /= 2; 
    } 
    return t; 
}  

int main(){
    ll T;
    cin >>T;
    while(T--){
        ll s1,s2,t1,t2,x;
        cin >>s1 >>s2 >>t1 >>t2;
        cin >>x;
        ll tempt = t2-t1;
        ll temps = s2-s1;
        ll divisor = 0;
        if(tempt==1){
            divisor = exponentiation(2,t1-2);
        }else{
            divisor = exponentiation(2,t1-2)*3L;

        }
        ll first = temps/divisor;
        ll res=0;
        res = exponentiation(2L,x-2L);
        res*=first;
        cout << res <<"\n";
    }
}