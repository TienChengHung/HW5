#include <stdio.h>

int recursiveMax(int array[], int size);

int main() 
{
	int myArray[] = { 3, 7, 1, 9, 4, 6, 8, 2, 5 };
	int size = sizeof(myArray) / sizeof(myArray[0]);

	int max = recursiveMax(myArray, size);

	printf("�}�C�����̤j�Ȭ��G%d\n", max);

	system("pause");
	return 0;
}

int recursiveMax(int array[], int size) {
	if (size == 1)
	{
		return array[0];
	}
	else 
	{
		int maxInRest = recursiveMax(array + 1, size - 1);

		return (array[0] > maxInRest) ? array[0] : maxInRest;
	}
}
