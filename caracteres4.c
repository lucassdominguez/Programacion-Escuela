//El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.

#include <stdio.h>

int Aminuscula();   //Declaramos una función global.

int main()

{
    int a;
    a= Aminuscula();    //Llamamos a la función.

    printf("La palabra contiene %d letra/s 'a'.",a);

}


int Aminuscula()  //Funcionamiento de la función.
{
    char caracter;
    int letras, cont=0;

    while((caracter=getchar()) != '\n' )  //Establemos una condición.
    {
        if(caracter=='a')   cont++; //Si hay "a" el contador amuenta.
    }
    
    return cont;
}