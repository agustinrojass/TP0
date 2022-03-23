#include <stdio.h>
#include <stdlib.h>

int ps();
int pcss();
int pcsc();
int pcr();
int main()
{
    int problema;
    do
    {
        do
        {
            printf("\nPROBLEMAS                                                  INGRESAR");
            printf("\nSECUENCIALES .................................................... 1");
            printf("\nCONDICIONALES SELECTIVOS SIMPLES ................................ 2");
            printf("\nCONDICIONALES SELECTIVOS COMPUESTOS ............................. 3");
            printf("\nCON REPETICIONES ................................................ 4");
            printf("\nFINALIZAR ....................................................... 0\n");
            printf("\nIndique la seccion de problemas: ");
            scanf("%i",&problema);
        }
        while(problema!=1 && problema!=2 && problema!=3 && problema!=4 && problema!=0);
        switch(problema)
        {
            case 1:
            {
                ps();
            }
            break;
            case 2:
            {
                pcss();
            }
            break;
            case 3:
            {
                pcsc();
            }
            break;
            case 4:
            {
                pcr();
            }
            break;
        }
    }
    while(problema!=0);
    printf("\nTP0 TERMINADO\n");
    printf("\nVersion 2.1\n");
    return 0;
}
int ps()
{
    int ejercicio;
    do
    {
    printf("\nPROBLEMAS SECUENCIALES                                     INGRESAR");
    printf("\nEJERCICIO 1 ..................................................... 1");
    printf("\nEJERCICIO 2 ..................................................... 2");
    printf("\nEJERCICIO 3 ..................................................... 3\n");
    printf("\nIngrese el ejercicio: ");
    scanf("%i",&ejercicio);
    }
    while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3);
    printf("\nPROBLEMAS SECUENCIALES - EJERCICIO %i\n",ejercicio);
    switch(ejercicio)
    {
        case 1:
        {
            //Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
            int inversion;
            printf("\nIngrese su inversion: ");
            scanf("%i", &inversion);
            inversion=inversion*1.02;
            printf("\nEn un mes, tendra $%i.", inversion);
        }
        break;
        case 2:
        {
            //Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
            float totalBruto2=0,descuento2=.85,totalNeto2=0;
            printf("\nIngrese el total bruto de la compra: ");
            scanf("%f",&totalBruto2);
            totalNeto2=totalBruto2*descuento2;
            printf("\nEl total neto de la compra es: $%.2f",totalNeto2);
        }
        break;
        case 3:
        {
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
            printf("\nHay %i alumnos. Un %.2f%% de varones y un %.2f%% de mujeres.",alumnos,porcentajeVarones,porcentajeMujeres);
        }
        break;
    }
}
int pcss()
{
    int ejercicio;
    do
    {
    printf("\nPROBLEMAS CONDICIONALES SELECTIVOS SIMPLES                 INGRESAR");
    printf("\nEJERCICIO 1 ..................................................... 1");
    printf("\nEJERCICIO 2 ..................................................... 2");
    printf("\nEJERCICIO 3 ..................................................... 3");
    printf("\nEJERCICIO 4 ..................................................... 4");
    printf("\nEJERCICIO 5 ..................................................... 5\n");
    printf("\nIngrese el ejercicio: ");
    scanf("%i",&ejercicio);
    }
    while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5);
    printf("\nPROBLEMAS CONDICIONALES SELECTIVOS SIMPLES - EJERCICIO %i\n",ejercicio);
    switch(ejercicio)
    {
        case 1:
        {
            //Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
            float nota14,nota24,nota34,promedio4;
            printf("\nIngrese la primera nota del alumno: ");
            scanf("%f",&nota14);
            printf("\nIngrese la segunda nota del alumno: ");
            scanf("%f",&nota24);
            printf("\nIngrese la tercera nota del alumno: ");
            scanf("%f",&nota34);
            promedio4=(nota14+nota24+nota34)/3;
            printf("\nPromedio del alumno: %.2f",promedio4);
        }
        break;
        case 2:
        {
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
            printf("\nEl total neto es: $%.2f",compraNeto5);
        }
        break;
        case 3:
        {
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
            printf("\nEl obrero trabajo %i horas en la semana, por lo que le corresponden $%i.",horasTrabajadas6,salario6);
        }
        break;
        case 4:
        {
            //Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente.
            int primerNumero7,segundoNumero7;
            printf("\nIngrese el primer numero entero: ");
            scanf("%i",&primerNumero7);
            printf("\nIngrese el segundo numero entero: ");
            scanf("%i",&segundoNumero7);
            if(primerNumero7<segundoNumero7)
            {
                printf("\n%i - %i",primerNumero7,segundoNumero7);
            }
            else
            {
                printf("\n%i - %i",primerNumero7,segundoNumero7);
            }
        }
        break;
        case 5:
        {
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
            printf("\nEl total es $%i.",total8);
        }
        break;
    }
}
int pcsc()
{
    int ejercicio;
    do
    {
    printf("\nPROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS              INGRESAR");
    printf("\nEJERCICIO 1 ..................................................... 1");
    printf("\nEJERCICIO 2 ..................................................... 2\n");
    printf("\nIngrese el ejercicio: ");
    scanf("%i",&ejercicio);
    }
    while(ejercicio!=1 && ejercicio!=2);
    printf("\nPROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS - EJERCICIO %i\n",ejercicio);
    switch(ejercicio)
    {
        case 1:
        {
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
            printf("\nEl primer numero es %i, y el segundo es %i, entonces el resultado es %i.",primerNumero1,segundoNumero1,resultado1);
        }
        break;
        case 2:
        {
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
            printf("\nEl mayor numero es :%i",mayor2);
        }
        break;
    }
}
int pcr()
{
    int ejercicio;
    do
    {
    printf("\nPROBLEMAS CON REPETICIONES                                 INGRESAR");
    printf("\nEJERCICIO 1 ..................................................... 1");
    printf("\nEJERCICIO 2 ..................................................... 2");
    printf("\nEJERCICIO 3 ..................................................... 3");
    printf("\nEJERCICIO 4 ..................................................... 4");
    printf("\nEJERCICIO 5 ..................................................... 5");
    printf("\nEJERCICIO 6 ..................................................... 6\n");
    printf("\nIngrese el ejercicio: ");
    scanf("%i",&ejercicio);
    }
    while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6);
    printf("\nPROBLEMAS CON REPETICIONES > EJERCICIO %i\n",ejercicio);
    switch(ejercicio)
    {
        case 1:
        {
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
            printf("\nEl promedio de las 7 notas es de %.2f",promedio11);
        }
        break;
        case 2:
        {
            //Leer 10 números y obtener su cubo y su cuarta.
            int i12,numero12,cubo12,cuarta12;
            for(i12=1;i12<11;i12++)
            {
                printf("\nIngrese 1 numero: ");
                scanf("%i",&numero12);
                cubo12=pow(numero12,3);
                cuarta12=pow(numero12,4);
                printf("\n%i^3=%i",numero12,cubo12);
                printf("\n%i^4=%i\n",numero12,cuarta12);
            }
        }
        break;
        case 3:
        {
            //Leer 10 números e imprimir solamente los números positivos.
            int i13,numero13;
            for(i13=1;i13<11;i13++)
            {
                printf("\nIngrese 1 numero: ");
                scanf("%i",&numero13);
                if(numero13>0)
                {
                    printf("\n%i es positivo",numero13);
                }
            }
        }
        break;
        case 4:
        {
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
        case 5:
        {
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
        case 6:
        {
            //Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando, el multiplicador y el producto.
            int i16,numero16;
            printf("\nIngrese 1 numero para saber su tabla: ");
            scanf("%i",&numero16);
            for(i16=1;i16<11;i16++)
            {
                printf("%ix%i=%i\n",numero16,i16,numero16*i16);
            }
        }
        break;
    }
}
