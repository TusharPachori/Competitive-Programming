#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    memset(arr, 0, sizeof(arr));
    int len = sizeof(arr)/sizeof(int);
    for (int i=0;i<len;i++){
        cout<< arr[i] << " ";
    }
}