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
Array::Array(const int upper, const int lower) : m_lower(lower), m_size(upper - lower + 1)
{
	if (lower > upper)
	{
		cout << "Lower bound must be less than or equal to upper bound.\n" ;
		exit(EXIT_FAILURE);
	}
	
	// dynamically set upper and lower bound
	m_Array = new ELEMENT_TYPE[m_size];

	if (!m_Array)
	{
		cout << "Memory allocation failed\n";
		exit(EXIT_FAILURE);
	}

	// clear elements in array
	for (int i = 0; i < m_size; i++)
	{
		m_Array[i] = NULL;
	}
}

// copy constructor
Array::Array(const Array &rhs) : m_lower(rhs.m_lower), m_size(rhs.m_size)
{
	// setting member variables
	m_Array = new ELEMENT_TYPE[rhs.m_size];

	if (!m_Array)
	{
		cout << "Memory allocation failed\n";
		exit(EXIT_FAILURE);
	}

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
Array::ELEMENT_TYPE Array::get(int index) const
{
	return m_Array[index - m_lower];
}

// return lower bound
int Array::lowerBound() const
{
	return m_lower;
}

// return upper bound
int Array::upperBound() const
{
	return m_size + m_lower - 1;
}

// return size of array
int Array::numElements() const
{
	return m_size;
}

// returns size of Array in bytes
int Array::size() const
{
	return sizeof(ELEMENT_TYPE) * m_size;
}

// SafeArray constructor
SafeArray::SafeArray(const int upper, const int lower):
Array(upper, lower)
{
}

// SafeArray set element value
void SafeArray::set(const int index, const ELEMENT_TYPE val)
{
	boundChecker(index);
	Array::set(index, val);
}

// SafeArray get element value
Array::ELEMENT_TYPE SafeArray::get(const int index) const
{
	boundChecker(index);
	return Array::get(index);
}

// checks if index is in bounds
void SafeArray::boundChecker(const int index) const
{
	if (index < lowerBound() || index > numElements())
	{
		cout << "Error: Index not within bounds.\n";
		exit(EXIT_FAILURE);
	}
}