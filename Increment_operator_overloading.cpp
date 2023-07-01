
#include <iostream>

class A
{
private:
	int a;
public:
	A():a(0)
	{
		std::cout << __func__ << std::endl;
	}

	A(int n):a(n)
	{
		std::cout << __func__ << std::endl;
	}

	~A()
	{
		std::cout << __func__ << std::endl;
	}
	
	int operator++(int)			
	{
		int tmp;
		a = a++;
		tmp = a;
		tmp = tmp++;
		std::cout << "a++ " << tmp << std::endl;

		return tmp;
	}


	int& operator++()
	{
		a++;
		std::cout << "++a " << a << std::endl;

		return a;
	}
};


int main()
{
	A ob(3);
	A ob1(3);

	++ob;
	ob1++;

	return 0;
}
