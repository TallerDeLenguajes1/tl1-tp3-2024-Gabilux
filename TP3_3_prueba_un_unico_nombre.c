/*Escriba un programa que solicite 5 nombres, los cargue en un vector de 
punteros char y una vez cargados sean listados por pantalla 
(Todo implementando reserva dinámica de memoria)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char **Nombres;
    char *buff;//variable auxiliar
    char *nombre; 
    char *ape; //apellido
    char *nombreCompleto;
    Nombres=(char**)malloc(5*sizeof(char));
    buff=(char *)malloc(100*sizeof(char));
    printf("\nIngrese su nombre:");
    gets(buff); //almaceno el nombre en el buffer y luego lo copio a la variable nombre
    /*----//nombre=Buff; mal, ver por qué;------*/
    nombre=(char*) malloc((strlen(buff)+1)*sizeof(char)); //resrevo memoria del tamaño del buffer + para el caracter final de cierre (?)
    /*----/en la funcion malloc por que no puede ser sizeof(buff)+1; maaaaal, ver por qué;------*/
    strcpy(nombre, buff); //copio lo guardado en la var auxiliar buff en el nombre
    // Nombres=(char **)malloc(5*sizeof(Buff));
    printf("\nIngrese su apellido:");
    gets(buff); // cargo la va aux buff con el apellido (sobreescribe al nombre)
    ape= (char *)malloc(100*sizeof(char));
    strcpy(ape, buff);
    nombreCompleto=(char*)malloc((strlen(ape)+strlen(nombre)+1)*sizeof(char));
    strcat(nombreCompleto, ape);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);
    printf("Su nombre es:");
    puts(nombreCompleto);
    free(buff);
    free(nombre);
    free(ape);
    free (nombreCompleto);
    return 0;  
}