#include <bits/stdc++.h>

using namespace std;

class ThoiGian{
private:
	int hour;
	int minute;
public:
	ThoiGian() : hour(0), minute(0) {}
	ThoiGian(int h, int m) : hour(h), minute(m) {}

	int &GetHour() {
		return hour;
	}
	
	int &GetMinute(){
		return minute;
	}
	
	// hàm nạp chồng toán tử ++ tiền tố
	ThoiGian operator++()
	{
		++minute;
		if(minute >= 60){
			++hour;
			minute -= 60;
		}	
		return ThoiGian(hour, minute);
	}
	
	//hàm nạp chồng toán tử ++ hậu tố
	ThoiGian operator++(int)
	{
		ThoiGian T(hour, minute);
		++minute;
		if(minute >= 60){
			++hour;
			minute -= 60;
		}
		return T;
	}
	
	//hàm nạp chồng toán tử + một ngôi
	ThoiGian operator + (ThoiGian& Ts)
	{
		ThoiGian T;
		T.GetHour()	= this->hour + Ts.GetHour();
		T.GetMinute() = this->minute + Ts.GetMinute();
		if(T.GetMinute() >= 60)
		{
			++T.GetHour();
			T.GetMinute() -= 60;
		}
		return T;
	}

	//hàm nạp chồng toán tử - hai ngôi
//	ThoiGian operator -
	
};

int main(){
	ThoiGian T(19,24);

    return 0;
}
