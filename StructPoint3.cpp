#include<iostream>

struct point3
{
	//struct data members
	int x, y, z;

	//parameterless constructor
	point3()
	{
		std::cout<<"point3 :: parameterless constructor"<<std::endl;
		x = 1;
		y = 1;
		z = 1;
	}
	//parameterized constructor
	point3(int xx, int yy, int zz):x(xx),y(yy),z(zz) { std::cout << "parameterized constructor" << std::endl; }

	~point3()
	{
		std::cout << "point3 :: Destructor Called :>>" << std::endl;
	}
	
};

//int main()
//{
//	struct point3 obj1; //object on stack
//	struct point3 obj2; //object on stack
//
//	point3* obj3 = new point3;  //object on heap
//	point3* ptr1 = (point3*)malloc(sizeof(obj1)); //object on heap 
//
//
//
//	ptr1->x= 1000;
//
//	std::cout << "Accessing Data member using objects of struct -" << std::endl;
//	std::cout << obj1.x << std::endl;
//	std::cout << obj2.x << std::endl;
//	std::cout << obj3->x << std::endl;
//	std::cout << ptr1->x << std::endl;
//	delete obj3;
//	obj3 = nullptr;
//
//	free(ptr1);
//	ptr1 = nullptr;
//	// When you call free() for an object allocated with new , 
//	// its destructor is not called,
//
//	std::cout << "Leaks : " << _CrtDumpMemoryLeaks() << std::endl;
//	//malloc doesnt call constructor 
//	
//}