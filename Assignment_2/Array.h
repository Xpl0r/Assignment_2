//
// Assignment  :  #2
// Class       :  CST 136
//
// Author      :  <Andrew Scott>
//
// File        :  Array.h
//
//
// Description :  Member definitions for the Array class and SafeArray class.
//
#include <iostream>

using std::cout;

class Array
{
protected:
	typedef int ELEMENT_TYPE;

public:
	//constructors
	Array(int upper, int lower = 0);
	Array(const Array &rhs);	// copy constructor

	~Array();

	void set(int index, ELEMENT_TYPE val);
	ELEMENT_TYPE get(int index);
	int lowerBound();
	int upperBound();
	int numElements();
	int size();

private:
	ELEMENT_TYPE *m_Array;
	int m_size;
	int m_lower;
};

class SafeArray : public Array
{
public:
	SafeArray(int upper, int lower);

	void set();
	void get();
};