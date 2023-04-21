#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct dathuc
{
    int bac;
    vector<int>heso;
};
typedef struct dathuc DaThuc;

void nhapDT(DaThuc *);
void inDT(const DaThuc *);
DaThuc * congDT(const DaThuc *, const DaThuc *);
DaThuc * truDT(const DaThuc *, const DaThuc *);
//DaThuc * nhanDT(const DaThuc *, const DaThuc *);
double giaTriDT(const DaThuc *, double);

int main()
{
    DaThuc * dt1 = new DaThuc;
    DaThuc * dt2 = new DaThuc;
    DaThuc * tongDT = new DaThuc;
    DaThuc * hieuDT = new DaThuc;
    DaThuc * tichDT = new DaThuc;

    nhapDT(dt1);
    inDT(dt1);

    nhapDT(dt2);
    inDT(dt2);
	
//	cout<<endl<<"Tong hai da thuc = ";
//    tongDT = congDT(dt1, dt2);
//    inDT(tongDT);

    cout<<endl<<"Hieu hai da thuc = ";
    hieuDT = truDT(dt1,dt2);
	inDT(hieuDT);
     
    double x;
    cout<<endl<<"Nhap gia tri x : ";
    cin>>x;
    cout <<endl<<"Gia tri da thuc = "<< giaTriDT(hieuDT, x);

    return 0;
}

void nhapDT(DaThuc * dt){
//	vector<int>::iterator iter;
//	iter = heso.begin();
	int a;
	cout<<endl<<"Nhap he so da thuc :";
	cin>>dt->bac;
	cout<<endl<<"Nhap cac he so :";
	for(int i = 0; i <= dt->bac; i++){
		cin>>a;
		dt->heso.push_back(a);
	}
}

void inDT(const DaThuc * dt){
	cout<<endl;
	for(int i = 0; i<= dt->bac; i++){
		if(dt->heso.at(i)==0) continue;
		if(i<dt->bac){
			if(dt->heso.at(i)==1){
				cout<<"x^"<<i<<" + ";
			}else 
			cout<<dt->heso.at(i)<<"x^"<<i<<" + ";
		}else{
			if(dt->heso.at(i)==1){
				cout<<"x^"<<i;
			}else 
			cout<<dt->heso.at(i)<<"x^"<<i;			
		}
	}
}
//void inDT(const DaThuc * dt){
//	cout<<endl;
//	for(int i = 0; i<= dt->bac; i++){
//		if(dt->heso[i]==0) continue;
//		if(i<dt->bac){
//			if(dt->heso[i]==1){
//				cout<<"x^"<<i<<" + ";
//			}else 
//			cout<<dt->heso[i]<<"x^"<<i<<" + ";
//		}else{
//			if(dt->heso[i]==1){
//				cout<<"x^"<<i;
//			}else 
//			cout<<dt->heso[i]<<"x^"<<i;			
//		}
//	}
//}

DaThuc * congDT(const DaThuc * dt1, const DaThuc * dt2)
{
    // gia tri tra ve la tong 2 so huu ti DT1 va DT2
	// can cap phat bo nho dong cho bien tong cua 2 so huu ti
	// sau do tra con tro nay ve
	DaThuc * tongDT = new DaThuc;
	tongDT->bac = (dt1->bac > dt2->bac)?dt1->bac:dt2->bac;
	for(int j = 0; j<= tongDT->bac; j++){
		if(j <= (dt1->bac < dt2->bac)?dt1->bac:dt2->bac ){
			tongDT->heso.push_back(dt1->heso[j] + dt2->heso[j]);
		}else{
			if(dt1->bac < dt2->bac){
			   tongDT->heso.push_back(dt2->heso[j]);
			}else{
			   tongDT->heso.push_back(dt1->heso[j]);
			}
		}
	}
	return tongDT;
}
//DaThuc * congDT(const DaThuc * dt1, const DaThuc * dt2)
//{
//    // gia tri tra ve la tong 2 so huu ti DT1 va DT2
//	// can cap phat bo nho dong cho bien tong cua 2 so huu ti
//	// sau do tra con tro nay ve
//	DaThuc * tongDT = new DaThuc;
//	tongDT->bac = (dt1->bac > dt2->bac)?dt1->bac:dt2->bac;
//	
//	for(int i = 0; i<= tongDT->bac; i++){
//		if(i <= (dt1->bac < dt2->bac)?dt1->bac:dt2->bac ){
//			tongDT->heso[i] = dt1->heso[i] + dt2 ->heso[i];
//		}else{
//			if(dt1->bac < dt2->bac)
//			tongDT->heso[i] = dt2->heso[i];
//			else
//			tongDT->heso[i] = dt1->heso[i];
//		}
//	}

//    // tongDT = dt1 + dt2;
//	return tongDT;
//}

DaThuc * truDT(const DaThuc * dt1, const DaThuc * dt2){
	
	DaThuc * hieuDT = new DaThuc;
	hieuDT->bac = (dt1->bac>dt2->bac)?dt1->bac:dt2->bac;
		
	for(int k = 0; k<= hieuDT->bac; k++){
		if(k <= (dt1->bac < dt2->bac)?dt1->bac:dt2->bac ){
			hieuDT->heso.push_back(dt1->heso[k] - dt2 ->heso[k]) ;
		}else{
			if(dt1->bac < dt2->bac)
			hieuDT->heso.push_back(dt2->heso[k]);
			else
			hieuDT->heso.push_back(dt1->heso[k]);
		}
	}
	
	return hieuDT;	
}

double giaTriDT(const DaThuc * dt, double x){
	double sum = 0;
	for(int i = 0; i <= dt->bac; i++){
		sum += pow(x,i)*dt->heso[i];
	}
    return sum;
}