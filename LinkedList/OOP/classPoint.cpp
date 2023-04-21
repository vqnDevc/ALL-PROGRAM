#pragma once
#include<bits/stdc++.h>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    friend Point operator - (Point A, Point B)
    {
        return Point(A.x-B.x, A.y-B.y);
    }
    double distance(Point B){
        return sqrt((this->x - B.getX())*(this->x - B.getX()) + (this->y - B.getY())*(this->y - B.getY()));
    }
    void display(){
        cout << "X = " << x << " Y = " << y << endl;
    }
};

class Traingle{
private:
    Point A;
    Point B;
    Point C;
public:
    Traingle() {}
    Traingle(Point A, Point B, Point C) : A(A), B(B), C(C) {}
    double perimeter(){
        return A.distance(B) + B.distance(C) + C.distance(A);
    }
    double area(){
        double a =  A.distance(B);
        double b =  B.distance(C);
        double c =  C.distance(A);
        double p = (a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    Point center(){
        return Point( double(A.getX()+B.getX()+C.getX()) / 3,  double(A.getY()+B.getY()+C.getY()) / 3);
    }
    bool isTraingle(){
        double a =  A.distance(B);
        double b =  B.distance(C);
        double c =  C.distance(A);
        return (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0);
    }
};

int main(){
	Point A(4,1);
	Point B(2,0);
	Point C(1,2);
	Traingle T(A,B,C);
	Point D = T.center();
	D.display();
	return 0;
}