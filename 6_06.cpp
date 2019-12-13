#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Array1D
{
	int len;
	char *str;
public:
	Array1D(char *s);
	char& operator[](int n);
	void disp();
};
Array1D::Array1D(char *s)
{
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	len = strlen(s);
}
char &Array1D::operator[](int n)
{
	if (n < 0 || n>len - 1)
	{
		cout << "数组下标越界" << endl;
		exit(1);
	}
	else return *(str + n);
}
void Array1D::disp()
{
	cout << str << endl;
}
int main()
{
	Array1D word((char *)"This is C++ book!");
	cout << "word is:";
	word.disp();
	cout << "word[0] is:" << word[0] << endl;
	word[8] = 'a';
	cout << "after change word[8] is:";
	 word.disp();
	cout << "word[12] is:" << word[12] << endl;
	cout << "word[25]is:" << word[25] << endl;
	getchar();
	system("pause");
	system("pause");

	return 0;

}