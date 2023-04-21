#include<stdio.h>
#include<math.h>
#include<string.h>
int max(char *s){
	int e=0,b[1000];
	int l=strlen(s);
    for(int i=l-1;i>=0;i--){
    	int j=0;
    	char a = s[i];
        while(a>='0'&&a<='9'){
        	  b[e]+= (a-48)*pow(10,j);
        	  j++;
        	  if(s[i-1]<0 || s[i-1]>9){
        	  	 e++;
        	  	 break;
			  }
			  a=s[i-1];
		}
}
	int max=b[0];
	for(int i=0;i<=e;i++){
		if(max<b[i])
		  max=b[i];
	}
	return max;
}
int main(){
    int n;
    scanf("%d",&n);
    char s[n][100000];
    for(int i=0;i<n;i++)
       scanf("%s",&s[i]);
    for(int i=0;i<n;i++)
        printf("%d\n",max(s[i]));   
	 return 0;
}

