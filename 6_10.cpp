#include<iostream>
using namespace std;
class base1
{
public:
	virtual void f()
	{
		cout << "base1" << endl;
	}

};
class base2
{
public:
	void f()
	{
		cout << "base2" << endl;
	}
};
class BDerive :public base1
{
public:
	void f()
	{
		cout << "BDerive" << endl;
	}
};
class BDDerive :public BDerive
{
public:
	virtual void f()
	{
		cout << "BDDerive" << endl;
	}
};
class BBDerive :public base1, public base2
{
public:virtual void f()
{
	cout << "BBDerive" << endl;
}
};
int main()
{
	base1 b1, *p1;
	base2 b2, *p2;
	BDerive bd;
	BDDerive bdd;
	BBDerive bbd;
	p1 = &b1; p1->f();
	p1 = &bd; p1->f();
	p1 = &bbd; p1->f();
	p2 = &b2; p2->f();
	p2 = &bbd; p2->f();
	p1 = &bdd; p1->f();
	system("pause");
	return 0;

}

