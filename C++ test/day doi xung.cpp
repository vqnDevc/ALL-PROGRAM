#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int a[1000];
    bool check = true;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     scanf("%d",&a[i]);
    for(int i=1;i<=sqrt(n);i++){
    	if(a[i]!=a[n+1-i])
    	check = false ; 
   }
	if(check==true)
	   printf("Symmetric array");
	else
	   printf("Asymmetric array");   
    return 0; 
}
