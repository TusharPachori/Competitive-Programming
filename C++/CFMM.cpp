#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin >>n;
        int al[26];
        for (int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;js.size();j++){
                int x = s[j] - 97;
                al[x]++;
            }
        }
         vector <int> v;
        v.pushback(al[2]/2);
        v.pushback(al[3]/1);
        v.pushback(al[4]/2);
        v.pushback(al[5]/1);
        v.pushback(al[7]/1);
        v.pushback(al[14]/1);

        sort(v.begin(),v.end());
        cout<<v[0]<<"\n";

    }
}