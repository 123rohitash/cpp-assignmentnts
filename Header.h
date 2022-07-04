#pragma once
class Cinteger {
	int* arr;
	
public: Cinteger();
	  Cinteger( int);
	  Cinteger(int*,int);
	  Cinteger( const Cinteger&);
	  Cinteger& operator =(const Cinteger&);
	  Cinteger operator +(const Cinteger&);
	  Cinteger& operator +=(const int);
	  Cinteger& operator++();
	 // Cinteger operator++(int);
	  void display();
	  ~Cinteger();
};