#include<iostream>
#include "StructPoint3.cpp"

class PointCloud {

	point3* arr;
public:
	void acceptPoint3();

	PointCloud()
	{
		arr = new point3[3];
		std::cout << " PointCloud :: constructor called" << std::endl;
	}
	~PointCloud()
	{
		delete[] arr;
		arr = nullptr;
		std::cout << "PointCloud :: Destructor called " << std::endl;
	}
	point3 returnPoint3ByIndex(int index)const;
};

point3 PointCloud:: returnPoint3ByIndex(int index)const
{
	return arr[index];
}

void PointCloud::acceptPoint3()
{
	arr[1].x = 500;
}
int main()
{
	PointCloud* p = new PointCloud();
	p->acceptPoint3();  
	std::cout <<"value of arr[1].x " << p->returnPoint3ByIndex(1).x;
	/*it will print 500 that we have set using acceptPoint3()
	 so returnPointByIndex( ) is properly working !! */

	// p->returnPoint3ByIndex(1).x = 10; 
	
	/*uncoment above line,it will show expression must be a modifieble L value
	bcz we are returning Constant object which is immutable!! */
	delete p;
	p = nullptr;
	std::cout <<"Leaks : " << _CrtDumpMemoryLeaks() << std::endl;
	
}