#include "stdio.h"
#include "stdlib.h"
#define TAMPILA 10
#include <iostream>
using namespace std;

struct pila {
	int item[TAMPILA];
	int tope;
};
typedef struct pila DISCO;

int push(DISCO& p, int e);
int pop(DISCO& p, int& e);
int stacktop(DISCO p, int& e);
int empty(DISCO p);
void startpila(DISCO& p);

void t_Hanoi(int n, DISCO& A, DISCO& B, DISCO& C,
	DISCO* a, DISCO* b, DISCO* c);
void mostrar(DISCO C);

int main() {
	int n;

	DISCO A, B, C;
	startpila(A);
	startpila(B);
	startpila(C);

	DISCO* a = &A;
	DISCO* b = &B;
	DISCO* c = &C;


	cout << "ALGORITMO TORRE HANOI" << endl;

	printf("Ingrese la altura de la torre ");
	scanf("%d", &n);

	printf("Torre 1 con Disco máximo: %d", n);
	for (int i = n; i > 0; i--)
		push(A, i);
	printf("\n\tTorre llena exitosamente");

	printf("\nLos elementos de la Torre A son: ");
	mostrar(A);
	printf("\n\t");
	system("pause");

	t_Hanoi(n, A, B, C, a, b, c);

	printf("\n\tDiscos movidos exitosamente");
	printf("\nLos elementos de la Torre C son: ");
	mostrar(C);

	printf("\n\t");
	system("pause");
	return 0;
}

int push(DISCO& p, int e) {
	if (p.tope == TAMPILA - 1)
		return 0;
	p.item[++p.tope] = e;
	return 1;
}

int pop(DISCO& p, int& e) {
	if (empty(p))
		return 0;
	e = p.item[p.tope--];
	return 1;
}

int stacktop(DISCO p, int& e) {
	if (empty(p))
		return 0;
	e = p.item[p.tope];
	return 1;
}

int empty(DISCO p) {
	if (p.tope == -1)
		return 1;
	return 0;
}

void startpila(DISCO& p) {
	p.tope = -1;
}

void t_Hanoi(int n, DISCO& A, DISCO& B, DISCO& C,
	DISCO* a, DISCO* b, DISCO* c) {
	int e;
	char aux, aux1;

	if (a == &A)
		aux = 'A';
	else if (b == &A)
		aux = 'B';
	else if (c == &A)
		aux = 'C';

	if (a == &C)
		aux1 = 'A';
	else if (b == &C)
		aux1 = 'B';
	else if (c == &C)
		aux1 = 'C';

	if (n == 1) {
		pop(A, e);
		push(C, e);
		printf("\nDisco %d movido de la Torre %c a la Torre %c", n, aux, aux1);

	}
	else {
		t_Hanoi(n - 1, A, C, B, a, b, c);
		pop(A, e);
		push(C, e);
		printf("\nDisco %d movido de la Torre %c a la Torre %c", n, aux, aux1);
		t_Hanoi(n - 1, B, A, C, a, b, c);
	}

}

void mostrar(DISCO C) {
	int e;
	while (pop(C, e))
		printf("%d", e);
}