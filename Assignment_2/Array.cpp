//
// Assignment  :  #2
// Class       :  CST 136
//
// Author      :  <Andrew Scott>
//
// File        :  Array.cpp
//
//
// Description :  Member declarations for the Array class and SafeArray class.
//

#include "Array.h"


// constructor
Array::Array(int upper, int lower)
{
	if (lower >= upper)
	{
		cout << "Lower bound must be less than or equal to upper bound.\n" ;
		exit(EXIT_FAILURE);
	}
	m_lower = lower;
	
	// dynamically set upper and lower bound
	m_size = upper - lower + 1;
	m_Array = new ELEMENT_TYPE[m_size];

	if (!m_Array)
	{
		cout << "Memory allocation failed\n";
	}

	// clear elements in array
	for (int i = 0; i < m_size; i++)
	{
		m_Array[i] = NULL;
	}
}

// copy constructor
Array::Array(const Array &rhs)
{
	// setting member variables
	m_Array = new ELEMENT_TYPE[rhs.m_size];

	if (!m_Array)
	{
		cout << "Memory allocation failed\n";
	}

	m_lower = rhs.m_lower;
	m_size = rhs.m_size;

	for (int i = 0; i < m_size; i++)
	{
		m_Array[i] = rhs.m_Array[i];
	}

}

// destructor
Array::~Array()
{
	delete[] m_Array;
}

// sets val to specified element in Array
void Array::set(int index, ELEMENT_TYPE val)
{
	m_Array[index - m_lower] = val;
}

// returns elements value
Array::ELEMENT_TYPE Array::get(int index)
{
	return m_Array[index - m_lower];
}

// return lower bound
int Array::lowerBound()
{
	return m_lower;
}

// return upper bound
int Array::upperBound()
{
	return m_size + m_lower - 1;
}

// return size of array
int Array::numElements()
{
	return m_size;
}

// returns size of Array in bytes
int Array::size()
{
	return sizeof(ELEMENT_TYPE) * m_size;
}

SafeArray::SafeArray(int upper, int lower):
Array(upper, lower)
{
	if ()
	{

	}
}

void SafeArray::set()
{
	
}

void SafeArray::get()
{
	
}