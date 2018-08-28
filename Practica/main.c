#include <stdio.h>
#include <stdlib.h>

/**Ingresa numeros.
1-cantidad positivos
2-cantidad negativos
3-cantidad ceros
4-cantidad pares
5-promedio positivos
6-promedio negativos
7-diferencia entre positivos y negativos
8- suma negativos
9- suma positivos
10-Max y Min
*/

int cantidadPositivos(int);
int cantidadNegativos(int);
int cantidadCeros(int);
int cantidadPares(int);
float promedioNeg(int);
float diferenciaPosNeg(int);
float sumaNeg(float);
float sumaPos(float);
float MaxMin(float);
void menu();


int main()
{
    char seguir;
    int opcion;
    int numero;
    //float promedio;

    do
    {
            printf("ingrese un numero: ");
            scanf("%d",&numero);

            switch(opcion)
        {

            case 2:
                if(!(cantidadPositivos(numero)))
                {
                    printf("ERROR\n");
                }
            break;
            case 3:

                if(!(cantidadNegativos(numero)))
                {
                    printf("ERROR\n");
                }

            break;
            case 4:
                if(!(cantidadCeros(numero)))
                {
                    printf("ERROR\n");
                }

            break;
            case 5:

                if(!(cantidadPares(numero)))
                {
                    printf("ERROR\n");
                }

            break;
            case 6:
              //promedio=(float)(acumulador/contador);
            break;
            case 7:
                //promedio=(float)(acumulador/contador);
            break;
            case 8:

            break;
            case 9:

            break;
            case 10:

            break;
            case 11:
            break;
            default:
                printf("error opcion no valida");
                break;
        }


        /**puts("\t\tingrese 'n' para salir \t\t");
        printf("ingrese su opcion:  \n");
        fflush(stdin);
        scanf("%c",&seguir);*/


    }while(seguir=='n');


    return 0;
}


void menu()
{
    printf("--------Bienvenidos------\n\n");
    printf("Elija la opcion que desee\n");
    printf("1- Cantidad de positivos\n");
    printf("2- Cantidad de Negativos\n");
    printf("3- Cantidad de Ceros\n");
    printf("4- Cantidad de Pares\n");
    printf("5- Promedio de positivos\n");
    printf("6- Promedio de Negativos\n");
    printf("7- Diferencia entre positivos y negativos\n");
    printf("8- Suma negativos\n");
    printf("9- Suma positivos\n");
    printf("10- MAX y MIN");

}
int cantidadPositivos(int numero)
{
    int contador=0;
    int acumulador=0;
    if(numero > 0)
    {
        contador++;
        acumulador+=numero;

    }


    return 0;
}

int cantidadNegativos(int numero)
{
    int contador=0;
    int acumulador=0;
    if(numero < 0)
    {
        contador++;
        acumulador+=contador;
    }

    return 0;
}

int cantidadCeros(int numero)
{
    int contador=0;
    if(numero == 0)
    {
        contador++;
    }
    return 0;
}

int cantidadPares(int numero)
{
    int contador=0;

    if(numero%2==0)
    {
        contador++;
    }
    return 0;
}

