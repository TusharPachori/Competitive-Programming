#include<bits/stdc++.h>

using namespace std;

int lcs(char X[], char Y[], int m, int n){
    int arr[m+1][n+1];
    for (int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if (i==0 || j==0){
                arr[i][j]=0;
            }else if(X[i]!=Y[j]){
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }else{
                arr[i][j] = arr[i-1][j-1]+1;
            }
        }
    }
    
    return arr[m][n];
}

int main(){
    char X[] = "AGGTAB"; 
    char Y[] = "GXTXAYB"; 
    int m = strlen(X); 
    int n = strlen(Y); 
    printf("Length of LCS is %d", lcs( X, Y, m, n ) ); 
}
