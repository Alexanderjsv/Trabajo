#include <stdio.h>

float suma(int num1,int num2){
    float resultado;
    resultado=num1+num2;
    return resultado;
}
 
float resta(int num1, int num2){
    float resultadores;
    resultadores=num1-num2;
    return resultadores;
}

float div(int num1, int num2){
    float resultado;
    resultado=num1/num2;
    if (num2==0){
        printf("Numero no valido\n");
    }else{
        return resultado;
    }  
}

float multi(int num1,int num2){
    float resultado;
    resultado=num1*num2;
    return resultado;
}

int main(){
    int num1,num2;
    printf("num1\n");
    scanf("%d",&num1);
    printf("num2\n");
    scanf("%d",&num2);

    printf("%.2f\n",suma(num1,num2));

}
