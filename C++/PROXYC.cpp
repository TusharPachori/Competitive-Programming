#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >>T;
    while(T--){
        int d;
        cin >>d;
        string s;
        cin >> s;
        int att;
        int res;
        int mendatory_att;
        double temp;
        temp = (d*0.75);
        if (temp-(int)temp)
            mendatory_att = int(temp)+1;
        else
            mendatory_att = int(temp);
        int present=0;
        int fix_pre = 0;
        int arr[] = {0,1,d-2,d-1};
        for(int i=0;i<4;i++){
            if (s[arr[i]]=='P'){
                fix_pre++;
            }
        }
        int count=0;
        for(int i=2;i<d-2;i++){
            if (s[i]=='P'){
                present++;
            }else{
                if ( ( (s[i-2]=='P') || (s[i-1]=='P') ) && ( (s[i+1]=='P') || (s[i+2]=='P') )){
                    count++;
                }
                // else{
                //     cout<<s[i-2]<<" "<<s[i-1]<<" "<<s[i]<<" "<<s[i+1]<<" "<< s[i+2]<<"\n";
                // }
            }
        }
        att = fix_pre + present;
        if (att >= mendatory_att){
            res=0;
        }
        else{
            if (count>=(mendatory_att-att))
                res = mendatory_att-att;
            else
                res=-1;
        }
        cout<<res<<"\n";
    }
}