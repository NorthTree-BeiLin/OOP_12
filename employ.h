#include<iostream>
using namespace std;
class employee
{
	char *name;
	char *id;
public:
	employee(const char *, const char *);
	virtual ~employee();
	char *getName()const;
	char *getID()const;
	virtual float getslary()const;
	virtual void print()const;

};
class manager :public employee
{
public:
	manager(const char *, const char *, float = 0.0);
	void setSalary(float);
	virtual float getslary()const;
	virtual void print()const;
private:
	float weeklysalary;

};
class salesman :public employee
{
public:
	salesman(const char*, const char*, float = 0.0, float = 0.0, unsigned = 0);
	void setsalary(float);
	virtual float getsalary()const;
	virtual void print()const;
private:
	float basesalary;
	float comission;
	unsigned quality;

};
