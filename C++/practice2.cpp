#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,2,28,29,30};
    int len = sizeof(a)/sizeof(int);
    int count = 0;
    for(int i=0; i<len-5;i++){
        for(int j=i+1; j<len-4;j++){
            for(int k=j+1; k<len-3;k++){
                for(int l=k+1; l<len-2;l++){
                    for(int m=l+1; m<len-1;m++){
                        for(int o=m+1; o<len;o++){
                            // cout << i<<""<<j<<""<<k<<""<<l<<""<<m<<""<<o<<endl;
                            count+=1;
                        }
                    }
                }
            }
        }
    }
    cout<< count;
}