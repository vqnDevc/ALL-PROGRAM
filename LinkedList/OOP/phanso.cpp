#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll ucl(ll a, ll b){
	if(b==0) return a;
	return ucl(b, a%b);	
}

ll bcn(ll a, ll b){
	return a/ucl(a,b) * b;
}

class PhanSo{
private:
	ll tuso;
	ll mauso;
public:
	PhanSo() {}
	PhanSo(ll t, ll m) : tuso(t), mauso(m) {}
	void setTu(ll t){
		this->tuso = t;
	}
	void setMau(ll m){
		this->mauso = m;
	}
	ll getTu(){
		return tuso;
	}
	ll getMau(){
		return mauso;
	}
	
	friend istream& operator >> (istream& in, PhanSo &a);
	friend ostream& operator << (ostream& os, PhanSo a);
	friend PhanSo operator + (PhanSo a, PhanSo b);
	void rutgon();

};

istream& operator >> (istream& in, PhanSo &a){
		cout << "Tu so = ";
		in >> a.tuso;
		do{
			cout << "Mau so = ";
			in >> a.mauso;			
		}while(a.mauso == 0);
		return in;
}

ostream& operator <<(ostream& os, PhanSo a ){
	if(a.tuso > 0 && a.mauso < 0)
	{
		a.tuso  *= -1;
		a.mauso *= -1;
	}
	if(a.mauso != 1)
		os << a.tuso << "/" << a.mauso << endl;
	else
		os << a.tuso << endl;
	return os;            // tra ve con tro
}

void PhanSo::rutgon(){
	ll g = ucl(this->tuso, this->mauso);
	this->tuso  /= g;
	this->mauso /= g;
}

PhanSo operator +(PhanSo a, PhanSo b){
	PhanSo tong;
	ll mc = bcn(a.mauso, b.mauso);
	tong.tuso = mc/a.mauso * a.tuso + mc/b.mauso * b.tuso;
	tong.mauso = mc;
	ll g = ucl(tong.tuso, tong.mauso);
	tong.tuso /= g;
	tong.mauso /= g;
	return tong;
}
int main(){
	PhanSo p,q;
	cin >> p >> q;
	cout << q+p;
    return 0;
}
