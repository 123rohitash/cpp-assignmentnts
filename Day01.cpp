#include <iostream>			
using namespace std;		

//				
//int fact(int n) {
//	int sum = 1;
//	for (int i = n; i > 0; i--) {
//		sum *= i;
//	}
//	return sum;
//}
//void swapByValue(int a, int b) {
//	int c = a;
//	a = b;
//	b = c;
//}
//void swapByAddress(int *a, int *b) {
//	int c = *a;
//	*a = *b;
//	*b = c;
//}
//void swapByReference(int& a, int& b) {
//	int c = a;
//	a = b;
//	b = c;
//}

class Pointcloud {
	point* a;
public:
	Pointcloud(int *a1) {
		a = new point[3];
		for (int i = 0; i < 3; ++i) {
			a[i] = (a1[i]);
		}

	}
	};
	struct point {
		int x = 10;
		int y = 20;
		int z = 30;
		point() {
			x = 20;
			y = 30;
			z = 50;
		}
		point(int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}
		void display() {
			cout << x << " " << y << " " << z << endl;
		}
		~point() {
			cout << "destructor called" << endl;
		}
		
	};
	a* a1 = new a[3];
	Employee() {
		for (int i = 0; i < 3; i++) {
			a1[i] = i;
		}
	}
	void display() {
		for (int i = 0; i < 3; i++) {
			std::cout << a1[i] << endl;
		}
	}

class point {
	int x;
	int y;
public:
	point() {
		x = 10;
		y = 20;
	}
	point(int a, int b) {
	x = a;
	y = b;
}
	  void display() {
		  cout << x << " " << y << endl;
	  }
	  static void distance(int x, int y);
};
class line {
public:
	point p1;
	point p2;
 line(int x, int y, int x1, int y1) {
	this->p1 = point(x, y);
	this->p2 =point(x1, y1);
}
	  void display() {

		//  cout << p1<<" "<<p2;
	  }
};
//void point ::  distance(int x, int y) {
//	cout<<"distance is " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0) << endl;
//}
int main() {
	line e1(1,2,3,4);
	e1.p1.display();
	//e1.p1.distance(6,5);
	//day02
	 /*a s1;
	s1.display();
	 a s2(1, 2, 3);
	s2.display();*/















	//cout << "signed char range is " << (1 << ((sizeof(char) * 8))) << "to" << ~(1 << ((sizeof(char) * 8) - 1)) << endl;
	
	
	
	//day01
	// 9.queation
	//int* z = new int(1);



	// 8.question
	/*int a = 3;
	int b = 2;
	swapByValue(a, b);
	cout << a<<" " << b << endl;
	swapByAddress(&a, &b);
	cout << a << " " << b << endl;
	 a = 3;
	 b = 2;
	swapByReference(a, b);
	cout << a << " " << b << endl;*/
	
	//7.question
	/*int n;
	cout << "enter a number " << endl;
	cin >> n;
	int x=fact(n);
	cout << "fact is " << x;*/
	// 6.question 
	/*for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			cout << i<<" ";
		}

	}*/






	//5.question
	/*int k = 0;
	for (int i = 1; i <= 5; ++i, k = 0) {
		for (int j = 1; j <= 5 - i; ++j) {
			printf("  ");
		}
		while (k != 2 * i - 1) {
			cout<<("* ");
			++k;
		}
		cout << endl;
	}
	for (int i = 5; i > 0; --i, k = 0) {
		for (int j = 1; j <= 5 - i; ++j) {
			printf("  ");
		}
		while (k != 2 * i - 1) {
			cout << ("* ");
			++k;
		}
		cout << endl;
	}*/



	//4.question
	/*int i = 1;
		while(i <= 10) {
			cout << 19 << "*" << i << "=" << 19 * i << endl;
			i++;
		}*/

	//3.third question 
	
	/*for (int i = 1; i <= 10; i++) {
		cout<<19<<"*"<<i <<"=" << 19 * i << endl;
	}*/


	//2.second question
	/*int arr[] = { 10,20,30,40 };
	for (int i = 0; i <( sizeof(arr) / sizeof(arr[0])); i++) {
		cout<<i <<" element is " << arr[i] << endl;
	}*/





	//1.first question
	/*cout << "signed char: the range is from " << (1 << ((sizeof(char) * 8))) << " to " << ~(1 << ((sizeof(char) * 8) - 1));
	cout << endl;
	cout << "unsigned char: the range is from " << 0 << " to " << ~((1 << ((sizeof(char) * 8) - 1)) + (1 << (sizeof(char) * 8)));
	cout << endl;
	cout << "signed int: the range is from " << (1ULL << ((unsigned long long)(sizeof(int) * 8))) << " to " << ~(1ULL << ((unsigned long long)(sizeof(int) * 8) - 1ULL));
	cout << endl;
	cout << "unsigned int: the range is from " << 0 << " to " << ~((1ULL << ((unsigned long long)(sizeof(int) * 8) - 1ULL)) + (1ULL << (unsigned long long)(sizeof(int) * 8)));
	cout << endl;
	cout << "signed float: the range is from " << (1ULL << ((unsigned long long)(sizeof(float) * 8))) << " to " << ~(1ULL << ((unsigned long long)(sizeof(float) * 8) - 1ULL));
	cout << endl;
	cout << "unsigned float: the range is from " << 0 << " to " << ~((1ULL << ((unsigned long long)(sizeof(float) * 8) - 1ULL)) + (1ULL << (unsigned long long)(sizeof(float) * 8)));
	cout << endl;*/
	return 0;
}
