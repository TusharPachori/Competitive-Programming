#include<bits/stdc++.h>

using namespace std;

string shift_key(char *pr, int k){
    int i=0;
    char c;
    string s;
    while((c = pr[i])!='\0'){
        if (c!= ' '){
            if (c>122-k){
                c = 97+c-122+1;
                s+=c;
            }else{
                c = c+k;
                    s+=c;
            }
        }else{
            s+=c;
        }
        i++;
    }
    return s;
}

int main(){
    char *pt = "abcdefghijklmnopqrstuvwxyz";
    int key = 2;
    string ct = shift_key(pt, key);
    cout<<ct<<endl;
}