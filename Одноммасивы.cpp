#include <iostream>


	
	#define NUM_ELEMENTS 10
	
	//����� ��������� �������
void Vivod() {
	int i;
	int a[10] = { 10, 5, 20, 35, 12, 14 };
	int n = 6;
	i = 0;
	while (i < n) {
		printf("%d", a[i]);
		i++;
	}
	printf("\n")
}
	
	//���������� ���������� i * 10
	void fillIx10() {
		int i = 0;
		while (i < NUM_ELEMENTS) {
			arr[i] = i * 10;
			i++;
		}
	}

	//���������� ���������� 0
	void fillZero() {
		int i = 0;
		while (i < NUM_ELEMENTS) {
			arr[i] = 0;
			i++;
		}
	}

	//���������� ���������� ����������
	void randFill0_9() {
		int i = 0;
		while (i < NUM_ELEMENTS) {
			arr[i] = rand() % 10;
			i++;
		}
	}

	//���������� ���������� ���������� (FOR)
	void randFill0_9_for() {
	#define NUM_ELEMENTS 10
		int arr[NUM_ELEMENTS];
		int n = 10;
		int i = 0;
		// ��������� ������ ���������� �������
		for (int i = 0; i < 10; i++)
		{
			arr[i] = rand() % 10;
		}

		while (i < 10) {
			printf("%d ", arr[i]);
			i++;
		}
	}

	//���� ������� � ����������
	int a[4];
	int i;
	int s;
	i = 0;
	while (i < 4) {
		scanf("%d", &a[i]);
		i++;
	}

	// ������� ����� � �����
	s = 0;
	i = 0;
	while (i < 4) {
		s = s + a[i];
		printf("%d ", s);
		i++;
	}

	//����� ������� � �������
	void printMinElement() {
		int min = arr[0];
		int iMin = 0;
		int i = 1;
		while (i < NUM_ELEMENTS) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
			i++;
		}
		printf("min = %d", min);
		printf("index min = %d\n, i Min");
	}

	//����� ������������ ������� �������
	void printMaxElement() {
		int max = arr[0];
		int iMax = 0;
		int i = 1;
		while (i < n) {
			if (arr[i] > max) {
				max= arr[i];
				iMin = i;
			}
			i++;
		}
		printf("min = %d", min);
		printf("index max = %d\n, i Min");
	}

	//������� ������� ��������������
	double s = 0;
	i = 0;
	while (i < 5) {
		s = s + a[i];
		i++;
	}
	double armean = s / 5;
	printf("summ = %f\n", s);
	printf("arifm = %f\n", armean);

	//����������� ������� ��������� (a[0]) � ����������� ��������
	int tmp = a[0];
	a[0] = a[index_min];
	a[index_min] = tmp;


	//��������� � 10 ��� ��� �������� ������� ������ ������������
	void AfterMinX10() {
		int min = arr[0];
		int iMin = 0;
		int i;
		for (i = 1; i < NUM_ELEMENTS; i++) {
			if (arr[i] < min) {
				min = arr[i];
				iMin = i;
			}
			i++;
		}
		for (i = iMin + 1; i < NUM_ELEMENTS; i++) {
			arr[i] *= 10;
		}
	}

	//����� ������������ ��������� � 10 ���
	...
	i = 0;
	while (i < iMin) {
		a[i] *= 10;
		i++;
	}

	//��� �������� ��������� � 10 ���
	void oddX10() {
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 1) {
				arr[i] *= 10;
			}
		}
	}

	//����� � ������� ������� �����
	for (int i = 0; i < 20; i++)
	{
		for (int j = 2; j <= arr[i] / 2; j++)
		{
			if (arr[i] % j == 0 && arr[i] != j)
			{
				arr[i] = 0;
				break;
			}
		}
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}

	//����� � ������� ���������� ������� �����
	int max = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 2; j <= arr[i] / 2; j++)
		{
			if (arr[i] % j == 0 && arr[i] != j)
			{
				arr[i] = 0;
				break;
			}
		}
		if (arr[i] != 0)
		{
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}
	printf("%d", max);



	//������ ���������� �����
	#define NUM_ELEMENTS 10
	int arr[NUM_ELEMENTS];
	int n = 0;
	void printElements() {
		int i = 0;
		while (i < n) {
			printf("%d ", arr[i]);
			i++;
		}
	}
	//���
	void addRand0_10() {
		if (n < NUM_ELEMENTS) {
			arr[n++] = rand() % 11;
		}
	}
	//��
	void deleteElement(int delIndex) {
		if (delIndex >= 0 && delIndex < n) {
			for (int i = delIndex; i < n - 1; i++) {
				arr[i] = arr[i + 1];
			}
			n--;
		}
	}

	//���� ������� � ����������
	void keyboardInput() {
		int i, n;
		int a[10];
		scanf_s("%d", &n);
		i = 0;
		while (i < 10) {
			scanf_s("%d", &a[i]);
			i++;
		}
	}


	//���������� ������� (����� ������) �������
	void selectionSort() {
		for (int j = 0; j < n - 1; j++) {
			int min = arr[j];
			int iMin = j;
			for (int i = j + 1; i < n; i++) {
				if (arr[i] < min) {
					min = arr[i];
					iMin = i;
				}
			}
			int tmp = arr[iMin];
			arr[iMin] = arr[j];
			arr[j] = tmp;
		}
	}

	//�������� ������������� �������� �������
	i = iMax;
	while (i < n - 1) {
		a[i] = a[i + 1];
		i++;
	}
	n--

	//���������� �������� �100� � ������ �������
	���� �������
	//����� ������� � ����������� a[]
	i = n;
	while (i > 0) {
		a[i] = a[i - 1];
		i--;
	}
	n++;
	���������� a[0] = 100;