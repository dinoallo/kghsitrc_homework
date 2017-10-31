#include<stdio.h>

int main(){
    int C,d;
    int t;
    scanf("%d",&t);
    int i;
    for(i = 1;i<=t;i++){
        scanf("%d%d",&C,&d);
        double F = C * 1.8 + 32;
        double newF = F + d;
        double newC = (newF-32)/1.8;
        printf("Case %d: %0.2lf\n",i,newC);
    }
    return 0;

}
