#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    vector <char> c = {'b', 'o', 'b'};
    while(T--){
        string S1, S2;
        cin >> S1;
        cin >> S2;
        int a[3]={0};
        for (int i=0;i<3;i++){
            if (S1[i]=='b' || S2[i]=='b')
                a[i]==1;
        }
        int b_count = 0;
        for (int i=0;i<3;i++){
            if(a[i]==1)
                b_count++;
        }
        if (b_count<=1)
            cout << "no\n";
        else if (b_count==2){
            int index = 0;
            for (int i=0;i<3;i++){
                if (a[i]==0)
                    index=i;
            }
            if(S1[index]=='o' || S2[index]=='o')
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else if(b_count==3){
            int o_count=0;
            for (int i=0;i<3;i++){
                if (S1[i]=='o' || S2[i]=='o'){
                    o_count++;
                }
            }
            if (o_count==0)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
    }
}