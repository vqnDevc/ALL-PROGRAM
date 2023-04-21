#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int a,b,c;     //a*x^4+b*x^2+c=0
	float delta,x,xa,xb,x1,x2,x3,x4,d;
	cin >> a >> b >> c;
	cout << fixed;
	if (a==0){ //a=0
		if ( b==0 ){ //b=0
			if ( c==0 ) cout << "VSN"; 
			else cout << "VN";
		}
		else { //b!=0
			if ( c==0 ) cout << "0" ;
			else if ( b>0 && c<0 || b<0 && c>0 ) cout << setprecision(2) << (float)sqrt(-c/b) << " " << setprecision(2) << (float)-sqrt(-c/b);
			else cout << "VN";
		}
	}
	else { //a!=0	
		if ( b==0 ) { //b=0
			if ( c==0 ) cout << "0";
			else if ( c>0 && a<0 || c<0 && a>0 ) {
				x= (float)sqrt(-c/a);
				x1= (float)sqrt(x);
				x2= (float)-sqrt(x);
				cout << setprecision(2) << x1 << " " << setprecision(2) << x2;
			}
			else cout << "VN"; 
		}
		else { //b!=0
			delta = b*b - 4*a*c;
			if (delta < 0) cout << "VN";
			else if (delta == 0) { //x*x=-b/2*a
				x=(float)-b/2*a;
				if ( b>0 && a<0 || b<0 && a>0 ) {
					x1= (float)sqrt(x);
					x2= (float)-sqrt(x);
					cout << setprecision(2) << x1 << " " << setprecision(2) << x2;
				}
				else cout << "VN";
			}
			else {
				d=(float)sqrt(delta);
				xa=(-b+d)/(2*a);
				xb=(-b-d)/(2*a);
				if (xa > 0 && xb > 0 ) {
					if ( xa > xb ) { // x2 x4 x3 x1
						x1= sqrt(xa);
						x2= -sqrt(xa);
						x3= sqrt(xb);
						x4= -sqrt(xb);
						cout << setprecision(2) << x1
						<< " " << setprecision(2) << x3
						<< " " << setprecision(2) << x4
						<< " " << setprecision(2) << x2;
					}
					else { // xa < xb == x4 x2 x1 x3 
						x1= sqrt(xa);
						x2= -sqrt(xa);
						x3= sqrt(xb);
						x4= -sqrt(xb);					
						cout << setprecision(2) << x3
						<< " " << setprecision(2) << x1
						<< " " << setprecision(2) << x2
						<< " " << setprecision(2) << x4;
					}
				}
				else if ( xa > 0 && xb < 0 ) { 
					x1 = sqrt(xa);
					x2 = -sqrt(xa);
					cout << setprecision(2) << x2 << " " << setprecision(2) << x1; 
				}
				else if ( xa < 0 && xb > 0 ) {
					x1 = sqrt(xb);
					x2 = -sqrt(xb);
					cout << setprecision(2) << x2 << " " << setprecision(2) << x1; 					
				}
				else cout << "VN"; 				
			}
		}
	}
	return 0;
}
