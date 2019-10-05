// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long int

// ll M = 1000000007;

// ll exponentiation(ll base, ll exp) { 
//     if (exp == 0) 
//         return 1; 
  
//     if (exp == 1) 
//         return base % M; 
  
//     ll t = exponentiation(base, exp / 2); 
//     t = (t * t) % M; 
  
//     if (exp % 2 == 0) 
//         return t; 
  
//     else
//         return ((base % M) * t) % M; 
// } 
  

// int main(){
//     int T;
//     cin >> T;
    
//     while(T--){
//         ll k;
//         cin >>k;
//         ll res;
//         ll A=2;
//         res = 10*(exponentiation(2,k-1));
//         res = res % M;
//         cout<<res<<"\n";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll M = 1000000007;

ll exponentiation(ll base, ll exp) {
    ll t=1L;
    cout<<t<<"\n";
    while (exp > 0) {
        if (exp % 2 != 0) 
            t = (t * base) % M; 
        base = (base * base) % M; 
        exp /= 2; 
    } 
    return t % M; 
} 

int main(){
    int T;
    cin >> T;
    
    while(T--){
        ll k;
        cin >>k;
        ll res;
        ll A=2;
        res = 10*(exponentiation(2,k-1));
        res = res % M;
        cout<<res<<"\n";
    }
}