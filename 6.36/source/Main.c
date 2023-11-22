#include <stdio.h>

int binarySearch(const int array[], int start, int end, int key);
void displayResult(int result, int key);

int main() {
	const int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int searchKey, result;

	printf("��J���j�M�������ȡG");
	scanf("%d", &searchKey);

	result = binarySearch(array, 0, sizeof(array) / sizeof(array[0]) - 1, searchKey);

	displayResult(result, searchKey);

	return 0;
}

int binarySearch(const int array[], int start, int end, int key) {
	if (start <= end) {
		int mid = start + (end - start) / 2;

		if (array[mid] == key)
			return mid;

		if (array[mid] > key)
			return binarySearch(array, start, mid - 1, key);

		return binarySearch(array, mid + 1, end, key);
	}


	return -1;
}


void displayResult(int result, int key) {
	if (result != -1)
		printf("��� %d �b���� %d ���C\n", key, result);
	else
		printf("��� %d ���b�}�C�����C\n", key);
}
