void printArrow(int n, int left){
    if(left!=0){
       for(int i=2*n-1;i>0;i--){
           for(int j=2*n-1;j>0;j--){
       	       if(i-1<=j-i&&(j-i)<n || (j+i-2*n)<n&&(j+i-2*n)>=(2*n-1-i))
       	          printf("*");
       	       else
			      printf(" ");   
	        }
	        printf("\n");
        }
    }else{
        for(int i=1;i<2*n;i++){
            for(int j=1;j<2*n;j++){
       	        if(i-1<=j-i&&(j-i)<n || (j+i-2*n)<n&&(j+i-2*n)>=(2*n-1-i))
       	            printf("*");
       	        else
			         printf(" ");   
	         }
	         printf("\n");
        }
    }
}
