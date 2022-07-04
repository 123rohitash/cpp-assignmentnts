//#include<iostream>
//#pragma once
//class point {
//	int pointx;
//public:
//	point(int pointx);
//	int getPointx();
//	
//};
//
//point::point(int pointx)
//{
//	this->pointx = pointx;	
//}
//int point::getPointx()
//{
//	return pointx;
//}
//class utility {
//public :
//	static int calculateDistance(point *p1,point *p2);
//};
//
//int utility::calculateDistance(point *p1, point *p2)
//{
//	if (p1->getPointx() > p2->getPointx())
//	{
//		return p1->getPointx() - p2->getPointx();
//	}
//	else
//	{
//		return p2->getPointx() - p1->getPointx();
//	}
//}
//
//int main()
//{
//	point p1(10);
//	point p2(5);
//	int distance=utility::calculateDistance(&p1, &p2);
//	std::cout << "The distance between : p1 & p2 is :-> " << distance << std::endl;
//}