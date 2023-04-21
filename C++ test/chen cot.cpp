#include<stdio.h>
int main(){
    int m,n,x,y;
    scanf("%d%d",&m,&n);
    int a[m][n+1];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    scanf("%d %d",&x,&y);
    for(int i=0;i<m;i++)
        for(int j=n;j>x-1;j--)
            a[i][j] = a[i][j-1];
     n++;       
    for(int i=0;i<m;i++)
        a[i][x-1]=y;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
           printf("%d ",a[i][j]);
        printf("\n");   
    }
        
}
