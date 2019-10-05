#include<bits/stdc++.h>
using namespace std;

int main(){
    int tCases;
    cin >> tCases;
    while(tCases--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        char xc;
        int xi;
        int cap, sml;
        for(int i=0;i<n;i++){
            xc = s[i];
            xi = (int)xc;
            if(xi<90 && xi>65)
                cap++;
            else
                sml++;
        }
        if (cap==sml){
            if (k>=sml)
                cout<<"both\n";
            else if (k<cap)
                cout<<"none\n";
        }else if(sml>cap){
            if (k>=sml)
                cout<<"both\n";
            else if (k<cap)
                cout<<"none\n";
            else
                cout<< "chef\n";
        }else if(cap>sml){
            if (k>=cap)
                cout<<"both\n";
            else if (k<sml)
                cout<<"none\n";
            else
                cout<< "brother\n";
        }
    }
}