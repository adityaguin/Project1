
#include "pch.h"
#include <iostream>
#include "name.h"

using namespace secondspace;

struct test
{
	float ssn;
	int id;
};

class testClass
{
public:
	int id;
};


void f1(int a)
{
	a += 10;
	return;
}

void f2(int *p)
{
	*p +=30;
	return;
}

int main()
{
#if 0
	int b = 10;
	cout << "before "<<  b << endl;
	f1(b);
	cout << "after " << b << endl;
	f2(&b);
	cout << "after F2 " << b << endl;
#endif

	struct test a;
	a.ssn = 10.5;
	a.id = 100;

	struct test *ptr;
	//ptr = &a;

	ptr = (struct test *)malloc(sizeof(struct test));
	ptr->id = 200;
	ptr->ssn = 200.5;
	free(ptr);
	


	cout << a.ssn << endl;
	cout << a.id << endl;


	int i;
	i = 10;
    cout << "Hello World!\n"; 
	//firstspace::func();
	//secondspace::func();

	func();



	return 0;
}


