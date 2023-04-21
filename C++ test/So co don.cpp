#include<stdio.h>
int Xor(int a,int m,int arr[],int n){
	   int tich=a;
       for(int i=0;i<n;i++){ 
       	  if(i!=m){
			if(arr[i]==a)
       	       tich ^= a;
		  }
    }
    if(tich!=0) 
	   return tich;
	return 0;  
}
int main(){
    int n;
     scanf("%d",&n);
    if(n>0&&n%2==1){
        int arr[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            b[i]=1;
        }
        for(int i=0;i<n;i++){
        	if(b[i]){
        	   b[i] = 0;
        	    for(int j=i+1;j<n;j++){
            	 int x=Xor(arr[i],i,arr,n);
            	 int y=Xor(arr[j],j,arr,n);
        	       if(i!=j && x!=0 && y!=0 && x==y) 
        	         b[j]=0;
               }
			   if(Xor(arr[i],i,arr,n)!=0)
			      printf("%d ",Xor(arr[i],i,arr,n)); 
		   }
       }
   }
}
