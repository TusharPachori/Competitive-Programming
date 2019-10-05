#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long

ul M = 1000000007;

int main(){
    ul T;
    cin >> T;
    while(T--){
        ul n,k;
        cin >> n>>k;
        ul res=0;

        ul a = k-1;
        ul d = n-1;

        ul terms = (a+d);
        terms = terms/d;
        res = (terms*(2L*a-((terms-1)*d)))/2L;

        res%=M;
        cout<<res<<"\n";
    }
}