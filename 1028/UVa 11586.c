#include<stdio.h>

int main(){
    int t;char a,b;
    scanf("%d",&t);
    getchar();
    while(t--){
        int male = 0,female = 0;
        for(;;){
            scanf("%c",&a);
            if(a == ' ')continue;
            else if(a == '\n') break;
            else if(a == 'M') male++;
            else if(a == 'F') female++;

            scanf("%c",&b);
            if(b == 'M') male++;
            else if(b == 'F') female++;
        }

        if(male == female && male != 1) printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}
