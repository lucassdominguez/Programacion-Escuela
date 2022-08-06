//Permitir que el usuario ingrese una palabra de hasta 20 letras.
//Mostrar en pantalla cuántas letras tiene la palabra ingresada.
//Por ejemplo "CASA" debe indicar 4 letras.

#include <stdio.h>

int cont();     //Definimos la función como una función global.

int main()

{
int caracteres;
printf("\nIngrese una palabra:");
caracteres = cont();    //Llamamos a la función.

if(caracteres==21) printf("\nError."); //Como se menciona más adelante, el número "21" es nuestra clave para detectar error.

else printf("\nLa palabra ingresada tiene %d letras.",caracteres);

}

int cont()  //Funcionamiento de la función.
{
char caracter;
int letras;

    
    for(letras=0;letras<20;letras++)
    {
        caracter=getchar();
        
        if(caracter=='\n' || caracter==' ') return letras; // si caracter es un espacio o un salto de linea o va a devolver letras//
    }
    
    return 21;  //si la palabra tiene mas de 20 letras devolverá "21", que sería como un número "clave" para detectar error.
}

