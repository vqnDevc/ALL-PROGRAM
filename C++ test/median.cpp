#include<stdio.h>
int main(){
    int a[100];
    for(int i = 0;i < 5;i++){              // tao mang nhap cac so vao 
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < 5;i++){            // doi so lon nhat len dau
        for(int j = i+1;j < 5;j++){
            if(a[i] < a[j]){
                int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;                                //
            }
        }
    }
    printf("%d",a[2]);
    return 0;
}
