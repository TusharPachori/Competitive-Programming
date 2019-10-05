#include<bits/stdc++.h>

using namespace std;

int main(){
    int tCases;
    cin >> tCases;
    while(tCases--){
        long long int x;
        cin >> x;

        ostringstream str1;
        str1 <<x;

        string s = str1.str();
        int count=0;
        int len = s.length();
        for (int i=0;i<len;i++){
            if (s[i]=='4'){
                count++;
            }
        }
        cout << count;
    }

}