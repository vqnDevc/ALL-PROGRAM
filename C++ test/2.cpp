#include<stdio.h>
#include<math.h>
unsigned int giaithua(int n){
	unsigned int gt=1;
	for(int i=2;i<=n;i++)
	    gt*=i;
	return gt;	 
}
int check(int n){
	int sum=0;
	while(n>0){
		 sum+=giaithua(n%10);
		 n/=10;
	}
	return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
	    if(a[i]==check(a[i]))
		   printf("YES\n");
		else
		   printf("NO\n");
	}
	 return 0;
}

