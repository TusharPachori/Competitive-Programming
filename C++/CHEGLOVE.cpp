#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
        }
        int front=0;
        int back=0;
        for(i=0;i<n;i++){
            if (a[i]<=b[i]){
                front++;
            }
        }
        for(i=0;i<n;i++){
            if (a[i]<=b[n-1-i]){
                back++;
            }
        }

        if (back==n && front==n){
            cout<<"both\n";
        }else if (back!=n && front!=n){
            cout<<"none\n";
        }else if (back!=n && front==n){
            cout<<"front\n";
        }else if (back==n && front!=n){
            cout<<"back\n";
        }
    }
}