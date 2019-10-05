#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int check=1;
        for (int i=0;i<s1.length();i++){
            int found = s2.find(s1[i]); 
            if (found != string::npos) 
                s2.erase(found, 1);
            else{
                check=0;
            }
        }
        if (check==1){
            sort(s2.begin(), s2.end());
            int i=0;
            for (i=0;i<s2.length();i++){
                if (s2[i]<s1[0])
                    continue;
                else
                    break;
            }
            int j=1;
            while(j<s1.length()-1){
                if (s1[j]!=s1[0]){
                    break;
                }
                j++;
            }
            int k=i;
            while(k<s2.length()-1){
                if (s2[k]!=s2[i]){
                    break;
                }
                k++;
            }
            if (s1[j]<s2[k])
                s2.insert(i,s1); 
            else
                s2.insert(k,s1); 
            cout<<s2<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }
    }
}