#include <iostream>

// ������ �� �������� �����	

int a, b, s;
FILE* fin = fopen("d:\\Temp\\Files\\in1.txt", "rt");
if (fin == NULL) {
	printf("File in1.txt is not found");
	return;
}
fscanf(fin, "%d%d", &a, &b);
fclose(fin);

// ���������
s = a + b;
scanf("%d%d%d", &a, &b, &c);
// ����������� ������
printf("�����: %d, %d, %d\n", a, b, c);


// ������ � �������� ����

 FILE* fout = fopen("d:\\Temp\\Files\\out1.txt", "wt");
	if (fout == NULL) {
		printf("File out1.txt cannot be created");
		return;
	}
fprintf(fout, "s = %d", s);
fclose(fout);
