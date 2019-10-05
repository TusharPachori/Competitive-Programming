#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin >> n;
        string s1, s2;
        cin.ignore(100,'\n');
        getline(cin, s1);
        getline(cin, s2);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                x+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(s2[i]=='1'){
                y+=1;
            }
        }
        if (x==y){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
