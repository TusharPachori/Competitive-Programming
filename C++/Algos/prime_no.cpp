#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool arr[n];
    memset(arr,true,sizeof(arr));
    for (int i=2;i*i<n;i++){
        for (int j=i*i;j<n;j=j+i){
            arr[j]=0;
        }
    }
    for (int i=2;i<n;i++){
        if (arr[i]!=0)
            cout<<i<<" ";
    }
    cout<<"\n";
}