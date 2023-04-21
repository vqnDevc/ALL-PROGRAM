#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct sinhvien{
        int year;
		char name[20];	
}sv;
void nhap(sv *a,int i){
	 printf("Nhap ho va ten sv%d: ",i);
	 getchar();
	 fgets(a->name,sizeof(a->name),stdin);
	 a->name[strlen(a->name)-1]='\0';
	 printf("Nam sinh: ");
	 scanf("%d",&a->year);
}
void swap(sv *a,sv *b){
	 sv  c = *a;
	    *a = *b;
	    *b = c;
}
void hienThi(sv a[],int n){
	printf("\n%c%c%c%c%c%c%c%c%s%c%c%c%c%c%c%c%c%c%c%s%c%c\n",218,196,196,196,196,196,196,196,"TEN SINH VIEN",196,196,196,196,196,196,196,196,194,196,"NAM SINH",196,191);	 
    for(int i=0;i<n;i++){
        printf("%c%20s%9c%7d%4c\n",179,a[i].name,179,a[i].year,179);
    printf("%c",195);
	for(int i=0;i<28;i++)
	    printf("%c",196);
	 printf("%c",197);
	for(int j=0;j<10;j++)
	    printf("%c",196);
	 printf("%c\n",180);	    
    }
    printf("%c",192);
	for(int i=0;i<28;i++)
	    printf("%c",196);
	printf("%c",193);	
	for(int i=0;i<10;i++)
	    printf("%c",196);
	printf("%c",217);	    
}
void sapxep(sv *a,int n){
	for(int i=0;i<n;i++)
	    for(int j=i+1;j<n;j++)
	        if((a+i)->year<(a+j)->year)
	           swap(a+i,a+j);
	hienThi(a,n);           
}
int main(){
    int n;
    printf("Nhap so sinh vien cua lop: ");
    scanf("%d",&n);
    sv *a = (sv*)malloc(sizeof(sv)*n);
    for(int i=0;i<n;i++)
        nhap(a+i,i+1);   
    sapxep(a,n); 
    free(a);
	 return 0; 
}

