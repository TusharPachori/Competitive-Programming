#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int arr[n], dp_arr[n][n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
            int temp=0;
            for(int j=0;j<=i;j++){
                temp = temp ^ arr[j];
                
            }
        }
    }
}