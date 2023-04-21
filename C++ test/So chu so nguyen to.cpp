#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
bool checkPrime(int n){
    if(n<=1) 
      return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
           return false;
    return true;       
}
int soNguyenTo(char s[]){
	int a=strlen(s);
	int b[a];
	int dem=0;
	for(int i=0;i<a;i++){
	    b[i]=s[i]-48;
	    if(checkPrime(b[i]))
	       dem++;
	 }
   return dem;    	
} 
int main(){
    int n;
    scanf("%d",&n);
    char number[n][1000];
    for(int i=0;i<n;i++)
        scanf("%s",number+i);
    for(int i=0;i<n;i++)
       printf("%d\n",soNguyenTo(*(number+i)));
 }
