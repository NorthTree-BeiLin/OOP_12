#include"tringle.h"

int main()
{
	tringle a(3, 4, 5),b(6,9,7);
	tringle c(a);
	cout << "������a:" << endl << a << "������b:" << endl << b << "������c��" << c << endl;
	cout << "b��c������,������c��" << endl;
	c= b;
	cout << c<<endl;
	cout << "���������ε����֮��Ϊ��" << a + b << endl;
	system("pause");


}