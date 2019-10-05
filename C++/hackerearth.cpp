#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int T;
    cin >> T;
    while(T--){
        ll n ,m, sum=0;
        cin >> n;
        vector <ll> v1, v2;
        for (ll i =0;i<n;i++){
            ll X;
            cin >> X;
            sum+=X;
            v1.push_back(X);
            v2.push_back(sum);
        }
        cin >> m;

        for (auto ptr = v2.begin(); ptr < v2.end(); ptr++) 
        cout << *ptr << " "; 
        
        auto it = lower_bound(v2.begin(), v2.end(), m);
        if (it!=v2.end())
        cout<<it<<"\n";
    }
}