#include <stdio.h>

int binarySearch(const int array[], int start, int end, int key);
void displayResult(int result, int key);

int main() {
	const int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int searchKey, result;

	printf("輸入欲搜尋的整數鍵值：");
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
		printf("鍵值 %d 在索引 %d 找到。\n", key, result);
	else
		printf("鍵值 %d 未在陣列中找到。\n", key);
}
