#include<bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >>n;
    vector<int> temp;
    int x;
    vector<int>::iterator it; 
    for (int i=0;i<n;i++){
        cin >>x;
        temp.push_back(x);
    }
        vector<int> temp2;
    int y = INT_MIN;
    for(int i=temp.size()-1;i>=0;i--){
        if (temp[i]>=y){
            temp2.push_back(i);
            y = temp[i];
        }
    }
    temp2.push_back(-1);
    int len=0;
    for(int i = temp2.size()-2;i>=0;i--){
        while(len!=temp2[i]){
            cout<<endl;
            len++;
        }
        for(int j=temp2[i];j >= temp2[i+1]+1;j--){
            cout<<temp[j]<<" ";
        }
        len++;
        cout<<endl;
    }
}