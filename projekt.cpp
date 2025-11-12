#include <stdio.h>
int czy_pierwsza(int a) {
	int pierwsza = 1;
	
	if (a == 0 || a == 1) return 0;
	
	int i;
	for (i = 2; i <= a / 2; ++i) {
    		if (a % i == 0) {
      			pierwsza = 0;
      			break;
    		}
  	}
	return pierwsza;
} 

int main(void) {
	int a;
	scanf("%d", &a);
	printf("Liczba: %d. Czy pierwsza (bool): %d\n", a, czy_pierwsza(a));
	return 0;
}
