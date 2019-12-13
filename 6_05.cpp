#include<iostream>
using namespace std;
class Vect
{
	int x, y;
public:
	Vect(int a = 0, int b = 0);
	friend Vect operator +=(Vect &v1, Vect &v2);
	Vect operator-=(Vect v);
	void display();
};
Vect::Vect(int a, int b):x(a),y(b)
{
}
Vect operator+=(Vect &v1, Vect &v2)
{
	v1.x += v2.x;
	v1.y += v2.y;
	return v1;
}
Vect Vect::operator-=(Vect v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}
void Vect::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
	Vect v1(6, 8), v2(3, 6), v3;
	cout << "original v1=";
	v1.display();
	cout << "original v2=";
	v2.display();
	v3 = v1;
	cout << "original v3=";
	v3.display();
	v1 += v2;
	cout << "after v1+=v2,v1=";
	v1.display();
	v2 -= v3;
	cout << "after v2-=v3,v2=";
	v2.display();
	cout << "arter v2-v3,v3=";
	v3.display();
	system("pause");
	return 0;
}