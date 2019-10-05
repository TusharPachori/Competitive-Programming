#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i=0;i<s.length();i++){
        int x = (int)s[i]-97;
        arr[x] = 1;
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string text;
        int check=0;
        for (int j=0; j<text.length();j++){
            if (s[int(text[j])-97]!=1){
                check=1;
                break;
            }
        }
        if(check==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}