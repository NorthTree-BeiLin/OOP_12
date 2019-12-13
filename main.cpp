#include"employ.h"
int main()
{
	employee *ptr;
	manager m((char *)"Zhang Hua", "2018110001", 1500.0);
	salesman n((char *)"Yang Rong", "2018110002", 300.0);
	ptr = &m;
	ptr->print();
	cout << "earing per week:" << ptr->getslary() << endl;
	cout << "earning per week:" << m.getslary() << endl;
	cout << endl;
	ptr = &n;
	ptr->print();
	cout << "earing per week:" << ptr->getslary() << endl;
	cout << "earning per week:" << n.getslary() << endl;
	system("pause");
	return 0;
}