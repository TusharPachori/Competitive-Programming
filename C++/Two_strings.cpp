#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >>s1 >> s2;
    int a[26]={0};
    int b[26]={0};
    for (int i=0;i<s1.size();i++){
        int x = (int)s1[i]-97;
        a[x]++;
        int y = (int)s2[i]-97;
        a[y]++;
    }
    int check=0;
    for (int i=0;i<s1.size();i++){
        if (a[i]!=b[i]){
            check=1;
            break;
        }
    }
    if (check==0){
        cout<<"Yes\n";
    }
    else
        cout<<"no\n";
}