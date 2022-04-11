#include <stdio.h>
#include <stdlib.h>

int main(void){

    //Setando as variaveis
    int num; // numero base... o que vai pegar o que o usuario digitar
    int maior = 0; // setando um valor fixo mais baixo para nos basear-mos em numeros maiores 
    int menor = num; // o menor vai ser igual num dessa forma poderemos pegar de todos os inputs aquele que obtiver o menor valor

    //variavel para o contador do laço    
    int i = 0;


    //iniciando o laço na estrutura [for]
    for (i = 1; i <= 15 ; i++){

        //capturando as informações do usuario
        printf("%d° - Digite um numero: ",i);
        scanf("%d", &num);
    
        //inicando as comparações para maior e menor
        //maior
        if (num > maior){
            maior = num;
        }
        //menor
        if (num < menor){
            menor = num;
        };
    }

    //printando o resultado na tela
    printf("O maior numero foi: %d \n e o menor foi: %d \n", maior, menor);
    
    return 0;
}
