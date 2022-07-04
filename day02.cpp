class Pointcloud {
	point* a;
public:
	Pointcloud(int* a1) {
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
		this->p2 = point(x1, y1);
	}
	void display() {

		//  cout << p1<<" "<<p2;
	}
};
//void point ::  distance(int x, int y) {
//	cout<<"distance is " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0) << endl;
//}
int main() {
	line e1(1, 2, 3, 4);
	e1.p1.display();
	//e1.p1.distance(6,5);
	//day02
	 /*a s1;
	s1.display();
	 a s2(1, 2, 3);
	s2.display();*/


}