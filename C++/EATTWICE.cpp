#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main(){
    ll T;
    cin >> T;
    while(T--){
        ll N,M, x1, x2;
        cin >> N>> M;
        map<ll, ll> list1;
        for(ll i=0;i<N;i++){
            cin >> x1 >> x2;
            auto it =  list1.find(x1);
            if(it == list1.end()){
                list1[x1] = x2;
            }else if(list1[x1]<x2){
                list1[x1] = x2;
            }
        }
        ll first=0, second=0;

        map<ll, ll>::iterator itr; 
        for (itr = list1.begin(); itr != list1.end(); ++itr) { 
            if (itr->second > second){
                if (itr->second > first){
                    second = first;
                    first = itr->second;
                }else{
                    second = itr->second;
                }
            }
        }
        cout << first + second << '\n'; 
    }
}