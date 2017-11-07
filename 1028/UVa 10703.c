#include<stdio.h>
#include<string.h>


int area[600][600];
int main(){
    int w,h,n;
    while(scanf("%d%d%d",&w,&h,&n) != EOF && w ){
        int i,j,t;
        int x1,x2,y1,y2;

        for(i = 1;i<=502;i++){
            for(j = 1;j<=502;j++){
                area[i][j] = 0;
            }
        }

        for(t = 0;t<n;t++){
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            int temp;
            if(x1 > x2){
                temp = x2;
                x2 = x1;
                x1 = temp;
            }
            if(y1 > y2){
                temp = y2;
                y2 = y1;
                y1 = temp;
            }

            for(i = y1;i<=y2;i++){
                for(j = x1;j<=x2;j++){
                    area[i][j] = 1;
                }
            }
        }

        int cnt = 0;
        for(i = 1;i<=h;i++){
            for(j = 1;j<=w;j++){
                if(area[i][j] == 0) cnt++;
            }
        }
        if(cnt == 0)
            printf("There is no empty spots.\n");
        else if(cnt == 1)
            printf("There is one empty spot.\n");
        else
            printf("There are %d empty spots.\n",cnt);
    }
    return 0;
}
