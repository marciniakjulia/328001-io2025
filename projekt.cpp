#include <stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	if (a < 1) {
		printf("Podana wartosc NIE jest dodatnia.");
		return 0;
	}
	printf("%d", a);
	return 0;
}
