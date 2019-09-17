#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n = 8;
    int vetorA[n];
    int vetorB[n];
    int aux;


    for(int i = 0; i<n; i++){
        printf("Digite o valor de A: \n");
        scanf("%d",&vetorA[i]);
    }

    for(int i = 0; i<n; i++){
        printf("Digite o valor de B: \n");
        scanf("%d",&vetorB[i]);
    }

    for(int i = 0; i<n; i++){
        aux = vetorA[i];
        vetorA[i] = vetorB[i];
        vetorB[i] = aux;
   }

   printf("Os valores de A são: \n");
   for(int i = 0; i< n; i++){
        printf("%d, ", vetorA[i]);
   }

    printf("\nOs valores de B são: \n");
   for(int i = 0; i< n; i++){
        printf("%d, ", vetorB[i]);
   }

}

