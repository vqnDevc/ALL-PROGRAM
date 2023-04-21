#include <iostream>

struct date{
	int ngay, thang, nam;
	
	date(int _ngay, int _thang, int _nam){
		this->ngay  = _ngay;
		this->thang = _thang;
		this->nam   = _nam;
	}
	
	date(){};
	
	date *getDate(){
		return this;
	}
};

int main(){
	date*d1 = new date(31,12,2003);
	std::cout<<d1->ngay<<"/"<<d1->thang<<"/"<<d1->nam<<std::endl;
}