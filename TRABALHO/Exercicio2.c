#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, volume;


    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);
    if(raio < 0){
        printf("Erro! O valor não pode ser negativo. \n");
        //return;
    }else {
        volume = (4*3.14*(raio*raio*raio))/3;
        printf("%.2f", volume);
    }

}
