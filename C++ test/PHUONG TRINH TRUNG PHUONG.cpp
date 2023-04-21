#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        if(b==0&&c==0)
           printf("phuong trinh co vo so nghiem");
        else if(b==0 && c!=0 || b*c>0)
           printf("phuong trinh vo nghiem");
        else if(b!=0 && c==0)
           printf("phuong trinh co 1 nghiem\n%.5lf",(float)c);
        else{
           printf("phuong trinh co 2 nghiem\n");
           double x1=-sqrt(-c*1.0/b);
           double x2= sqrt(-c*1.0/b);
           printf("%.5lf %.5lf",x1,x2);
       }
    }else{
        double denta = 1.0*b*b-4*a*c;
    if(denta<0) printf("phuong trinh vo nghiem");
    else if(denta==0){
         double x=-b*1.0/(2*a);
         if(x<0) printf("phuong trinh vo nghiem");
         else if(x==0) printf("phuong trinh co 1 nghiem\n%.5lf",x);
         else{
         printf("phuong trinh co 2 nghiem\n");
         double x1=-sqrt(x);
         double x2= sqrt(x);
         printf("%.5lf %.5lf",x1,x2);
         }
    }else{
        double x1 = (-b*1.0-sqrt(denta))/(2*a);
        double x2 = (-b*1.0+sqrt(denta))/(2*a);
        if(x1>0 && x2>0){
            printf("phuong trinh co 4 nghiem\n");
            if(x2>x1)
                  printf("%.5lf %.5lf %.5lf %.5lf",-sqrt(x2),-sqrt(x1),sqrt(x1),sqrt(x2));
            else  printf("%.5lf %.5lf %.5lf %.5lf",-sqrt(x1),-sqrt(x2),sqrt(x2),sqrt(x1));
       }else if(x1==0&&x2<0 || x1<0&&x2==0)
                 printf("phuong trinh co 1 nghiem\n0.00000");
        else if(x1*x2<0){
                 printf("phuong trinh co 2 nghiem\n");
            if(x1>x2) printf("%.5lf %.5lf",-sqrt(x1),sqrt(x1));
            else      printf("%.5lf %.5lf",-sqrt(x2),sqrt(x2));
       }else if(x1<0 && x2<0)  printf("phuong trinh vo nghiem");
        else if(x1==0&&x2>0 || x1>0&&x2==0){
                          printf("phuong trinh co 3 nghiem\n");
                if(x1>x2) printf("%.5lf %.5lf %.5lf",-sqrt(x1),sqrt(x2),sqrt(x1));
                else      printf("%.5lf %.5lf %.5lf",-sqrt(x2),sqrt(x1),sqrt(x2));
        }
      }
   }
}
