#include<bits/stdc++.h>

using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, P;
        cin >> N >> K >> P;
        vector<int> v(N);
        for (int i=0;i<N;i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i:v){
            cout<<i<<" ";
        }
        
    }
}