#include <iostream>
#include <vector>

void Sort(std::vector <int>& arr) {
	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i] > arr[j])
				std::swap(arr[i], arr[j]);
		}
	}
}

int solution(std::vector <int>& vec) {
	Sort(vec);
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] + 1 != vec[i + 1])
			return vec[i] + 1;
	}
}

int main() {
	std::vector<int> vec{ 2, 5, 1, 3, 6, 7, 8, 9, 10, 11 };
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << "\nNumber: " << solution(vec) << "\n";

	return 0;
}

/*
Дано масив A, що складається з N різних цілих чисел. Масив містить різні цілі числа в
діапазоні [1 .. (N + 1)], що означає, що відсутній рівно один елемент. Ваша мета -
знайти цей відсутній елемент.
Напишіть функцію використовуючи ітератори:
int рішення(vector <int> & A);
що, отримуючи масив A, повертає значення відсутнього елемента.
Наприклад, заданий масив A такий, що:
A [0] = 2
A [1] = 3
A [2] = 1
A [3] = 5
функція має повернути 4, оскільки це відсутній елемент. Напишіть ефективний
алгоритм для таких припущень:
N - ціле число в межах [0..100 000];
всі елементи вектора A різні;
кожен елемент є цілим числом у межах [1 .. (N + 1)].
Сигнатура функції має мати саме такий вигляд як показано у завданні.
*/
