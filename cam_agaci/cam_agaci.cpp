#include<stdio.h>
#include<windows.h>
//cam agaci 3 ucgen 1 dikdortgenden olusuyor.
void ucgen() { //ucgen fonksiyonu ekrana ucgen yazdırmak icin kullanılır.
	int yildiz, bosluk;
	yildiz = 1;//yildiz degeri ekrandaki yildiz simgesini temsil eder.
	bosluk = 5;//bosluk degeri ise ekrana ucgen yazdırmak icin basa bosluk atıp piramit cizdirir.
	for (int i = 0; i < 6; i++) {
		for (int s = 0; s < bosluk; s++) {
			printf(" ");
		}
		for (int s = 0; s < yildiz; s++) {
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
}
//burada 3 adet ic ice for dongusu vardir.
int main(void) {
	for (int i = 0; i < 20; i++) { // ekrani sildigimiz icin delay yapmamıza yardımcı olur.
		for (int j = 0; j < 20; j++) { //ucgen fonskiyonunu yazdirir.
			for (int k = 0; k < j; k++) { //tab atip alt satira iner.
				printf("\t\n");
			}
			ucgen();
			ucgen();
			ucgen();
			for (int i = 0; i < 5; i++) {
				printf("   ");
				for (int k = 0; k < 5; k++) {//cam agacini sapini yazdiran for.
					printf("*");
				}
				printf("\n");
			}
			//asagidaki 3 satir kod ekranı sildikten sonra delay yapmamıza yardımcı olur.
			for (int i = 0; i < 1000000000; i++);
			system("cls");
			for (int i = 0; i < 1000000000; i++);
		}

	}

	return 0;
}