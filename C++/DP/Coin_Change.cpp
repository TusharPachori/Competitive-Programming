#include<bits/stdc++.h>

using namespace std;

int count( int S[], int m, int n ) { 
    int table[n+1]; 
    memset(table, 0, sizeof(table)); 
    table[0] = 1; 

    for(int i=0; i<m; i++) 
        for(int j=S[i]; j<=n; j++) {
            table[j] += table[j-S[i]];
            for(int k=0;k<=n;k++){
                cout<<table[k]<<" ";
            }
            cout<<endl;
        } 
  
    return table[n]; 
}

int main(){
    int i, j; 
    int arr[] = {2, 3, 5, 10}; 
    int m = sizeof(arr)/sizeof(arr[0]); 
    cout<<count(arr, m, 15); 
}