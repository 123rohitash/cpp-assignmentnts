#include<iostream>

class chair {

public:
	chair()
	{
		std::cout << "Chair Constructor" << std::endl;
	}
	~chair()
	{
		std::cout << "Chair Destructor" << std::endl;
	}
};
class room {
	chair* ptr;
public:

	room()
	{
		std::cout << "Room constructor" << std::endl;
		ptr = new chair();
	}
	~room()
	{

		std::cout << "Room constructor" << std::endl;
		delete ptr;
		ptr = nullptr;
	}
};
int main()
{
	room* r1 = new room();
	room* r2 = new room();
	room* r3 = new room();
}