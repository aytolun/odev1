#include <stdio.h>

int main() {
	
	
	int uzun,kisa,alan,cevre;
	
	printf("Dikdortgenin uzun kenarini girin:");
	scanf("%d", &uzun);
	printf("Dikdortgenin kisa kenarini girin:");
	scanf("%d",&kisa);
	
	
	alan=uzun*kisa;
	cevre=uzun+uzun+kisa+kisa;
	
	
	printf("Dikdortgenin alani:%d",alan);
	printf("Dikdortgenin cevresi:%d",cevre);

	

	return 0;
}
