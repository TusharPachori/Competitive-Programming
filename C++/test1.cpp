#include<iostream>
using namespace std;

char * convert(char *s){
    int i=0, j=0;
    char c, temp=' ';
    char res[100]={0};
    while((c = s[i])!='\0'){
        if (c==temp){
            int count=1;
            while((c = s[i])==temp){
                count++;
                i++;
            }
            res[j++]=count+48;
        }else{
            temp=c;
            res[j++]=temp;
            i++;
        }
    }
    return res;
}

int main(){
    char *s="qqqqqqllldhhhhhhsiiiiiiiikkkk";
    char *res = convert(s);
    for (int i=0;i<strlen(res);i++){
        cout<<res[i];
    }

}