#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int vida,arma,daño,hacha,espada,arco,des1,des1_1,situ2,situ3,situ4,situ5,bestia,num,num2,num3;
  char nombre[20];
  vida=200;
  bestia=150;
  printf ("Ingrese el nombre de su heroe/heroina\n");
  scanf("%s",&nombre);
  printf("Su vida incial es de %i pero puede bajar dependiendo sus acciones\n",vida);
  printf("Escoga su arma\n1.Hacha\n2.Espada\n3.Arco\n");
  scanf("%i",&arma);
  switch(arma){
    case 1:
      printf("Usted ha seleccionado un hacha, tiene un daño de 100 pero su velocidad no es tan alta\n");
      hacha=100;
    break;
    case 2:
      printf("Usted ha seleccionado una espada, tiene un daño de 70 y velocidad es alta\n");
      espada=70;
    break;
    case 3:
      printf("Usted ha seleccionado un arco, tiene un daño de 80 y te permita atacar a distancia\n");
      arco=80;
    break;
  }
  printf("%s toda tu vida has vivido en un pueblo, pero ta has aburrido de la vida alli asi que un dia piensas y si me voy\n Toma la desicion 1.irte o 2.quedarte\n",nombre);
  scanf("%i",&des1);
  switch(des1){
    case 1:
    printf("Has salido de la aldea en el camino te topas con una persona\nEsta intenta decirte algo parece asustado decides oirlo y eres adveritdo parece ser que hay una especie de bestia acechando la descripcion logra asustarte y tienes decidir si 1.regresas o 2.no\n");
      scanf("%i",&des1_1);
     if (des1_1==1){
       printf("Usted ha regresado a la Aldea\n"); 
     } else{
          printf("Usted decidio salir de todas formas\n");
          printf("Decide caminar un rato y empieza a escuchar un ruido que constantemente va incrementando parece ser el terrible monstruo descrito\nEra una especie de troll monstruoso te toca pelear, sacas tu arma\n");
         break;
       }
    case 2:
    printf("Usted esta en la aldea\n");
    printf("Decide caminar un rato para dejar de pensar en lo aburrido que es estar viviendo ahi y de la naa llega una persona corriendo, parecia gritar por auxilio y en direccion de tu casa aparece una bestia como un troll monstruoso acabando con tu hogar y poniendose enfrente tuyo te toca luchar\n");

    break;
  }
  printf("Luchas contra la bestia\n Y das un golpe\n");
  if (arma==1){
    daño=bestia-hacha;
    printf("Has hecho %i de daño y le quedan %i al monstruo\n",hacha,daño);
  }
  if (arma==2){
    daño=bestia-espada;
    printf("Has hecho %i de daño y le quedan %i al monstruo\n",espada,daño);
  }
  if (arma==1){
    daño=bestia-arco;
    printf("Has hecho %i de daño y le quedan %i al monstruo\n",arco,daño);
  }
  printf("La bestia regresa el ataque intentas huir\n");
  srand(time(0));
  num = rand() % 3 + 1;
  if (num==1){
    vida=vida-100;
    printf("Recibes daño te queda %i de vida",vida);
  }else{
    if(num==2){
      printf("Evitas el ataque y mantienes tu vida de %i\n",vida);
    }else{
      vida=vida-175;
      printf("Recibes un ataque critco y terminas bastante herido, tu vida baja hasta %i\n",vida);
    }
  }
  printf("Te las arreglas para correr vas 1.derecha o 2.izquierda\n");
  scanf("%i",&situ2);
  switch(situ2){
    case 1:
    printf("Corres un momento lo sufuciente como perder de vista al monstuo\n");
    srand(time(0));
    num2 = rand() % 3 + 1;
    if(num2==2){
      vida=vida-25;
      printf("Caes en un hueco y recibes 25 de daño y te quedan %i de vida\n",vida);
    }
    break;
    case 2:
    printf("Corres un momento lo sufuciente como perder de vista al monstuo,estas en un suelo un tanto inestable\n");
    srand(time(0));
    num3 = rand() % 2 + 1;
    if(num2==2){
      vida=vida-50;
      printf("Caes en un hueco y recibes 25 de daño y te quedan %i de vida\n",vida);
    }
    break;
  }
  if (vida>0){
    printf("Sigue tu aventura y sigues caminando sientes al monstruo cerca 1.Corres o te escondes 2\n");
    scanf("%i",&situ3);
    switch(situ3){
      case 1:
      printf("Corres rapidamente lo mas lejos que puedas del monstruo\n Te cansas y piensas en darle un golpe 1.Peleas o 2. Sigues huyendo\n");
      scanf("%i",&situ4);
      switch(situ4){
        case 1:
        if(arma==1){
          vida=vida-25;
          printf("Intestaste lanzar un golpe pero el monstruo fue mas rapido y te dio 25 de daño pero pudiste escapar pero te queda %i de vida\n",vida);
        }
        if(arma==2){
          bestia=bestia-espada;
          printf("Logras acertar el golpe y bajas le vida del mostruo hasta %i y lo cual te da oportunidad escapar\n",bestia);
        }
        if(arma==3){
          bestia=bestia-arco;
          printf("Logras acertar el golpe y bajas le vida del mostruo hasta %i y lo cual te da oportunidad escapar\n",bestia);
          if(bestia<=0){
            printf("Lograste acabar con la bestia\n");
          }
        }
      }
      break;
        case 2:
        printf("Sigues huyendo pero no pasa mucho tiempo hasta que te alcanza y no te queda mas que pelear un 1.ataque rapido y de cerca o 2.intentar esquivar el golpe\n");
        switch(situ5){
          case 1:
            if(arma==2){
            printf("Acertaste el golpe y huyes sin recibir daño\n");
          }else{
            vida=vida-25;
            printf("Recibes 25 de daño y tu vida baja hasta %i\n",vida);
        }
          break;
          case 2:
          vida=vida-25;
          printf("Te resulta imposible esquivar y te baja 25 de vida y te quedan %i de vida\n",vida);
        }
        
      break;
    }
    if (vida>0){
      printf("Felicidades sobreviviste a tu aventura\n");
    }else{
      printf("Tus heridas fueron demasido graves y lamentablemente moriste\n");
    }
  }else{
     printf("Tus heridas fueron demasido graves y lamentablemente moriste\n");
  }
  return 0;
}