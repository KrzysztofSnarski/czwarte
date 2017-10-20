#include <stdio.h>

int mnoz(int a, int b){
	return a*b;
}
int dodaj(int a, int b){return a+b;}

int main(void)
{
	int a =2, b= 5;/*deklaracja wraz z inicjalizacja */
	char wybor;
	scanf("%c", &wybor); /*czytaj z konsoli i zapisz wartosc pod wybor */

	/* if(wyrazenie){blok jesli wyrazenie prawdziwe}
		else {blok jesli wyrazenie falszywe}; */
	if(wybor =='*'){
		printf("wynik mnozenia: %i\n", mnoz(a, b));
	}else{
	printf("Wynik dodawaniaa: %i\n", dodaj(a, b)); /*wyswietlanie wyniku*/
};
	return 0;

}
