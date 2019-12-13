
#include <iostream>
#include <cstdlib>
#include <cmath>    
#include <windows.h>
#include<iomanip>
const double pi = 3.1415;

using namespace std;


//----------------抽象类: 图形类-------------------

class shapes
{
public:
	virtual void display() = 0; //含有纯虚函数的类就是抽象类
	virtual double area()=0;
	virtual double c()=0;
	virtual ~shapes();


};
shapes::~shapes()
{
	cout << "~shapes()is called!" << endl;
	getchar();
}
//----------------具体类:矩形类------------------

class rectangle :public shapes
{
private:
	double a,b;

public:
	rectangle(double _a,double _b) :a(_a),b(_b)
	{
		cout << "Rectangle() is called!" << endl;
	}
	~rectangle()
	{
		cout << "~Rectangle() is called!" << endl;
		getchar();
	}
	double area()
	{
		return a * b;
	}
	double c()
	{
		return 2 * (a + b);
	}
	void display()
	{
		cout << "生成矩形！边长为：" << setw(2) << a << setw(2) << b << endl;
		cout << "面积为：" << area() << endl;
		cout << "周长为：" << c() << endl;

	}

};

//----------------具体类:圆形类-------------------

class circle :public shapes
{
private:
	double a;
public:
	circle(double _a) :a(_a)
	{

		cout << "circle() is called!"<<endl;

	}
	~circle() 
	{
		cout << "~circle()is called!" << endl;
		getchar();
	}
	double area()
	{
		return pi * a*a;
	}
	double c()
	{
		return 4 * pi*a;
	}
	void display()
	{
		cout << "生成一个圆！,半径为：" << a << endl;
		cout << "面积:" << area() << endl;
		cout << "周长为：" <<c() << endl;
	}

};


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	rectangle a(4,8);         //矩形类对象

	circle b(3); //三角形类对象


	//------------1. 抽象类的特性探索----------

//shpaes s  //错误，不可以生成抽象类的对象
	
	shapes *p ;    // 正确, 可以建立抽象类的指针变量
	p = &a;
	shapes &r =b ;//正确, 可以建立抽象类的对象引用,引用的是派生类对象


	//-----------2. 动态多态特性探索-----------
	p->display();
	r.display();

	system("pause");

	return 0;
}