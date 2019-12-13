
#include <iostream>
#include <cstdlib>
#include <cmath>    
#include <windows.h>
#include<iomanip>
const double pi = 3.1415;

using namespace std;


//----------------������: ͼ����-------------------

class shapes
{
public:
	virtual void display() = 0; //���д��麯��������ǳ�����
	virtual double area()=0;
	virtual double c()=0;
	virtual ~shapes();


};
shapes::~shapes()
{
	cout << "~shapes()is called!" << endl;
	getchar();
}
//----------------������:������------------------

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
		cout << "���ɾ��Σ��߳�Ϊ��" << setw(2) << a << setw(2) << b << endl;
		cout << "���Ϊ��" << area() << endl;
		cout << "�ܳ�Ϊ��" << c() << endl;

	}

};

//----------------������:Բ����-------------------

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
		cout << "����һ��Բ��,�뾶Ϊ��" << a << endl;
		cout << "���:" << area() << endl;
		cout << "�ܳ�Ϊ��" <<c() << endl;
	}

};


/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	rectangle a(4,8);         //���������

	circle b(3); //�����������


	//------------1. �����������̽��----------

//shpaes s  //���󣬲��������ɳ�����Ķ���
	
	shapes *p ;    // ��ȷ, ���Խ����������ָ�����
	p = &a;
	shapes &r =b ;//��ȷ, ���Խ���������Ķ�������,���õ������������


	//-----------2. ��̬��̬����̽��-----------
	p->display();
	r.display();

	system("pause");

	return 0;
}