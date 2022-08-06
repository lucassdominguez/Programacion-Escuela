// El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
//Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.


#include <stdio.h>
#include <string.h>

int main()
{
    char aux[200];
    char string[200];
    const char password[4]={'F','I','N','\0'};

    while(strcmp(aux,password)!=0)  
    {
        printf("\nIngrese el nombre de la persona:");
        scanf("%s",aux);

        if(strcmp(aux,password) != 0)
        {
            if(strcmp(aux,string)<0)
            {
                strcpy(string,aux);//copio lo que hay en el auxiliar al string.
            }
        }
    }
    
    printf("\nEl primer nombre es %s.",string);
}