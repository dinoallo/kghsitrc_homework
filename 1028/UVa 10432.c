#include<stdio.h>
#include<math.h>
#define PI atan(1)*4

int main(){
    int n;
    double r;
    while(scanf("%lf%d",&r,&n) != EOF){
        double angle = 2 * PI / n;
        double area = r * r * sin(angle)/2 * n;
        printf("%0.3lf\n",area);
    }
    return 0;
}
