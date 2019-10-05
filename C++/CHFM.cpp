#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll N, x;
        cin >> N;
        ll arr[N];
        ll sum=0;
        for (ll i=0;i<N;i++){
            cin >> x;
            arr[i] = x;
            sum+=x;
        }
        double avg = (double)sum/N;
        ll result = 0;
        for(ll i=0;i<N;i++){
            if (arr[i]==avg){
                result = i+1;
                break;
            }
        }
        if (result!=0){
            cout<<result<<"\n";
        }
        else{
            cout<<"Impossible\n";
        }
    }
}