#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}


template <typename T>
void clear_arr(T arr[], const int length, int key) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			arr[i] = 0;
}


template <typename T>
int index_sum(T arr1, const int length, T arr2, const int length2, int index) {
	if (index > length - 1 || index > length2 - 1) 
		return std::cout << "ERROR ", -0;
	
	// TODO: доп. задание
	
	return arr1[index] + arr2[index];
	
}


void prime_range(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		int counter{};
		for (int j = 1; j <= num2; j++) {
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			std::cout << i << ' ';
	}
	std::cout << std::endl;
}

void prime_range(int num1) {
	for (int i = 3; i <= num1; i++) {
		int counter{};
		for (int j = 1; j <= num1; j++) {
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			std::cout << i << ' ';
	}
	std::cout << std::endl;
}

template <typename T>
int compare_pare(T arr, const int lenght, int num1, int num2) {
	for (int i = 0; i < lenght - 1; i++)
		if (arr[i] == num1 && arr[i + 1] == num2)
			return i;
	return -1;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;


	// Задача 1.
	/*std::cout << "Задача 1\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, 10, 21);
	print_arr(arr1, size1);
	std::cout << "Введите число -> ";
	std::cin >> n;
	clear_arr(arr1, size1, n);
	std::cout << "Итоговый массив:\n";
	print_arr(arr1, size1);
	std::cout << std::endl;
	*/


	// Задача 2.
	std::cout << "Задача 2\n";
	const int size2_1 = 5;
	int arr2[size2_1]; // TODO: fill_arr
	fill_arr(arr2, size2_1,10,30);
	const int size2_2 = 7;
	int arr3[size2_2]; // TODO: fill_arr
	fill_arr(arr3, size2_2, 4, 27);
	std::cout << "Первый массив:\n";
	print_arr(arr2, size2_1);
	std::cout << "Второй массив:\n";
	print_arr(arr3, size2_2);
	std::cout << "Введите индекс массива -> ";
	std::cin >> m;
	
	std::cout << "Сумма чисел: " << index_sum(arr2, size2_1, arr3, size2_2, m) << "\n\n";


	// задача 3.
	std::cout << "Задача 3\nВведите начало и конец диапазона -> ";
	std::cin >> n >> m;
	prime_range(n, m);
	std::cout << "Введите конец диапазона (начало - 1) -> ";
	std::cin >> n;
	prime_range(n);
	std::cout << std::endl;


	//Задача 4.
	std::cout << "\nЗадача 4\n";
	const int size4 = 10;
	int arr4[size4]; // TODO: fill_arr
	fill_arr(arr4, size4, 1, 50);
	int num1, num2;
	std::cout << "Массив:\n";
	print_arr(arr4, size4);
	std::cout << "Введите первое число -> ";
	std::cin >> num1;
	std::cout << "Введите второе число -> ";
	std::cin >> num2;
	
	std::cout << compare_pare(arr4, size4, num1, num2);


	return 0;
}