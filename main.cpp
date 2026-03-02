#include <iostream>

int foo()
{
#define MY_NAME "Alex"
	std::cout << 2+7 << endl;
	return 0;
}

int main()
{
	foo();
	std::cout << "My name is: " << MY_NAME << '\n';

	return 0;
}
