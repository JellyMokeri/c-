#include <iostream>

#define MAX_N 8
#define MAX_M 10

int arr[MAX_N][MAX_M] = {
	{0,  1, 222, 3},
	{10, 11, 12, 13},
	{20, 21, 22, 23}
};
int n = 3;
int m = 4;

//Заполнение значениями i * 10 + j
void fillIx10() {
	printf("!!!! fillIx10() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = i * 10 + j;
		}
	}
}

//Заполнение значениями 0
void fillZero() {
	printf("!!!! fillZero() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = 0;
		}
	}
}

//Заполнение случайными значениями
void randFill0_9() {
printf("!!!! randFill0_9() !!!!\n");
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		arr[i][j] = rand() % 10;
	}
}
}

//Поиск минимального элемента
void findMin() {
	printf("!!!! findMin() !!!!\n");
	int min = arr[0][0];
	int iMin = 0;
	int jMin = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				iMin = i;
				jMin = j;
			}
		}
	}
	printf("min = %d\n", min);
	printf("imin = %d\n", iMin);
	printf("jmin = %d\n", jMin);
}

//Подсчет суммы всех элементов
s = 0;
i = 0;
while (i < n) {
	j = 0;
	while (j < m) {
		s += a[i][j];
		j++;
	}
	i++;
}
printf("s = %d\n", s);


//Удалить строку
void deleteRow(int delRow) {
	printf("!!!! deleteRow(%d) !!!!\n", delRow);
	for (int i = delRow; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = arr[i + 1][j];
		}
	}
	n--;
}

//Вставить столбец
void addColumn0() {
printf("!!!! addColumn0() !!!!\n");

if (m < MAX_M) {
	for (int i = 0; i < n; i++) {
		arr[i][m] = 0;
	}
	m++;
}

}


//вывод массива
void print() {
	printf("!!!! print() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

//Ввод двухмерного массива через консоль
int a[10][10];
int n, m;
int i, j;
scanf_s("%d", &n);
scanf_s("%d", &m);
i = 0;
while (i < n) {
	j = 0;
	while (j < m) {
		scanf_s("%d", &a[i][j]);
		j++;
	}
	i++;
}

