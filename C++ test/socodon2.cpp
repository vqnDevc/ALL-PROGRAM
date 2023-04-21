#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
             b[i] = 1 ;   
        }
        for(int i=0;i<n;i++){
    	    int count = 1;
    	    if(b[i]){
    	       b[i]=0;
               for(int j=i+1;j<n;j++){
        	       if(a[i]==a[j]){
        	          count++;
        	          b[j] = 0;
	    	        } 
     	        } 
		        if (count%3==1) 
		            printf("%d ",a[i]);	
            }
        }
    }
}
