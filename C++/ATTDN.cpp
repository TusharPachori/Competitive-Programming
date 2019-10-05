#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        String f[n], l[n];
        for (int i=0;i<n;i++)
            cin >> f[i] >> l[i];
        int a[n];
        for (int i=0;i<n;i++){
            a[i]=0;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(f[i]==f[j]){
                    a[i]++;
                    a[j]++;
                }
            }
        }
        for (int i=0;i<n;i++){
            if(a[i]==0)
                cout<<f[i]<<"\n";
            else
                cout<<f[i]<<" "<<l[i]<<"\n";
        }
    }
}