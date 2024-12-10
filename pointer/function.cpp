#include <iostream>
using namespace std;

// функция инициализации массива
void Init(int ptr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		*ptr = rand() % 100;
		ptr++;
	}
}

// функция печати массива
void Print(int * ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << '\t';
	}
	cout << endl;
}

// функция создания динамического массива
int* Allocate(int size)
{
	return new int[size];
}

// функция удаления динамического массива
void Free(int *ptr)
{
	delete[] ptr;
}

// функция добавления элемента в конец массива
int* Add(int *ptr, int *size, int value)
{
	int *p = new int[++*size];
	for (int i = 0; i < *size - 1; i++)
		p[i] = ptr[i];
	p[*size - 1] = value;
	delete[]ptr;
	return p;
}

// функция вставки элемента по указанному индексу 
int* InsertByIndex(int *ptr, int *size, int value, int index)
{
	if (index < 0 || index > *size - 1)
		return ptr;
	int *p = new int[++*size];
	int k = 0;
	for (int i = 0; i < *size; i++)
	{
		if (index == i)
		{
			k = 1;
			p[i] = value;
		}
		else
			p[i] = ptr[i - k];
	}
	delete[]ptr;
	return p;
}

// функция удаления элемента по указанному индексу
int* RemoveByIndex(int *ptr, int *size, int index)
{
	if (index < 0 || index > *size - 1)
		return ptr;
	int *p = new int[--*size];
	int k = 0;
	for (int i = 0; i < *size; i++)
	{
		if (index == i)
			k = 1;
		p[i] = ptr[i + k];
	}
	delete[]ptr;
	return p;
}