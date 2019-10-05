#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    // cout << s[0] << "\n";
    // cout << s[1] << "\n";
    // cout << s[2] << "\n";
    // cout << s[3] << "\n";
    // cout << s[4] << "\n";
    // cout << s[5] << "\n";

    stringstream str(s);
    string words;
    while(str>>words){
        cout<<words<<" ";
    }
}