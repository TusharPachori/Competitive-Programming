#include<bits/stdc++.h>
using namespace std;

bool validConfig(int books[], int n, int k, int ans){
    int student=1;
    int pages=0;
    for (int i=0;i<n;i++){
        if (pages+books[i]>ans){
            pages=books[i];
            student++;
            if (student>k){
                return false;
            }
        }
        else{
            pages+=books[i];
        }
    }
    return true;
}

int b_search(int books[], int n, int k){
    int max_pages=0;
    int min_pages=books[n];
    for(int i=0;i<n;i++){
        max_pages+=books[i];
    }
    int res=0;

    while(max_pages>=min_pages){
        int mid = (max_pages+min_pages)/2;

        if(validConfig(books, n, k, mid)){
            res=mid;
            max_pages = mid-1;
        }
        else
        {
            res=mid;
            min_pages = mid+1;
        }
        
    }
    return res;
}

int main(){
    int n,m;
    cin >>n>>m;
    int books[n];
    for(int i=0;i<n;i++){
        cin >> books[i];
    }

    cout<<b_search(books,n,m)<<"\n";

}