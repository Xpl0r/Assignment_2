#include "Array.h"
#define ELEMENT = 5

int main()
{
	Array testArray(5, 2);
	Array copiedArray(testArray);

	copiedArray.set(2, 27);
	cout << copiedArray.get(2);

	cout << "dustin like cms";

	std::cin.ignore();
	return 0;
}