#include<math.h>
#include<stdio.h>

main(){
   double a,b,c,s;
   double area,ara;
   while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){

      s=(a+b+c)/2.0;
      ara=s*(s-a)*(s-b)*(s-c);

      if(a<0||b<0||c<0)        area=-1.000;
      else if(ara<=0)      area=-1.000;
      else{
         area=sqrt(ara);
         area=4.0*area/3.0;
      }
      printf("%.3lf\n",area);
   }/*Input while end*/
}
