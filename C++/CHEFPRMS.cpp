#include<bits/stdc++.h>
using namespace std;

bool isPrime(int i){
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}

bool isPOP(int i){
    for(int j=2;j<i/2;j++){
        if(i%j==0){
            if (isPrime(j)&&isPrime(i/j)&&(j!=i/j)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int check=0;
        for(int i=4;i<=n/2;i++){
            if (isPOP(i) && isPOP(n-i)){
                check=1;
                break;
            }
        }
        if (check==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
}