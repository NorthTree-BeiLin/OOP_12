#include"employ.h"
employee::employee(const char *pn, const char *pid)
{
	name = new char[strlen(pn) + 1];
	strcpy(name, pn);
	id = new char[strlen(pid) + 1];
	strcpy(id, pid);
}
employee::~employee()
{
	delete[]name;
	delete[]id;
}
char *employee::getName()const
{
	return name;
}
char *employee::getID()const
{
	return id;
}
float employee::getslary()const
{
	return 0.0;
}
void employee::print()const
{
	cout << "An employee!" << endl;
}
manager::manager(const char *pn, const char *pid, float a) :employee(pn, pid)
{
	weeklysalary = a;
}
void manager::setSalary(float s)
{
	weeklysalary = s;
}
float manager::getslary()const
{
	return weeklysalary;
}
void manager::print()const
{
	cout << "manager:" << getName()<<";id:" << getID() << endl;
}
salesman::salesman(const char *pn, const char *pid, float bs, float c, unsigned q) :employee(pn, pid)
{
	basesalary = bs;
	comission = c;
	quality = q;
}
void salesman::setsalary(float  bs)
{
	basesalary = bs;
}
float salesman::getsalary()const
{
	return (basesalary + comission * quality);
}
void salesman::print()const
{
	cout << "salesman:" << getName() << ";id:" << getID ()<< endl;
}