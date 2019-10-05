#include<bits/stdc++.h>
using namespace std;

char sec_en(char c){
    int x = c-97;
    x = 25-x;
    char z = (char)x+97;
    return z;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        char temp;
        for (int i=0;i<n;i=i+2){
            if(i==n-1){
                s[i] = sec_en(s[i]);
            }
            else{
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                s[i] = sec_en(s[i]);
                s[i+1] = sec_en(s[i+1]);
            }
        }

        cout <<s<<"\n";
    }
}