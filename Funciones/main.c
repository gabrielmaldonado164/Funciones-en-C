#include <stdio.h>
#include <stdlib.h>


//int sumar(int numero1,int numero2);
void calcular(int numeroUno,int numeroDos,int operacion);
int pedirDatos();
float sumar(int numeroUno, int numeroDos);
float restar(int numeroUno, int numeroDos);
float  multiplicar(int numeroUno, int numeroDos);
float dividir(int numeroUno, int numeroDos);
void mostrar(float);



/*void calcular(int numeroUno,int numeroDos,int operacion);
float sumar(int numeroUno, int numeroDos);
float restar(int numeroUno, int numeroDos);
float multiplicar(int numeroUno, int numeroDos);
float dividir(int numeroUno, int numeroDos);
*/


int main()
{
    printf("Ingrese que operacion desea hacer: \n 1-Sumar ");
    printf("\n2 -Restar\n3-Multiplicar\n4-Dividir\n");
    int operacion = pedirDato();
    printf("Ingrese el primer numero");
    int numero1 = pedirDato();
    printf("Ingrese el segundo numero");
    int numero2 = pedirDato();

    calcular(1,1,2);
    calcular(3,7,1);
    calcular(10,2,4);
    calcular(2,3,3);
}

void calcular(int numeroUno,int numeroDos,int operacion)
{
    float  sumar = numeroUno + numeroDos;
    float   restar = numeroUno - numeroDos;
    float  multiplicar = numeroUno * numeroDos;
    float   division = numeroUno / numeroDos;
    float resultado;
    switch(operacion)
    {
        case 1:
                resultado = sumar;
                break;
        case 2:
                resultado = restar;
                break;
        case 3:
                resultado = multiplicar;
                break;
        case 4:
                resultado =  division;
                break;
    }

     /*switch(operacion)
    {
        case 1:
                resultado = numeroUno + numeroDos;
                break;
        case 2:
                resultado = numeroUno - numeroDos;
                break;
        case 3:
                resultado = numeroUno * numeroDos;
                break;
        case 4:
                resultado =  numeroUno / numeroDos;
                break;
    }*/
    printf("\nEl resultado es: %f",resultado);
}

void mostrar(float)
{
}



