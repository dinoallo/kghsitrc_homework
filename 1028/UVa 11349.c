#include<stdio.h>

int main(){
    int t,T;
    scanf("%d",&T);
    int n;
    for(t = 1;t<=T;t++){
        int ok = 1;
        scanf("\n N = %d",&n);
        long long int ma1[n+2][n+2],ma2[n+2][n+2];
        int i,j;
        for(i =1;i<=n;i++){
            for(j = 1;j<=n;j++){
                scanf("%lld",&ma1[i][j]);
                if(ma1[i][j] < 0) ok = 0;
            }
        }
        for(i = n;i>=1;i--){
            for(j=n;j>=1;j--){
                ma2[n-i+1][n-j+1] = ma1[i][j];
            }
        }

        for(i = 1;i<=n;i++){
            for(j = 1;j<=n;j++){
                if(ma1[i][j] != ma2[i][j]){
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) printf("Test #%d: Symmetric.\n",t);
        else printf("Test #%d: Non-symmetric.\n",t);
    }
    return 0;
}
