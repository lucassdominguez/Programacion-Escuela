//El usuario ingresará una palabra de hasta 10 letras. 
//Se desea mostrarla en pantalla pero encriptada según el "Código César".
//Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. 
//Por ejemplo, "CASA" se convierte en "FDVD".
//Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
//Este mecanismo se utilizaba en el Imperio Romano.

#include <stdio.h>
#include<string.h>


int main()
{

    char string[10];    //la palabra va a ser de maximo 10 letras.
    int i;
    printf("\nIngrese la palabra a cambiar: ");     

    for(i=0;i<10;i++)

    {
        if((string[i]=getchar()) == 10)  //Si mandamos a la entrada un "Enter" se rompe el bucle.
        
        break;
        
        //condiciones a aplicar en las letras x,y,z y X,Y,Z//
        else if(string[i]==120) // letra 'x'//
                string[i]=97;
                
            else if(string[i]==121) // letra 'y'//
                string[i]=98;
                
                else if(string[i]==122) // letra 'z'//
                    string[i]=99;
    
                    else if(string[i]==88)  // letra 'X'//
                        string[i]=65;
                        
                        else if(string[i]==89)  // letra 'Y'//
                            string[i]=66;
                            
                            else if(string[i]==90)  // letra 'Z'//
                                string[i]=67;
                            
        else
        {
            string[i]+=3;    //Le sumamos 3 posiciones en referencia a la tabla ASCII.
        }
    }

    printf("la palabra transformada es: %s\r",string);

    printf("                              ");   //Agregamos esto por un problema de impresión de caracteres.


}