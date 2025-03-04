#include "Program.h"
void Task1() {
	cout << "Task1\n";
	int number = 1234;
	cout << number << endl;
	int sum = number % 10 + number % 100 / 10 + number % 1000 / 100 + number / 1000;
	cout << "Sum is " << sum << endl;
	int product = (number % 10) * (number % 100 / 10) * (number % 1000 / 100) * (number / 1000);
	cout << "Product is " << product << endl;
}

void Task2() {
	cout << "Task2\n";
	int number = 1234;
	cout << number << endl;
	cout << "Amount of hundreds is " << number % 1000 / 100 << endl;
	cout << "Amount of thousands is " << number % 10000 / 1000 << endl;
}

void Task3() {
	cout << "Task3\n";
	int number = 123;
	cout << number << endl;
	if (number % 10 > number / 100) cout << "The first less then the third\n";
	if (number % 10 < number / 100) cout << "The first bigger then the third\n";
	if (number % 100 / 10 > number / 100) cout << "The first less then the second\n";
	if (number % 100 / 10 < number / 100) cout << "The first bigger then the second\n";
	if (number % 100 / 10 < number % 10) cout << "The second less then the third\n";
	if (number % 100 / 10 > number % 10) cout << "The second bigger then the third\n";
}

void Task4() {
	cout << "Task4\n";
	int number = 123;
	cout << number << endl;
	if(pow(number, 2) == (pow(number % 10, 3) + pow(number % 100 / 10, 3) + pow(number / 100, 3))) 
		cout << "It is true\n";
	else cout << "It is folse\n";
}

void Task5() {
	cout << "Task5\n\n";
	for (int i = 0; i < 12; ++i) {
		int month = i + 1;
		switch (month) {
		case 1 :
			cout << "January\n";
			break;
		case 2:
			cout << "February\n";
			break;
		case 3:
			cout << "March\n";
			break;
		case 4:
			cout << "April\n";
			break;
		case 5:
			cout << "May\n";
			break;
		case 6:
			cout << "June\n";
			break;
		case 7:
			cout << "July\n";
			break;
		case 8:
			cout << "August\n";
			break;
		case 9:
			cout << "September\n";
			break;
		case 10:
			cout << "October\n";
			break;
		case 11:
			cout << "November\n";
			break;
		case 12:
			cout << "December\n";
			break;
		}
	}
}

void Task6() {
	cout << "Task6\n";
	int number = 123456;
	cout << number << endl;
	cout << "Sum is " << number % 10 + number % 100 / 10 + number % 1000 / 100 + 
		number % 10000 / 1000 + number % 100000 / 10000 + number / 100000
		<< endl;
}

void Task7() {
	cout << "Task7\n";
	const int size = 10;
	int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int x = 5;
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > x) sum += arr[i];
		if (arr[i] % 2 != 1) ++counter;
	}
	cout << "The sum is " << sum << endl;
	cout << "The amount is " << counter << endl;
}

void Task8() {
	cout << "Task8\n";
	int number ;
	for (int i = 39; i < 5000; i += 39) {
		if (i % 39 == 0) number = i;
	}
	cout << number;
}

void Task9() {
	cout << "Task9\n";
	char arr[5][5]{};
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr[i][j] = ' ';
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if(i >= j) arr[i][j] = 53;
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr[i][j] = ' ';
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (i + j >= 4 && i + j <= 8) arr[i][j] = 49;
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void Task10() {
	cout << "Task10\n";
	char str[] = " File Edit    View Git  Project.";
	int size = strlen(str);
	int counter = 0;
	int counter_max = 0;
	for (int i = 0; i < size; ++i) {
		if (str[i] == 32) ++counter;
	}
	cout << "The number of spaces in the string: " << counter << endl;
	counter = 0;
	for (int i = 0; i < size; ++i) {
		if (str[i] == 32) ++counter;
		else {
			if (counter_max < counter) counter_max = counter;
			counter = 0;
		}
	}
	cout << "The max number of consecutive spaces in the string: " << counter_max;
}

void Task11() {
	cout << "Task11\n";
	for (int i = 0; i < 80; ++i) {
		cout << '*';
	}
}

void Task12() {
	cout << "Task12\n";
	const int size = 10;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int number_B = 20;

	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int arr1[10]{};
	for (int i = 0; i < size; ++i) {
		arr1[i] = arr[i];
	}
	for (int i = 0; i < size; ++i) {
		arr1[i] -= 20;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	int arr2[10]{};
	for (int i = 0; i < size; ++i) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < size; ++i) {
		arr2[i] *= arr2[size - 1];
	}
	for (int i = 0; i < size; ++i) {
		cout << arr2[i] << " ";
	}
	cout << endl;

	int arr3[10]{};
	for (int i = 0; i < size; ++i) {
		arr3[i] = arr[i];
	}
	for (int i = 0; i < size; ++i) {
		arr3[i] += number_B;
	}
	for (int i = 0; i < size; ++i) {
		cout << arr3[i] << " ";
	}
	cout << endl;
}

void Task13() {
	cout << "Task13\n";
	const int size = 10;
	int arr[10] = { 2, 5, 5, 5, 4, 2, 4, 4, 2, 4 };
	int amount_of_grade_4 = 0;
	int amount_of_grade_5 = 0;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int arr1[10]{};
	for (int i = 0; i < size; ++i) {
		if(arr[i] == 4) ++amount_of_grade_4;
		if (arr[i] == 5) ++amount_of_grade_5;
	}
	cout << "The amount of 5 grades is " << amount_of_grade_5 << endl;
	cout << "The amount of 4 grades is " << amount_of_grade_4 << endl;
}

void Task14() {
	cout << "Task14\n";
	const int size = 10;
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int arr1[10]{};
	for (int i = 0; i < size; ++i) {
		arr1[i] = arr[i];
	}
	arr1[1] = arr1[1] + arr1[4];
	arr1[4] = arr1[1] - arr1[4];
	arr1[1] = arr1[1] - arr1[4];
	for (int i = 0; i < size; ++i) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	int arr2[10]{};
	for (int i = 0; i < size; ++i) {
		arr2[i] = arr[i];
	}
	int m = 2, n = 5;
	arr2[2] = arr2[2] + arr2[5];
	arr2[5] = arr2[2] - arr2[5];
	arr2[2] = arr2[2] - arr2[5];
	for (int i = 0; i < size; ++i) {
		cout << arr2[i] << " ";
	}
	cout << endl;
}

void Task15() {
	cout << "Task15\n";
	int arr[5][5]{};
	int arr_test[5][5]{};
	int number = 0;
	bool flag = 0;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			do {
				flag = 0;
				number = rand() % 100;
				for (int n = 0; n < 5; ++n) {
					for (int m = 0; m < 5; ++m) {
						if (arr_test[n][m] == number) flag = 1;
					}
				}
			} while (flag);
			arr[i][j] = number;
			arr_test[i][j] = number;
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Task16() {
	
}

void Task17() {

}

void Task18() {

}

void Task19() {

}

void Task20() {
	cout << "Task20\n";
	int arr[5][5]{};
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int arr1[5][5]{};
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr1[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			for (int n = 0; n < 5; ++n) {
				for (int m = 5 - 1; m > n; --m) {
					if (arr1[i][m - 1] > arr1[i][m]) {
						arr1[i][m - 1] = arr1[i][m - 1] + arr1[i][m];
						arr1[i][m] = arr1[i][m - 1] - arr1[i][m];
						arr1[i][m - 1] = arr1[i][m - 1] - arr1[i][m];
					}
				}
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		cout << "Min of the " << i << " row is " << arr1[i][0] << endl;
	}
	cout << endl;

	int arr2[5][5]{};
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			arr2[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			for (int n = 0; n < 5; ++n) {
				for (int m = 5 - 1; m > n; --m) {
					if (arr2[m - 1][i] > arr2[m][i]) {
						arr2[m - 1][i] = arr2[m - 1][i] + arr2[m][i];
						arr2[m][i] = arr2[m - 1][i] - arr2[m][i];
						arr2[m - 1][i] = arr2[m - 1][i] - arr2[m][i];
					}
				}
			}
		}
	}
	for (int j = 0; j < 5; ++j) {
		cout << "Max of the " << j << " coluomn is " << arr2[5 - 1][j] << endl;
	}
}