#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<k;i++){
            v[i%n] = v[i%n]^v[n-(i%n)-1];
        }
        for(int i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;
    }
}