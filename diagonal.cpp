#include<stdio.h>
#include<math.h>
int main(){
    double i,n,d;
    for(i=1;;i++){
        scanf("%lf",&n);
        if(n==0)break;
        d = ceil((sqrt(8*n + 9) + 3)/2.0);
        printf("Case %.0lf: %.0lf\n",i,d);
    }
}
