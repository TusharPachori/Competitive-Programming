#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int n, m;
        cin >>n>>m;
        vector<int> seq(m);
        for (int i=0;i<m;i++){
            cin >> seq[i];
        }
        vector<int> cats(n,0);
        int check = 0;
        for(int i=0;i<m;i++){
            cats[seq[i]-1] +=1;
            if (cats[seq[i]-1] > (((i)/n)+1)){
                check=1;
                break;
            }
        }
        if (check==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}