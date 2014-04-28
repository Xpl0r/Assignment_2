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
	Array(const int upper, const int lower = 0);
	Array(const Array &rhs);	// copy constructor

	~Array();

	void set(const int index, const ELEMENT_TYPE val);
	ELEMENT_TYPE get(const int index) const;
	int lowerBound() const;
	int upperBound() const;
	int numElements() const;
	int size() const;

private:
	ELEMENT_TYPE *m_Array;
	int m_size;
	int m_lower;
};

class SafeArray : public Array
{
public:
	SafeArray(const int upper, const int lower);

	void set(const int index, const ELEMENT_TYPE val);
	ELEMENT_TYPE get(int index) const;

private:
	void boundChecker(const int index) const;
};