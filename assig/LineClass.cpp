//#include<iostream>
//class point {
//
//public:
//	point()
//	{
//		std::cout << "Point :: parameterless Constructor" << std::endl;
//	}
//	~point()
//	{
//		std::cout << "Point :: Destructor Called" << std::endl;
//	}
//};
//
//class Line {
//	point p1, p2;
//	//composition 
//public:
//	Line()
//	{
//		std::cout << "Line :: parameterless Constructor" << std::endl;
//	}
//	~Line()
//	{
//		std::cout << "Line :: Destructor Called" << std::endl;
//	}
//};
//
//int main()
//{
//	Line* ptr1 = new Line();
//	delete ptr1;
//	ptr1 = nullptr;
//	std::cout<<"Memory Leaks : " << _CrtDumpMemoryLeaks() << std::endl;
//
//}