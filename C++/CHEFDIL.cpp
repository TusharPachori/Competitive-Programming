#include<bits/stdc++.h>

using namespace std;

void flip(&string ){

}

int main(){
    int T;
    cin >> T;
    while(T--){
        string s1;
        cin >> s1;
        while(1){
            for(int i=0;i<strlen(s1);i++){
                if(s1[i]==1){
                    if (i>0){
                        flip(s1, i-1);
                    }
                    if (i<strlen(s1)-1){
                        flip(s1, i+1);
                    }

                }
            }
        }
    }
}