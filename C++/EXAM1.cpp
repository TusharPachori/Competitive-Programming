#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >>N;
        string chef_ans, correct_ans;
        cin >> correct_ans >> chef_ans;
        int count=0, index=0;
        while(index<N){
            if(chef_ans[index]!='N'){
                if(chef_ans[index] == correct_ans[index]){
                    count+=1;
                }else{
                    index+=1;
                }
            }
            index+=1;
        }
        cout<<count<<"\n";
    }
}