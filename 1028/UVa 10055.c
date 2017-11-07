#include<stdio.h>


int main(){
    unsigned long long int a;
    unsigned long long int b;
    unsigned long long int t;

    while(scanf("%llu%llu",&a,&b) != EOF){
        if(a > b){
            t = a;
            a = b;
            b = t;
        }
        printf("%llu\n",b-a);
    }
    return 0;

}
