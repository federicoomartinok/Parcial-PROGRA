/******************************************************************************

1- Realizar una función que reciba como parámetro el importe de un producto y un porcentaje
de descuento.La función retornará el importe con el descuento aplicado. Probar en el main

2- Crear una función que permita invertir el orden de una cadena de caracteres,
 La función recibirá dos cadenas, una con el texto a invertir, y otra para el texto
 invertido. Probar desde el main
FEDERICO MARTIN 1-F
*******************************************************************************/
#include <stdio.h>

float DescuentoTotal (int importe, int porcentaje);
void InvertirCadenas (char texto[], char texto2[]);


int main()
{
	setbuf (stdout,NULL);

    float descuento;

    descuento = DescuentoTotal(35000,5);

    printf("%.2f", descuento);

    return 0;
}


float DescuentoTotal (int importe, int porcentaje){

    float total;

    total = (importe*porcentaje)/100;


    return total;
}
void InvertirCadenas (char texto[], char texto2[]){




}
