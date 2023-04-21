#include<stdio.h>
#include<stdlib.h>
typedef struct sv{
	int stt;
    int mssv;
	struct sv *next;    	
}sv;
void swap(sv *a,sv *b){
	 sv c = *a;
	   *a = *b;
	   *b = c;
}
int main(){
	int i=0,n;
    printf("Nhap so sinh vien: ");
    scanf("%d",&n);
    sv *p,*pdau;
    pdau=NULL;
    while(i<=n){
    	if(i==n){
           p->next=NULL;
		   break;	
	   }
        if(pdau==NULL){
            pdau=(sv*)malloc(sizeof(sv)); 
            p=pdau;
            i++;
       }else{
            p->next=(sv*)malloc(sizeof(sv));
            p=p->next;
            i++;
       }
    }
    
    p=pdau;
    int j=1;
    while(p != NULL){
    	  p->stt=j;
    	  printf("Nhap mssv cua sv%d  : ",p->stt);
    	  scanf("%d",&p->mssv);
    	  p=p->next;
    	  j++;
	}
	
	p=pdau;
	while(p != NULL){
		  printf("Mssv cua sv%d : %d\n",p->stt,p->mssv);
		  p=p->next;
	}
	
	 return 0;
}

