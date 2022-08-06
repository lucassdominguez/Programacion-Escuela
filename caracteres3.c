//El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no,
//es decir si tienen las mismas letras en las mismas posiciones.
#include <stdio.h>


int comparacion(char s1[100], char s2[100])
{
    int i;
    for(i=0;((s1[i]!='\0') && (s2[i]!='\0') && s1[i]==s2[i]); i++); 
    return (s1[i]-s2[i]);
}
 
int main(){
	int resul;
    char stringA[100];
    char stringB[100];
    
         printf("\nIngrese el primer string:");	
         scanf("%s", &stringA);
         printf("\nIngrese el segundo string:");
         scanf("%s", &stringB);
         
    resul= comparacion(stringA, stringB); //Llamamos a la función.
    
    if (resul==0) printf("\nAmbos strings son iguales.");
	else printf("\nLos strings son distintos.");
	
}

