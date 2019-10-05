#include<bits/stdc++.h>

using namespace std;

int main(){

    int tCases;
    cin >> tCases;
    int x;
    while(tCases--){
        cin >> x;
        ostringstream str1;
        str1 << x;
        string s = str1.str();
        int count=0;
        
        int len = s.length();
        for(int i=0;i<len;i++){
            char c = s[i];
            count += ((int)c-48);
        }
        cout<< count<<"\n";
    }
}