#include<stdio.h>
int main(){
    float m,M,a[6];
    for(int i=0;i<6;i++){
        scanf("%f",&a[i]);
    }
    M=a[0];
    m=a[0];
    for(int i=0;i<6;i++){          
        if(M <a[i]){                 // tim gia tri lon nhat cua day so
            M=a[i];
        }
        if(m > a[i]){               // tim gia tri nho nhat cua day so
            m=a[i];
        }
    }
    float score=0;
    for(int i=0;i<6;i++){
	   score += a[i];
}
   score = (score-m-M)/4;
    printf("%0.1f",score);
    return 0;
}

