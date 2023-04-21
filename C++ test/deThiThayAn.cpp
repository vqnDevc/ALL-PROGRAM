#include<stdio.h>
#include<string.h>
int charhistogram(char *xau) {
	int b[1000];
	int l=strlen(xau);

	for(int i=0; i<l; i++) {        // bien doi cac ky tu theo thu tu bang chu cai
		for(int j=i+1; j<l; j++) {
			if(xau[i]>xau[j] ) {
				char c = xau[i];
				xau[i] = xau[j];
				xau[j] = c;
			}
		}
	}

	int kt=0;
	if(xau[0]==' ') {
		for(int i=0; i<l; i++) {       // dem space trong xau
			kt++;
			if(xau[i+1]!=' ')
				break;
		}

		for(int i=0; i<l-kt; i++)     // bien doi mat space
			xau[i]=xau[i+kt];
		xau[l-kt]=NULL;
		l-=kt;
	}

	for(int i=0; i<l; i++) {
		b[i]=1;
	}
	int count[100];
	char s[100];
	int dem = 0;
	int e=0;
	for(int i=0; i<l; i++) {                // kiem tra so lan xuat hien cac ky tu
		count[e] = 1;
		s[e]     = xau[i];
		if(b[i]) {
			b[i]=0;
			for(int j=i+1; j<l; j++) {
				if(xau[i] == xau[j]) {
					count[e]++;
					b[j]=0;
				}
			}
			if(count[e]!=0)            // dem so lan ky tu xuat hien
				dem++;
			e++;
		}
	}
	if(kt!=0)
		dem++;
	for(int i=0; i<e; i++) {                    //sap xep max len dau
		for(int j=i+1; j<e; j++) {
			if(count[i]<count[j] || (count[i]==count[j]&&s[i]>s[j])) {
				int t = count[i];
				count[i] = count[j];
				count[j] = t;
				char p = s[i];
				s[i]=s[j];
				s[j]=p;
			}
		}
	}
	for(int i=0; i<e; i++) {
		printf("%c %d\n",s[i],count[i]);
	}
	if(kt!=0)
		printf("Space %d\n",kt);            // in ra so ky tu khoang trang
	return dem;
}
int main() {
	char s[100];
	scanf("%[^\n]s",s);
	printf("%d",charhistogram(s));
	return 0;
}

