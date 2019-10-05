#include<bits/stdc++.h>
using namespace std;

bool func(int x, int y){
    return x>y;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        int x;
        vector <int> v;
        for (int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        auto it = lower_bound(v.begin(), v.end(), v[n-k]);
        int res=0;
        for(auto it2 = it;it2!=v.end();it2++){
            res++;
        }
        cout<<res<<"\n";
    }
}