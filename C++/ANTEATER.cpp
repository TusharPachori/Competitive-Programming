#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int r,c;
        cin >> r >> c;
        string arr[r];
        int no_ants=0;
        vector<vector<int>> eater(r, vector<int> (c, 0));
        for(int i=0;i<r;i++){
            cin >> arr[i];
            for(int j=0;j<c;j++){
                if(arr[i][j]== '#'){
                    eater[i][j]=1;
                }
            }
        }
        int max = r>c?r:c;
        int temp=0;
        int res=0;
        for(int i = 0; i<max;i++){
            vector<vector<int>> vec(r, vector<int> (c, 0));
            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++){
                    if (arr[j][k] == 'U'){
                        if ((j-i-1)>=0){
                            if (eater[j-i-1][k]==1){
                                arr[j][k]='-';
                            }else{
                                vec[j-i-1][k]+=1;
                            }
                        }
                    }else if (arr[j][k] == 'D'){
                        if ((j+i+1)<r){
                            if (eater[j+i+1][k]==1){
                                arr[j][k]='-';
                            }else{
                                vec[j+i+1][k]+=1;
                            }
                        }
                    }
                    else if (arr[j][k] == 'L'){
                        if ((k-i-1)>=0){
                            if (eater[j][k-i-1]==1){
                                arr[j][k]='-';
                            }else{
                                vec[j][k-i-1]+=1;
                            }
                        }
                    }
                    else if (arr[j][k] == 'R'){
                        if ((k+i+1)<c){
                            if (eater[j][k+i+1]==1){
                                arr[j][k]='-';
                            }else{
                                vec[j][k+i+1]+=1;
                            }
                        }
                    }
                }
            }

            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++){
                    if (vec[j][k] > 0){
                        temp = vec[j][k];
                        while(--temp)
                            res+=temp;
                    }
                }
            }

        }

        cout<<res<<"\n";



        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         cout << eater[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
}