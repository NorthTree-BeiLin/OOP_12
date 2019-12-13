#include"tringle.h"

int main()
{
	tringle a(3, 4, 5),b(6,9,7);
	tringle c(a);
	cout << "三角形a:" << endl << a << "三角形b:" << endl << b << "三角形c：" << c << endl;
	cout << "b、c交换后,三角形c：" << endl;
	c= b;
	cout << c<<endl;
	cout << "两个三角形的面积之和为：" << a + b << endl;
	system("pause");


}