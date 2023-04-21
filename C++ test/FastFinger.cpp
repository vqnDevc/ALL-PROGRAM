#include<stdio.h>
#include<string.h>
int main(){
    char name[4][1000],t[100];
    char dapAn[4]={'A','B','C','D'};
    for(int i=0;i<4;i++)
        fgets(name[i],1000,stdin);
     for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(strcmp(name[i],name[j])>0){
            	char  temp = dapAn[i];
            	  dapAn[i] = dapAn[j];
            	  dapAn[j] = temp;
            strcpy(t, name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j], t);
			}
	for( int i=0;i<4;i++)		
        printf("%c ",dapAn[i]);
    return 0;    
}
