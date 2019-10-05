#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll N,K;
        cin >> N >> K;
        ll x1, x2;
        if ( K < N ){
            x1 = K;
            x2 = N-K;
        }else if( K==N){
            x1 = N;
            x2 = 0;
        }else{
            x1 = K%N;
            x2 = N-x1;
        }
        ll max_count, min_count;
        if(x1 > x2){
            max_count = x1;
            min_count = x2;
        }else{
            max_count = x2;
            min_count = x1;
        }
        ll sum =0;
        if (min_count == 0){
            sum = 0;
        }else if (min_count == max_count){
            sum = min_count + max_count -1;
        }else{
            sum = min_count*2;
        }
        cout << sum << "\n";
    }
}