#include<stdio.h>
int main(){
    int N = 0;
    while(scanf("%d",&N) != EOF && N!=0){
        int m = N;
    while(m >= 10){
        int g = 0;
        while(m > 0){
            g+=m%10;
            m/=10;
        }
        m = g;
    }
    printf("%d\n",m);
    }
    return 0;
}
