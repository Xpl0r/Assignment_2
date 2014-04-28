#include "Array.h"
#define ELEMENT = 5

int main()
{
	Array DustinArray(5, 2);

	cout << "Lower: " << DustinArray.lowerBound() << "\n"
		<< "Upper: " << DustinArray.upperBound() << "\n"
		<< "numElements: " << DustinArray.numElements() << "\n";

	DustinArray.set(5, 27);

	cout << "get value of element : " << DustinArray.get(5) << "\n";

	cout << "size in bytes: " << DustinArray.size();


	std::cin.ignore();
	return 0;
}