#include<bits/stdc++.h>

using namespace std;

string sub_text(string text, string alp, string key){
    string res;
    int index;
    for(int i=0;i<text.length();i++){
        index = alp.find(text[i]);
        res+=key[index];
    }
    return res;
}

int main(){
    string text = "aabbccdd";
    string alp = "abcdefgh";
    string key = "hgfedcba";
    cout << sub_text(text, alp, key)<<endl;
}