#include<stdio.h>

int main(){
    int N;int kase = 0;
    while(scanf("%d",&N) != EOF && N > 0){
        int m = 0;

        while(N > (1<<m)){
            m++;
        }
        printf("Case %d: %d\n",++kase,m);
    }
    return 0;
}
