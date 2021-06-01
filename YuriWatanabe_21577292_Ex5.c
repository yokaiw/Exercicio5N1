#include <stdio.h>
/*
Se o caractere escolhido for a letra a, o programa deve calcular, armazenar o resultado em uma variável e 
exibir o valor de uma média aritmética. 
No entanto, se a letra escolhida for a letra b, o programa deve calcular, armazenar o resultado em um uma variável e 
exibir o valor de uma média ponderada em que a nota 1 tem peso 4 e a nota 2 tem peso 6.
Por fim, se a letra escolhida for a letra c, o programa  deve calcular, armazenar o resultado em um uma variável e 
exibir o valor de uma média ponderada em que a nota 1 tem peso 9 e a nota 2 tem peso 1.
*/
int main(){
    int nota1,nota2;
    char caractere;
    int mediaAritmetica;
    float mediaPonderada;
    float mediaLetraC;
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
     
    printf("Escolha A para Media Aritmedica.\nB para N1 com peso 4 e N2 com peso 6.\n C para N1 com peso 9 e N2 com peso 1: ");
    scanf(" %c",&caractere);

    if(caractere =='a' || caractere == 'A'){
        mediaAritmetica = (nota1  + nota2) / 2.0;
        printf("%d", mediaAritmetica);
    }
    else if(caractere =='b'|| caractere =='B'){
     mediaPonderada = ((nota1 * 4) + (nota2 * 6)) / 10.0;
     printf("%.2f", mediaPonderada);

    }
    else if( caractere =='c' || caractere =='C'){
         mediaLetraC = ((nota1 * 9 + nota2 * 1)) / 10.0;
         printf("%.2f", mediaLetraC);
    }
    return 0;
}