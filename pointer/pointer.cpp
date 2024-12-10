#include <iostream>
#include <ctime>
#include "function.h"
using namespace std;

int main()
{
	srand(time(0));
	int *ptr = nullptr;
	int size, value, index;
	cout << "Enter a quantity of elements: ";
	cin >> size;
	ptr = Allocate(size);
	Init(ptr, size);
	Print(ptr, size);
	cout << "\nEnter a value to add: ";
	cin >> value;
	ptr = Add(ptr, &size, value);
	Print(ptr, size);
	cout << "\nEnter an index to insert: ";
	cin >> index;
	ptr = InsertByIndex(ptr, &size, value, index);
	Print(ptr, size);
	cout << "\nEnter an index to remove: ";
	cin >> index;
	ptr = RemoveByIndex(ptr, &size, index);
	Print(ptr, size);
	Free(ptr);
	ptr = nullptr;

	return 0;
}