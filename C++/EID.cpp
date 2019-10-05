#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            int x;
            cin >>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        vector <int> res;
        for (i=0;i<n-1;i++){
            res.push_back(v[i+1]-v[i]);
        }
        sort(res.begin(), res.end());
        cout<<res[0]<<"\n";
    }
}