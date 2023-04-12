#include<stdio.h>
#include<locale.h>
int main()
{
 setlocale(LC_ALL,"");
 int n, i, c1, c2, c3;
 float v, total, cat1, cat2, cat3;
 total = 0;
 cat1 = 0;
 cat2 = 0;
 cat3 = 0;
 c1 = 0;
 c2 = 0;
 c3 = 0;
 do{
 printf("Ingrese la cantidad de ventas realizadas en el día.\n");
 scanf("%i",&n);
 if (n<=0){
 printf("Dato invalido. Ingrese nuevamente.\n");
 }
 }
 while(n<=0);
 for(i=1;i<=n;i++){
 do{
 printf("Ingrese monto de la venta %i\n",i);
 scanf("%f",&v);
 if(v<=0){
 printf("Dato invalido. Ingrese nuevamente.\n");
 }
 }
 while(v<=0);
 if(v>1000){
 cat1 = cat1 + v;
 c1 = c1 + 1;
 }
 else{
 if(v>500 && v<=1000){
 cat2 = cat2 + v;
 c2 = c2 + 1;
 }
 else{
 cat3 = cat3 + v;
 c3 = c3 + 1;
 }
 }
 total = total + v;
 }
 printf("\nCategoría 1(Ventas mayores a $1000):\nCantidad de ventas: %i\nMonto de ventas: $%.2f\n",c1,cat1);
 printf("\nCategoría 2(Ventas mayores a $500 y menores o iguales a $1000):\nCantidad de ventas: %i\nMonto de ventas: $%.2f\n",c2,cat2);
 printf("\nCategoría 3(Ventas menores o iguales a $500):\nCantidad de ventas: %i\nMonto de ventas: $%.2f\n",c3,cat3);
 printf("\nMonto total de ventas: $%.2f\n",total);
 return 0;
}
