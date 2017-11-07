#include<stdio.h>
/*
f91(3) = f91(f91(14)) = f91(f91(25))......
f91(f91(101)) = f91(91) = f91(f91(102))
f91(f91(111)) = f91(101) = 91*/


int main(){
    int N = 0;
    while(scanf("%d",&N) != EOF && N!= 0){
        int f91count = 1;
        int M = N;
        if(N >= 101){
            printf("f91(%d) = %d\n",N,N-10);
            continue;
        }

        while(M - (f91count) * 10 < 91 ){//M - (f91count-1) * 10 < 101
            if(M<101){
                M +=11;
                f91count++;
            }
            else{
                M-=10;
                f91count--;
            }
        }
        printf("f91(%d) = %d\n",N,M-(f91count - 1)*10-10);
    }
    return 0;
}
