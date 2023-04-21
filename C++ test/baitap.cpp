#include<stdio.h>

int main(){
    char o;
    int lent = 0;
    int n,k,z,arr[1000];
      	printf("           MANAGE NUMBERS WITH ARRAYS PROGRAM\n ");
        printf("\nNhap 'c' de tao mang so nguyen (neu da co thi clear data mang cu)");
        printf("\nNhap 'p' de in day (neu cua co gia tri thi bao day trong)");
        printf("\nNhap 'd' de yeu cau xoa mot phan tu va nhap k la vi tri can xoa ");
        printf("\nNHap 'i' de them 1 phan tu vao cuoi day");
        printf("\nNhap 's' de sap xep  theo thu tu tang dan");
        printf("\nNhap 'x' de sap xep theo chieu giam dan");
        printf("\nNhap 't' de tim kiem 1 so x trong day");
        printf("\nNhap 'e' de dung chuong trinh\n");
        
     
    do {          
          scanf("%c",&o);
     
         switch(o) { 
         
            case 'e' :
						      break;
							     
            case 'c' :
       	                printf("\nNhap so so can dung :");
       	                scanf("\n%d",&n);
       	               	printf("\nNhap day :");
       	                for (int i = 0;i < n;i++){
       	                	scanf("%d",&arr[i]);
						   }
						   lent++;
						   break;
						   
		    case 'p' :
						if( lent == 0){
							printf("\nDay trong\n");
						    }else {
						printf("\nDay so :");
					    for (int i = 0 ;i < n;i++){
					    	printf("%d ",arr[i]);
						}
					}
						break; 
						
		    case 's': 
		             for(int i = 0 ;i < n;i++){
		             	for(int j = i +1;j <n;j++){
		             		if (arr[i] > arr[j]){
		             			int temp = arr[i];
		             			  arr[i] = arr[j];
		             			  arr[j] = temp;
							 }
						 }
					 }
					 printf("\nDay so theo thu tu tang dan la:    ");
					 for (int i = 0;i < n;i++){
					 printf("%d ",arr[i]);
				     }
					 break;
					 
	     	case 'x' : 
	     	         for(int i = 0 ;i < n;i++){
		             	for(int j = i +1;j <n;j++){
		             		if (arr[i] < arr[j]){
		             			int temp = arr[i];
		             			  arr[i] = arr[j];
		             			  arr[j] = temp;
							 }
						 }
					 }
					 printf("\nDay so theo thu tu giam dan la:    ");
					 	 for (int i = 0;i < n;i++){
					 printf("%d ",arr[i]);
				     }
					 break;	  
					 
			case 't' :
			         printf("\nNhap so muon tim : ");
					 scanf("%d",&k);
					 if (k <= n ){
					 
					 printf("So thu %d la : %d",k,arr[k - 1]);
				}else {
					printf("Error!!!");
				}
				break;
				
			case 'i' :
			         printf("\nNhap so ban muon them vao cuoi day :   ");
					 scanf("%d",&z);
				      
				     arr[n] = z; 
				 
				 
				 
	   }
	   getchar();
    }while( o != 'e');
    return 0;
}
    
						   
						   
						   
						   
						   
       	                	
       		
        
        
        
      

