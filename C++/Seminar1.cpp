#include <iostream>
#include "Seminar1.h"

void Types(void) //definition of the function Types declared in Seminar1.h
{
	int a = 5; // Declare an integer variable 'a' and initialize it with the value 5
	char c = 'A'; // Declare a character variable 'c' and initialize it with the value 'A'
	float f = 3.14f; // Declare a floating-point variable 'f' and initialize it with the value 3.14
	double d = 2.71828; // Declare a double-precision floating-point variable 'd' and initialize it with the value 2.71828
	bool b = true; // Declare a boolean variable 'b' and initialize it with the value true
	long l = 1234567890; // Declare a long integer variable 'l' and initialize it with the value 1234567890
	short s = 32767; // Declare a short integer variable 's' and initialize it with the value 32767
	long long ll = 1234567890123456789; // Declare a long long integer variable 'll' and initialize it with the value 1234567890123456789
	unsigned int ui = 4294967295; // Declare an unsigned integer variable 'ui' and initialize it with the value 4294967295
	unsigned long ul = 4294967295; // Declare an unsigned long integer variable 'ul' and initialize it with the value 4294967295
	unsigned long long ull = 18446744073709551615U; // Declare an unsigned long long integer variable 'ull' and initialize it with the value 18446744073709551615
	signed int si = -2147483648; // Declare a signed integer variable 'si' and initialize it with the value -2147483648
	signed char sc = 'B'; // Declare a signed character variable 'sc' and initialize it with the value 'B'
	int isc = sc;

	std::cout << sc << " " << isc << std::endl; // Output the value of 'sc' followed by a newline

	int arr[5] = { 1, 2, 3, 4, 5 }; // Declare an array of integers 'arr' with 5 elements and initialize it with the values 1, 2, 3, 4, and 5
	char name[10] = "Anirudh"; // Declare an array of characters 'name' with 10 elements and initialize it with the string "Alice"
	char name1[10] = { 'A', 'n', 'i', 'r', 'u', 'd', 'h' }; // Declare another array of characters 'name1' with 10 elements and initialize it with the string "Alice"

	std::cout << name << "\n" << name1 << std::endl; // Output the value of 'name' followed by a newline

	//escape sequence \n is used to print a new line

	std::cout << "Hello World! \"How are you\"  \n"; //" is string delimiter, \n is the escape sequence for new line character

	std::cout << "\\n is the new line character";

	std::cout << "Size of int: " << sizeof(a) << std::endl;
	std::cout << "Size of char: " << sizeof(c) << std::endl;
	std::cout << "Size of float: " << sizeof(f) << std::endl;
	std::cout << "Size of double: " << sizeof(d) << std::endl;
	std::cout << "Size of bool: " << sizeof(b) << std::endl;
	std::cout << "Size of long: " << sizeof(l) << std::endl;
	std::cout << "Size of short: " << sizeof(s) << std::endl;
	std::cout << "Size of long long: " << sizeof(ll) << std::endl;
	std::cout << "Size of unsigned int: " << sizeof(ui) << std::endl;
	std::cout << "Size of unsigned long: " << sizeof(ul) << std::endl;
	std::cout << "Size of unsigned long long: " << sizeof(ull) << std::endl;
	std::cout << "Size of signed int: " << sizeof(si) << std::endl;
	std::cout << "Size of signed char: " << sizeof(sc) << std::endl;
	std::cout << "Size of arr: " << sizeof(arr) << std::endl;
	std::cout << "Size of name: " << sizeof(name) << std::endl;
	std::cout << "Size of name1: " << sizeof(name1) << std::endl;
}
