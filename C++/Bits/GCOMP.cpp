#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll M = 1000000007;

ll exponentiation(ll base, ll exp) {
    ll t=1L;
    while (exp > 0) {
        if (exp % 2 != 0) 
            t = (t * base) % M; 
        base = (base * base) % M; 
        exp /= 2; 
    } 
    return t % M; 
} 

ll f_sum(ll n){
    ll result=0;
    ll base =2;
    result= (exponentiation(base,n+1)-1);
    return result;
}

ll highestTwo(ll n){
    ll i=0;
  
    for (i=0; i<8*sizeof(ll); i++) { 
        ll curr = 1 << i; 
        if (curr > n) 
            break;
    }
    return --i; 
} 

int main(){
    int T;
    cin >> T;
    while(T--){
        ll x;
        cin >> x;
        ll n = highestTwo(x);
        ll fsum = f_sum(n);
        cout<<fsum<<" "<<n<<"\n";
        ll fres=n+1;
        while(1){
            if (fsum > x ){
                fsum-=exponentiation(2,n);
                n--;
                fres--;
            }
            else if (fsum + exponentiation(2,n) <= x){
                fsum+=exponentiation(2,n);
                fres++;
            }
            else
                break;
        }
        cout<< fres <<"\n";

        //First Part
        //----------------------------------------
        // Fibo





        
    }
}