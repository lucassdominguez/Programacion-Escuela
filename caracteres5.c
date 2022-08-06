//El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.

#include <stdio.h>

char caracter;
int cont_m = 0;  
int cont_M = 0;

int main()

{
    while((caracter = getchar()) != '\n' )      //establecemos una condicion.
    
        {
        if(caracter=='A'||caracter=='E'||caracter=='I'||caracter=='O'||caracter=='U')   cont_M ++;  //Si hay una vocal mayúscula el contador amuenta.

        if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u')   cont_m ++;  //Si hay una vocal minúscula el contador amuenta.
        }

	printf("La palabra ingresada tiene %d minúsculas y %d vocales mayúsculas",cont_m,cont_M);
}
