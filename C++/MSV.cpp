#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int max=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<i;j++){
                if(v[j]%v[i]==0){
                    count++;
                }
            }
            if (count>max){
                max = count;
            }
        }
        cout<<max<<endl;
    }
}