#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class tringle
{
private:
	double a, b, c;
public:
	tringle(double m = 0.0, double n = 0.0, double t = 0.0)
	{
		this->a = m;
		this->b =n;
		this->c = t;
		cout << "���ù��캯����" << endl;
	}
	tringle(const tringle &other)
	{
		this->a = other.a;
		this->b = other.b;
		this->c = other.c;
		cout << "���ÿ������캯����" << endl;
	}
	double area()
	{
		double perimeter= a + b + c;
		double s = sqrt(perimeter*(perimeter - a)*(perimeter - b)*(perimeter - c));
		//cout << s << endl;
		return s;
	}
	double circulate()
	{
		return a + b + c;
		//cout << "�����ε��ܳ���" << a + b + c << endl;
	}
	double operator+(tringle other)
	{
		double s1 = area();
		double s2 = other.area();
		double s = s1 + s2;
		cout << s << endl;
		return s;
	}
	void operator=(const tringle &other)
	{
		this->a = other.a;
		this->b = other.b;
		this->c = other.c;
	

	}
	friend ostream & operator << (ostream &out, tringle &other);

};
ostream &operator<<(ostream &out, tringle &other)
{
	{
		out << "�����εı߳��ǣ�";
		out <<setw(2)<< other.a <<setw(2)<<other.b<<setw(2)<<other.c << endl;
		double s=other.area();
		double t=other.circulate();
		cout << "�����ε�����ǣ�" << s << endl << "�����ε��ܳ��ǣ�" << t << endl;
		out << endl;
		return out;
	}
}