#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        int max=0;
        for (int i=0;i<n-k;i++){
            int sum =0;
            for (int j=i;j<i+k;j++){
                sum+=a[j];
            }
            if(max<sum)
                max=sum;
        }
        cout<<sum<<"\n";
    }
}