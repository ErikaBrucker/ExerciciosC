#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float temperaturaF, temperaturaC;

    printf("Digite a temperatura em Fahrenheit: \n");
    scanf("%f",&temperaturaF);
    temperaturaC = (((temperaturaF - 32)* 5)/9);
    printf("A temperatura em Celsius é %.2f", temperaturaC);

}
