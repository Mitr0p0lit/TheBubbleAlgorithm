#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillingArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		array[i] = rand() % (100 - 0 + 1) + 0; // генерация от 0 до 100
	}
}
void arrayOutput(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "[" << i << "] = " << array[i] << endl;
	}
}
void algorithm(int array[], int size) {
	for (int i = 0; i <= 1; i++) {
		for (int i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				i = 0;
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));

	const int size = 10;
	int array[size], x;

	cout << "Несортированный массив: " << endl;
	fillingArray(array, size);
	arrayOutput(array, size);

	cout << "Сортированный массив: " << endl;
	algorithm(array, size);
	arrayOutput(array, size);

	return 0;
}