#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >>T;
    while(T--){
        int a,b;
        cin >> a >> b;
        int min, max;
        max = a+b-1;
        min=((b-a)>(a-b))?b-a+1:a-b+1;
        cout<<max<<" "<<min<<"\n";
    }
}

