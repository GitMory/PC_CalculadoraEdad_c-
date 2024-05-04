#include <stdio.h>
#include <time.h>
typedef struct
{
    int dia;
    int mes;
    int year;
}
fecha;

int calcular_edad(fecha datos)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int a = ((tm.tm_year + 1900) * 100 + tm.tm_mon + 1) * 100 + tm.tm_mday;
    int b = (datos.year * 100 + datos.mes) * 100 + datos.dia;
    return (a - b) / 10000;
}
int main(void)
{
    fecha datos;

    printf("\nIngrese Fecha de Nacimiento (ejm: 09/11/2000): ");
    scanf("%d/%d/%d",&datos.dia,&datos.mes, &datos.year);
    printf("Su edad es %d\n", calcular_edad(datos));

    return(0);
}
