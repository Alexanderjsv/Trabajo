#include<stdio.h>
#include<locale.h>
int main()
{
 setlocale(LC_ALL,"");
 int i;
 float ahorro, suma;
 for(i=1;i<=12;i++){
 do{
 printf("Ingrese ahorro del mes %i:\n",i);
 scanf("%f",&ahorro);
 if(ahorro<0){
 printf("Valor invalido. Ingrese nuevamente.\n");
 }
 }
 while(ahorro<0);
 suma = suma + ahorro;
 printf("El ahorro acumulado hasta el momento es de: $%.2f\n",suma);
 }
 printf("\nEl ahorro total del año ha sido de: $%.2f\n",suma);
 return 0;
}
