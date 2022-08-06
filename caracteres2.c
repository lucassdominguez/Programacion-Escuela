//Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
//Por ejemplo, para "CASA" se debe mostrar "ASAC".

#include <stdio.h>

int main()
{
    int inicial, final, cont;
    char palabra[4];
    char caracter, aux;
    int i=0;

    printf("Ingrese la palabra:\n");
    scanf("%c",&caracter);

    while (i<4 && caracter!=' ')   //Establecemos una condición.
    {
        palabra[i]=caracter;
        i++;
        scanf("%c",&caracter);
    }
 
    inicial=0;
    final=i-1;   

    while(inicial<final)    //Establecemos una nueva condicion y lo que hacemos es guardar la palabra al revés.
    {
        aux=palabra[inicial];
        palabra[inicial]=palabra[final];
        palabra[final]=aux;
    
        inicial++;
        final--;
    }

    for(cont=0;cont<i;cont++)   //Mostramos la palabra al revés.
    {
        printf("%c",palabra[cont]);
    }
}
