#include<stdio.h>
#include<stdbool.h>
int a[100] = {0}, b[100], n, count,dem=0;

void nhap(){
	scanf("%d",&n);
}

bool OK(){ // k tra neu p tich dc
	int tg = 0;
	for(int i = 1; i<= n; i++ )
		tg += a[i]*(i-1);
	if( tg == n ) return true;
	return false;
}

bool khongLap(){
	int tg = 0;
	int mark = 1;
	for( int i = 1; i<= n; i++ )
		if( a[i] ) tg = tg*10 + (i-1);
	for( int j = 0; j< count; j++ )
		if( b[j] == tg ) {
			mark = 0;
			return false;
		}
	if( mark ){
		b[count] = tg;
		count++;
		return true;
	}
}

void xuat(){
	if( OK() ){
		if(khongLap()){
			for( int i = 1; i<= n; i++ )
				if( a[i] && i-1 ) 
			       dem++;
		}
	}
}

void sinh( int &ok ){
	int i = n;
	while( i > 0 && a[i] ) {
		a[i] = 0;
		i--;
	}
	if( i > 0 ) a[i] = 1;
	else ok = 0; // tim dc xau cuoi cung  => dung
}
void next( int ok ){
	while( ok ){ // lap toi khi ok = 0;
		xuat();
		sinh(ok);
	}
}

int main(){
	count = 0;
	int ok = 1;
	nhap();
	next( ok );
	printf("%d",dem/2+1);
	return 0;
}
