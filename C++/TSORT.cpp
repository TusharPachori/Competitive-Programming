// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i=0;i<n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     sort(v.begin(), v.end());
//     for(int x:v)
//         cout<<x<<"\n";
// }


#include <stdio.h>
#define BUFSIZE 32768

static char bin[BUFSIZE];
static char bot[BUFSIZE];
static int list[1000001];
         
int main(void){
    int i, line;
    int num = 0, lines = 0;
    
    int r = fread(bin, sizeof(char), BUFSIZE, stdin);
    
    for(i = 0; i < r && bin[i] >= '0'; i++) {
        lines = (bin[i] - '0') + (10 * lines);
    }

    for(; i < r && bin[i] < '0'; i++);
        for(line = lines; line > 0; i++){
            if(i == BUFSIZE){
                r = fread(bin, sizeof(char), BUFSIZE, stdin);
                i = -1;
            } else if(bin[i] >= '0'){
                num = (bin[i] - '0') + (10 * num);
            } else {
                list[num]++;
                num = 0;
                line--;
            }
        }
        for(i = line = 0; lines > 0; line++){
            while(list[line]-- > 0){
                if((i + 8) >= BUFSIZE){
                    fwrite(bot, sizeof(char), i, stdout);
                    i = 0;
                }
                num = line;
                if (num < 100000){
                    if (num < 10000){
                        if (num < 1000){
                            if (num < 100){
                                if (num < 10){
                                    bot[i++] = num + 48;
                                } else {
                                    bot[i+1] = num - num / 10 * 10 + 48;
                                    bot[i] = num / 10 + 48;
                                    i += 2;
                                }
                            } else {
                                bot[i+2] = num - num / 10 * 10 + 48;
                                num /= 10;
                                bot[i+1] = num - num / 10 * 10 + 48;
                                bot[i] = num / 10 + 48;
                                i += 3;
                            }
                        } else {
                            bot[i+3] = num - num / 10 * 10 + 48;
                            num /= 10;
                            bot[i+2] = num - num / 10 * 10 + 48;
                            num /= 10;
                            bot[i+1] = num - num / 10 * 10 + 48;
                            bot[i] = num / 10 + 48;
                            i += 4;
                        }
                    } else {
                        bot[i+4] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+3] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+2] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+1] = num - num / 10 * 10 + 48;
                        bot[i] = num / 10 + 48;
                        i += 5;
                    }
                } else {
                    if (num < 1000000) {
                        bot[i+5] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+4] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+3] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+2] = num - num / 10 * 10 + 48;
                        num /= 10;
                        bot[i+1] = num - num / 10 * 10 + 48;
                        bot[i] = num / 10 + 48;
                        i += 6;
                    } else {
                        bot[i+6] = '0';
                        bot[i+5] = '0';
                        bot[i+4] = '0';
                        bot[i+3] = '0';
                        bot[i+2] = '0';
                        bot[i+1] = '0';
                        bot[i] = '1';
                        i += 7;
                    }
                }
                bot[i++] = '\n';
                lines--;
            }
        }
        if(i > 0){
        fwrite(bot, sizeof(char), i-1, stdout);
    }
    return 0;
}  