#include <stdio.h>

int main () {
	/*
	* Programm soll den Benzinverbrauch in Litern je 100 Kilometer errechnen.
	* Als Eingabe benötigt das Programm den Benzinverbrauch insgesamt in Litern und die dazu gefahrenen Kilometer.
	* Der Verbrauch pro 100 Kilometer ergibt sich dann aus: Liter x 100/km
	*/

	float benzinverbrauch, km;


	printf("\nGeben Sie den gesamten Benzinverbrauch ein: ");
	scanf("%f",&benzinverbrauch);
	 
	printf("\n\nGeben Sie die gefahrenen Kilometer ein: ");
	scanf("%f",&km);
	
	printf("\n\nIhr Verbrauch liegt bei %4.2f Litern pro 100km \n\n",benzinverbrauch/km*100);
	return 0;
} 
