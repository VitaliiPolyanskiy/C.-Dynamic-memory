// функция инициализации массива
void Init(int ptr[], int size);

// функция печати массива
void Print(int * ptr, int size);

// функция создания динамического массива
int* Allocate(int size);

// функция удаления динамического массива
void Free(int *ptr);

// функция добавления элемента в конец массива
int* Add(int *ptr, int *size, int value);

// функция вставки элемента по указанному индексу 
int* InsertByIndex(int *ptr, int *size, int value, int index);

// функция удаления элемента по указанному индексу
int* RemoveByIndex(int *ptr, int *size, int index);