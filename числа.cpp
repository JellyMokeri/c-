#include <iostream>
int main() {

    //��� ����������� �����
    int n, i;
    printf("n = ");
    scanf_s("%d", &n);
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);

    //goto
    int a = 1;
    //do {
label_do:
    printf("%d ", a);
    a = a + 1;
    //} while (a <= 10);
    if (a <= 10) goto label_do;

    //Continue �����  2000 2001 2002 2003 ... 2030 - ������ ������������
    int a = 1999;
    while (a < 2030) {
        a = a + 1;
        if (a % 4 == 0)
            continue;
        printf("%d ", a);
    }

    //SWITCH
    int n;
    switch (n) {
    case 1:
        printf("�� ����� ��\n");
        break;
    case 2:
        printf("�� ����� ��\n");
        break;
    }

    //������ � ���������� 5 �����
    printf("������� � ���������� 5 �����");
    int i = 1;
    int a;
    do {
        scanf_s("%d", &a);
        i++;
    } while (i <= 5);

    //��������� ������ ������������� �� 3% ������ ���
    int year = 2014;
    long population = 650000;
    do {
        printf("%ld  inhabitants live in the city in %d\n",
            population, year);
        population = (population * 103) / 100;
        year = year + 1;
    } while (year <= 2040);

    //�� ���� �������� R ������ ������� ��� N ��������� �������
    �����
        god = 0;
    do {
        printf("li RUB in %i year \n", s, god);
        s = (s * (100 + procent)) / 100;
    } while (god <= 10);

    //���������
    long fuct(int n);
    int num;
    printf("num = ");
    scanf_s("%d", &num);
    long f = fuct(num);
    printf("num = %d, num! = %ld", num, f);

    //�������� �� ����� �������
    int isPrime(int num) {
        int del = 2;
        while (del < num) {
            // ���� num ������ �������� �� del
            if (num % del == 0) {
                // ���������� 0, �.�. ����� �� �������
                return 0;
            }
            del++;
        }
        // ���������� 1, �.�. �� ���� ����� �� 2 �� num-1 
        // �� �������� ���������
        return 1;
    }
    }

    //������� N ������ ������� �����
    int n = 10;
    int a = 1;
    int i = 0;
    while (i < n) {
        if (isPrime(a)) {
            printf("%d ", a);
            i++;
        }
        a++;
    }

    //������� N ������ �������� �����
    int i, a, n;
    scanf("%d", &n);
    a = 1;
    i = 1;
    do {
        printf("%d ", a);
        a += 2;
        i++;
    } while (i <= n);
    printf("\n");

    //������� ������ N �������� ����� ���������
    int i;
    int a1, a2, a3;
    int n;
    scanf("%d", &n);
    a1 = 0;
    a2 = 1;
    i = 1;
    do {
        printf("%d ", a2);
        a3 = a2 + a1;
        a1 = a2;
        a2 = a3;
        i++;
    } while (i <= n);
    printf("\n");

    //������2. ������ � ���������� ����� N. ������� ���� �� �����
    void Uzor1() {
        int n, i, j;
        scanf_s("%d", &n);
        i = 0;
        while (i < n) {
            j = i;
            while (j >= 0) {
                printf("%d ", j);
                j--;
            }
            printf('\n');
            i++;
        }
    }
    0
    1 0
    2 1 0
    3 2 1 0

    //������2. ���
    void Uzor2() {
        //������� ���� ��������� 5 �����
        int i = 5;
        while (i >= 1) {
            int j = i;
            // ���������� ���� ��������� ������ �� �����
            while (j <= 5) {
                printf("%d ", j);
                j++;
            }
            printf("\n");
            i--;
        }
    }
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
    
    //������ 2. ���
    void Uzor3() {
    //������� ���� ��������� 5 �����
    int i = 0;
    int j;
    int x;
    while (i < 5) {
        x = 5 - i;
        j = 0;
        // ���������� ���� ��������� ������ �� �����
        while (j < 5) {
            if (x != 0) {
                printf("%d ", x);
                x = x - 1;
            }
            j++;
        }
        printf("\n");
        i++;
        }
    }
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1

