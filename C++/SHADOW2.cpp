#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll N,K;
        cin >> N >> K;
        int arr[N];
        for(ll i =0; i<N;i++){
            cin >> arr[i];
        }
        ll max_sum = 0;
        ll sum = 0;
        for(ll i =0; i<K;i++){
            sum^=arr[i];
        }
        max_sum = sum;
        ll start = 0, last = K;
        while(start<N-K){
            sum^=arr[start++];
            sum^=arr[last++];
            if (sum > max_sum)
                max_sum = sum;
        }
        cout<<max_sum<<"\n";
        
    }
}