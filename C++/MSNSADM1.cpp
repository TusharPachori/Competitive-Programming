#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >>n;
        int goals[n], fouls[n];
        for (int i=0;i<n;i++)
            cin >> goals[i];
        for (int i=0;i<n;i++)
            cin >> fouls[i];
        int max = 0;
        int pos_score, neg_score, final_score;
        for (int i=0;i<n;i++){
            pos_score = goals[i]*20;
            if (pos_score > max){
                neg_score = fouls[i]*10;
                final_score = pos_score - neg_score;
                if (final_score < 0)
                    final_score = 0;
                if (final_score > max)
                    max = final_score;
            }
        }
        cout<<max<<"\n";
    }
}