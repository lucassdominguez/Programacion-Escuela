//El usuario ingresará 5 nombres de personas y sus edades (número entero). 
//Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
//El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
//Nota: no hay que almacenar todos los nombres y todas las notas.

#include <stdio.h>
#include<string.h>

int main()
{
    
    int i;
    char nombre_joven[250]; 
    char aux[250];
    int menor_edad;   
    int edad_aux;
    
    for(i=0;i<=2;i++)
    {
        printf("\nIngrese el nombre de la persona Nº%d:",i+1);
        scanf("%s",aux);
        printf("\nIngrese la edad de %s:",aux);
        scanf("%d",&edad_aux);
        
        if(i==0)    menor_edad=edad_aux;   //Le asignamos un valor en el primer ciclo a menor_edad.
        
        if(edad_aux<menor_edad)
        {
            menor_edad = edad_aux;
            strcpy(nombre_joven,aux);  //Copiamos lo que esta guardado en aux en la variable nombre_joven.
        }
    }
    printf("\nLa persona más joven es %s.",nombre_joven); 
}
