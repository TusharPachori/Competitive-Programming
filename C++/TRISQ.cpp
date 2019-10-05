#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int b=0;
        cin>>b;
        if (b==1||b==2||b==3){
            cout<<"0\n";
        }else{
            if (b%2!=0)
                b=b-1;
            int area = 0.5 *b *b;
            int res = (area-b)/4;

            cout<<res<<"\n";
        }
    }
}