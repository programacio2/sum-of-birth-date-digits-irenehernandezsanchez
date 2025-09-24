#include <stdio.h>
int main()
{
	int any, mes, dia,suma;
	printf("digues el dia del teu cumple: ");
	scanf_s("%d", &dia);
	printf("digues el mes del teu cumple: ");
	scanf_s("%d", &mes);
	printf("digues l'any del teu cumple: ");
	scanf_s("%d", &any);

	suma = dia + mes + any;

	printf("%d+%d+%d=%d", dia, mes, any, suma);
}