#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Una empresa necesita simular la producción de los próximos 5 años para tal fin necesita
generar una matriz (estática) de 5x12 donde cada fila corresponde a un año y cada columna
es un mes. Ud. debe realizar las siguientes tareas:
a. Cargue dicha matriz con valores aleatorios entre 10000 y 50000.
b. Muestre por pantalla los valores cargados
c. Saque el promedio de ganancia por año y muestrelos por pantalla
d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de
cuándo ocurrió.*/
int main(){
    
    long int produccion[5] [12];
    int suma = 0;
    int promedio=0;
    long int max=0;
    long int min=50000;
    int auxMax,auxMaxMes, auxMin, auxMinMes;
    printf("Producción:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
           produccion[i][j]=rand() % 50000 + 10000;
           printf(" %ld", produccion[i][j]);
        }
        printf("\n");
    }
    /*calculo el promedio*/
    printf("\nPromedio por año:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
           suma=suma+produccion[i][j];
        }
        promedio=suma/12;
        printf("\n -promedio del anio %d es: %d", i+1, promedio);
    }
    // obs: No me funciona el promedio.

    /*calculo el máximo y mínimo*/
    printf("\nmáximo y mínimo:");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
           if(produccion[i][j]>max)
           {
            max=produccion[i][j];
            auxMax=i;   // señala el año del máximo
            auxMaxMes=j; //señala el mes del máximo
           
           }
           if(produccion[i][j]<min)
           {
            min=produccion[i][j];
            auxMin=i;   // señala el año del mínimo
            auxMinMes=j;
           }
        }
    }
    printf("\nEl maximo es:%d y se da en  %d y el anio %d", max, auxMaxMes+1, auxMax+1 );
    printf("\nEl maximo es:%d y se da en  %d y el anio %d", min, auxMinMes+1, auxMin+1 );

        
    return 0;
}