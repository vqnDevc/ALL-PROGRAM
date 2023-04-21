#include<stdio.h>
#include<stdlib.h>
void nhapMaTran(int **a,int dong, int cot){
	 for(int i=0;i<dong;i++)
	     for(int j=0;j<cot;j++)
	          scanf("%d",&a[i][j]);
}
void xuatMaTran(int **a,int dong,int cot){
	for(int i=0;i<dong;i++){
		for(int j=0;j<cot;j++)
		    printf("%5d",a[i][j]);
		printf("\n");    
	}
}
int main(){
    int dong,cot;
    scanf("%d%d",&dong,&cot);
    int **a =(int **)malloc(dong*sizeof(int*));
    for(int i=0;i<dong;i++)
        a[i]=(int *)malloc(cot*sizeof(int));
    nhapMaTran(a,dong,cot);
	xuatMaTran(a,dong,cot);
	for(int i=0;i<dong;i++)
	    free(a[i]);
	free(a);	    
	 return 0;
}

