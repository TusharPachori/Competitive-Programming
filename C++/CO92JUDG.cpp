#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v1, v2;
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i=0;i<n;i++){
            int x;
            cin >> x;
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        v1.pop();
        v2.pop();
        int suma = accumulate(v1);
        int sumb = accumulate(v2);

        if (suma==sumb)
            cout<<"draw\n";
        else if (suma<sumb)
            cout<<"A wins\n";
        else
            cout<<"B wins\n";
    }
}