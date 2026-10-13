#include <iostream>
#include "Seminar2.h"

void passByValue(int x) 
{
	x = 20; // This change will not affect the original variable passed to the function
}

void passByRef(int& x) 
{
	x = 20; // This change will affect the original variable passed to the function
}

void passByRef(int* p)
{
	*p = 30; // This change will affect the original variable pointed to by p
}


void passByRef() 
{
	int a = 7;
	passByValue(a);
	std::cout << "Value of a after passByValue: " << a << std::endl;

	passByRef(a);
	std::cout << "Value of a after passByRef: " << a << std::endl;

	passByRef(&a);
	std::cout << "Value of a after passByRef: " << a << std::endl;
}

class shape
{
public:
	int x;

protected:
	int y;

private:
	int z;

public: //constructor
	//shape() : x(0), y(0), z(0) {} //initialization by initialization list to set default values for x, y, and z
	shape()
	{
		x = 0;
		y = 0;
		z = 0;
	} //initialization in the constructor body to set default values for x, y, and z

	shape(int a, int b, int c) {
		x = a;
		y = b;
		z = c;
	}

	~shape()
	{
	}
};

//test program

void testShape()
{
	shape s;
	//s.x = 3;
	//s.y = 4; //initialization of values
	//s.z = 5;
	shape s1(3, 4, 5);
}


class base
{
public:
	int a = 1;
protected:
	int b = 2;
private:
	int c = 3;
};

class derivePub1 : public base
{
public:
	void foo()
	{
		std::cout << "derivePub1::foo() a: " << a << " b: " << b << " c: " /*<< c*/ << std::endl;
	}

};

class derivePro1 : protected base
{
public:
	void foo()
	{
		std::cout << "derivePub1::foo() a: " << a << " b: " << b << " c: " /*<< c*/ << std::endl;
	}
};

class derivePri1 : private base
{
public:
	void foo()
	{
		std::cout << "derivePub1::foo() a: " << a << " b: " << b << " c: " /*<< c*/ << std::endl;
	}
};


//Visibility only reduces, it never increases

//multiple inheritance

class base1
{
public:
	int d = 6;
protected:
	int e = 7;
private:
	int f = 8;
};


class multi : public base, public base1
{
public:
	void bar()
	{
		std::cout << "multi::bar() a: " << a << " b: " << b << " c: " /*<< c*/ << std::endl;
		std::cout << "multi::bar() d: " << d << " e: " << e << " f: " /*<< f*/ << std::endl;
	}
};


void testClasses()
{
	base baseObj;
	std::cout << "baseObj a: " << baseObj.a << " b: " /*<< baseObj.b*/ << " c: " /*<< baseObj.c*/ << std::endl;

	derivePub1 drive1;
	std::cout << "drive1 a: " << drive1.a << " b: " /*<< drive1.b*/ << " c: " /*<< drive1.c*/ << std::endl;

	derivePro1 drive2;
	std::cout << "drive2 a: " /*<< drive2.a*/ << " b: " /*<< drive2.b*/ << " c: " /*<< drive2.c*/ << std::endl;

	derivePri1 drive3;
	std::cout << "drive3 a: " /*<< drive3.a*/ << " b: " /*<< drive3.b*/ << " c: " /*<< drive3.c*/ << std::endl;

	multi multiObj1;
	multiObj1.bar();
}
