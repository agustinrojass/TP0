#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ejercicio;

    do
    {
        do
        {
            printf("                                                           INGRESAR\n1.0: PROBLEMAS SECUENCIALES\n1.1: EJERCICIO 1 ......................................... |  11  |\n1.2: EJERCICIO 2 ......................................... |  12  |\n1.3: EJERCICIO 3 ......................................... |  13  |\n\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.1: EJERCICIO 1 ......................................... |  21  |\n2.2: EJERCICIO 2 ......................................... |  22  |\n2.3: EJERCICIO 3 ......................................... |  23  |\n2.4: EJERCICIO 4 ......................................... |  24  |\n2.5: EJERCICIO 5 ......................................... |  25  |\n\n3.0: PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS\n3.1: EJERCICIO 1 ......................................... |  31  |\n3.2: EJERCICIO 2 ......................................... |  32  |\n\n4.0: PROBLEMAS CON REPETICIONES\n4.1: EJERCICIO 1 ......................................... |  41  |\n4.2: EJERCICIO 2 ......................................... |  42  |\n4.3: EJERCICIO 3 ......................................... |  43  |\n4.4: EJERCICIO 4 ......................................... |  44  |\n4.5: EJERCICIO 5 ......................................... |  45  |\n4.6: EJERCICIO 6 ......................................... |  46  |\n\nFINALIZAR ................................................ |   0  |\n\nIndique la seccion de problemas: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=21 && ejercicio!=22 && ejercicio!=23 && ejercicio!=24 && ejercicio!=25 && ejercicio!=31 && ejercicio!=32 && ejercicio!=41 && ejercicio!=42 && ejercicio!=43 && ejercicio!=44 && ejercicio!=45 && ejercicio!=46 && ejercicio!=0);

        switch(ejercicio)
        {
            case 11:
            {
                printf("\n1.0: PROBLEMAS SECUENCIALES\n1.1: EJERCICIO 1\n");
                //Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.

                int inversion;

                printf("\nIngrese su inversion: ");
                scanf("%i", &inversion);

                inversion=inversion*1.02;

                printf("\nEn un mes, tendra $%i.\n", inversion);
            }
            break;
            case 12:
            {
                printf("\n1.0: PROBLEMAS SECUENCIALES\n1.2: EJERCICIO 2\n");
                //Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.

                float totalBruto2=0,descuento2=.85,totalNeto2=0;

                printf("\nIngrese el total bruto de la compra: ");
                scanf("%f",&totalBruto2);

                totalNeto2=totalBruto2*descuento2;

                printf("\nEl total neto de la compra es: $%.2f\n",totalNeto2);
            }
            break;
            case 13:
            {
                printf("\n1.0: PROBLEMAS SECUENCIALES\n1.3: EJERCICIO 3\n");
                //Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.

                int alumnos,varones,mujeres;
                float porcentajeVarones,porcentajeMujeres;

                printf("\nIngrese los alumnos varones: ");
                scanf("%i",&varones);
                printf("\nIngrese los alumnos mujeres: ");
                scanf("%i",&mujeres);

                alumnos=varones+mujeres;

                porcentajeVarones=varones*100/alumnos;
                porcentajeMujeres=mujeres*100/alumnos;

                printf("\nHay %i alumnos. Un %.2f%% de varones y un %.2f%% de mujeres.\n",alumnos,porcentajeVarones,porcentajeMujeres);
            }
            break;
            case 21:
            {
                printf("\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.1: EJERCICIO 1\n");
                //Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.

                float nota14,nota24,nota34,promedio4;

                printf("\nIngrese la primera nota del alumno: ");
                scanf("%f",&nota14);
                printf("\nIngrese la segunda nota del alumno: ");
                scanf("%f",&nota24);
                printf("\nIngrese la tercera nota del alumno: ");
                scanf("%f",&nota34);

                promedio4=(nota14+nota24+nota34)/3;

                printf("\nPromedio del alumno: %.2f\n",promedio4);
            }
            break;
            case 22:
            {
                printf("\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.2: EJERCICIO 2\n");
                //En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000.
                //¿Cuál será la cantidad que pagara una persona por su compra?

                float compraBruto5,descuento5,compraNeto5;

                printf("\nIngrese el total bruto de su compra: ");
                scanf("%f", &compraBruto5);

                if (compraBruto5>5000)
                {
                    descuento5=compraBruto5*.2;
                }
                else
                {
                    descuento5=0;
                }

                compraNeto5=compraBruto5-descuento5;

                printf("\nEl total neto es: $%.2f\n",compraNeto5);
            }
            break;
            case 23:
            {
                printf("\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.3: EJERCICIO 3\n");
                //Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera:
                //Si trabaja 40 horas o menos se le paga $300 por hora.
                //Si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.

                int horasTrabajadas6,salario6;

                printf("\nIngrese las horas trabajadas: ");
                scanf("%i",&horasTrabajadas6);

                if (horasTrabajadas6>40)
                {
                    salario6=40*300+(horasTrabajadas6-40)*400;
                }
                else
                {
                    salario6=horasTrabajadas6*300;
                }

                printf("\nEl obrero trabajo %i horas en la semana, por lo que le corresponden $%i.\n",horasTrabajadas6,salario6);
            }
            break;
            case 24:
            {
                printf("\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.4: EJERCICIO 4\n");
                //Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente.

                int primerNumero7,segundoNumero7;

                printf("\nIngrese el primer numero entero: ");
                scanf("%i",&primerNumero7);
                printf("\nIngrese el segundo numero entero: ");
                scanf("%i",&segundoNumero7);

                if(primerNumero7<segundoNumero7)
                {
                    printf("\n%i - %i\n",primerNumero7,segundoNumero7);
                }
                else
                {
                    printf("\n%i - %i\n",primerNumero7,segundoNumero7);
                }
            }
            break;
            case 25:
            {
                printf("\n2.0: PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES\n2.5: EJERCICIO 5\n");
                //Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
                //Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un descuento del 10%.

                int camisas8,total8;

                printf("\nCada camisa sale $1000.\n\nIngrese la cantidad de camisas:\n");
                scanf("%i",&camisas8);

                if(camisas8<3)
                {
                    total8=1000*camisas8*0.9;
                }
                else
                {
                    total8=1000*camisas8*0.8;
                }

                printf("\nEl total es $%i.\n",total8);
            }
            break;
            case 31:
            {
                printf("\n3.0: PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS\n3.1: EJERCICIO 1\n");
                //Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume.

                int primerNumero1,segundoNumero1,resultado1;

                printf("\nIngrese el primer numero entero: ");
                scanf("%i",&primerNumero1);
                printf("\nIngrese el segundo numero entero: ");
                scanf("%i",&segundoNumero1);

                if(primerNumero1==segundoNumero1)
                {
                    resultado1=primerNumero1*segundoNumero1;
                }
                else
                {
                    if(primerNumero1>segundoNumero1)
                    {
                        resultado1=primerNumero1-segundoNumero1;
                    }
                    else
                    {
                        resultado1=segundoNumero1-primerNumero1;
                        }
                }

                printf("\nEl primer numero es %i, y el segundo es %i, entonces el resultado es %i.\n",primerNumero1,segundoNumero1,resultado1);
            }
            break;
            case 32:
            {
                printf("\n3.0: PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS\n3.2: EJERCICIO 2\n");
                //Leer tres números diferentes e imprimir el número mayor de los tres.

                int primerNumero2,segundoNumero2,tercerNumero2,mayor2=0;

                printf("\nIngrese el primer numero entero: ");
                scanf("%i",&primerNumero2);
                printf("\nIngrese el segundo numero entero: ");
                scanf("%i",&segundoNumero2);
                printf("\nIngrese el tercer numero entero: ");
                scanf("%i",&tercerNumero2);

                if(primerNumero2>=segundoNumero2 && primerNumero2>=tercerNumero2)
                {
                    mayor2=primerNumero2;
                }
                else
                {
                    if(segundoNumero2>tercerNumero2)
                    {
                        mayor2=segundoNumero2;
                    }
                    else
                    {
                        mayor2=tercerNumero2;
                    }
                }

                printf("\nEl mayor numero es :%i\n",mayor2);
            }
            break;
            case 41:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.1: EJERCICIO 1\n");
                //Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1.

                int i11,nota11,suma11=0;
                float promedio11;

                for(i11=1;i11<8;i11++)
                {
                    printf("\nIngrese la nota: ");
                    scanf("%i",&nota11);

                    suma11=suma11+nota11;
                }

                promedio11=suma11/7;

                printf("\nEl promedio de las 7 notas es de %.2f\n",promedio11);
            }
            break;
            case 42:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.2: EJERCICIO 2\n");
                //Leer 10 números y obtener su cubo y su cuarta.

                int i12,numero12,cubo12,cuarta12;

                for(i12=1;i12<11;i12++)
                {
                    printf("\nIngrese 1 numero: ");
                    scanf("%i",&numero12);

                    cubo12=pow(numero12,3);
                    cuarta12=pow(numero12,4);

                    printf("%i al cubo es %i, y a la cuarta es %i",numero12,cubo12,cuarta12);
                }
            }
            break;
            case 43:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.3: EJERCICIO 3\n");
                //Leer 10 números e imprimir solamente los números positivos.

                int i13,numero13;

                for(i13=1;i13<11;i13++)
                {
                    printf("\nIngrese 1 numero: ");
                    scanf("%i",&numero13);

                    if(numero13>0)
                    {
                        printf("\n%i es positivo\n",numero13);
                    }
                }
            }
            break;
            case 44:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.4: EJERCICIO 4\n");
                //Leer 15 números negativos y convertirlos en positivos e imprimir dichos números.

                int i14,numero14,positivo14;

                for(i14=1;i14<16;i14++)
                {
                    printf("\nIngrese 1 numero negativo: ");
                    scanf("%i",&numero14);
                    positivo14=abs(numero14);
                    printf("\nEl numero positivo es: %i\n",positivo14);
                }
            }
            break;
            case 45:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.5: EJERCICIO 5\n");
                //Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos. Realizar un algoritmo para calcular la calificación promedio y la calificación más baja de todo el grupo.

                int nota5,max5=0,suma5=0,i5;
                float promedio5;

                for(i5=1;i5<41;i5++)
                {
                printf("\nIngrese las notas de los alumnos: ");
                scanf("%i",&nota5);

                suma5=suma5+nota5;

                if(nota5>max5)
                {
                    max5=nota5;
                }
                }

                promedio5=suma5/40;

                printf("\nEl promedio es: %f\n\nLa nota maxima es: %i",promedio5,max5);
            }
            break;
            case 46:
            {
                printf("\n4.0: PROBLEMAS CON REPETICIONES\n4.6: EJERCICIO 6\n");
                //Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando, el multiplicador y el producto.

                int i16,numero16;

                printf("\nIngrese 1 numero: ");
                scanf("%i",&numero16);

                for(i16=1;i16<11;i16++)
                {
                    printf("\n%i x %i = %i\n",numero16,i16,numero16*i16);
                }
            }
            break;
        }
    }
    while(ejercicio!=0);


    printf("TP0 TERMINADO");

    printf("Versión 1");

    return 0;
}
