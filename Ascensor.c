#include <stdio.h>

int main(void) {
  int pisoA=0,orden,i,pisoL=0,cont,pisoS=0;
do{
    printf("Seleccione un opcion\n1.Llamar al ascensor\n2.Seleccionar piso\n3.Mostrar piso actual\n4.Salir\n");
    scanf("%i",&orden);
    switch(orden){
    case 1:
    printf("En que piso se encuentra del 0 al 9?\n");
    scanf("%i",&pisoL);
    cont=pisoA-1;
    while(cont<pisoL){
        cont=cont+1;
        printf("El ascensor esta en el piso %i\n",cont);
         if (cont==pisoL){
        printf("Ha llegado a su piso\n");
    }
    pisoA=cont;
    }
    break;
    case 2:
    printf("A que piso desea ir\n");
    scanf("%i",&pisoS);
    for (int i=pisoA;i<=pisoS;i++){
        printf("Esta en el piso %i\n",i);
        if (i==pisoS){
        printf("Ha llegado a su piso\n");
    }
    pisoA=pisoS;
    }
    break;
    case 3:
    pisoA=pisoA-1;
    switch(pisoA){
      case 0:
      printf("Planta baja\n");
      break;
      case 1:
      printf("Primer piso\n");
      break;
      case 2:
      printf("Tercer piso\n");
      break;
      case 3:
      printf("Cuarto piso\n");
      break;
      case 4:
      printf("Quinto piso\n");
      break;
      case 5:
      printf("Sexto piso\n");
      break;
      case 6:
      printf("Septimo piso\n");
      break;
      case 7:
      printf("Octavo Piso\n");
      break;
      case 8:
      printf("Noveno piso\n");
      break;
      case 9:
      printf("Ultimo piso\n");
      break;

    }
    break;
    case 4:
    printf("Ha salido del programa\n");
    break;
  }
}while(orden!=4);
return 0;
}
