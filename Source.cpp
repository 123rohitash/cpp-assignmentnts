#include "Header.h";
using namespace std;
#include<iostream>
#include<memory>

Cinteger::Cinteger() {
	cout << "in default constructor" << endl;
	
		this->arr = new int(55);
	
}
Cinteger::Cinteger( int arr1) {
	cout << "in parameterized constructor" << endl;
	
	//cout << length << endl;
	cout << arr1 << endl;
	this->arr = new int(arr1);
}

Cinteger::Cinteger(int* a,int b)
{
	
		arr = new int[b];
	
	for (int i = 0; i < b; i++) {
		arr[i] =(a[i]);
}
	for (int i = 0; i < b; ++i) {
		cout << arr[i]<<endl;
	}
}


void Cinteger::display() {
	cout  << " " << *arr<<endl
		;
}
Cinteger::Cinteger(const Cinteger& i) {
	cout << "assignment operator called" << endl;
	
	this->arr = new int((*i.arr));
}
Cinteger& Cinteger::operator=(const Cinteger& i)
{
	
	if (arr) {
		delete[] arr;
	}
	this->arr = new int(*(i.arr));
	
	return *this;
}
Cinteger Cinteger::operator+(const Cinteger& i)
{
	cout << "+ operator called" << endl;
	
	Cinteger temp(*(this->arr) + *(i.arr));
	return temp;
}
Cinteger& Cinteger::operator+=(const int s)
{
	cout << "in += operator" << endl;
	//Cinteger temp(*(this->arr) + *(s));
	int x = *(this->arr);
	delete[] arr;
	
	this->arr = new int(x + s);
	return *this;
}
Cinteger& Cinteger::operator++()
{
	cout << "pre increment called" << endl;
	++(*arr);
	return *this;
}
Cinteger::~Cinteger()
{
	delete[] arr;
	arr = nullptr;
}
