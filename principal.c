//Modulos
#include "busca.h"

int main(){
    int s; //Quantidade de casos
    int qnt_blocos; //Quantidade de blcos
    double vlm, x; //Volume total da materia prima disponivel e parametro de dimesões do bloco

    scanf("%d", &s);

    TBlocos *blocks = newTBlocosVetor(s); //Cria um vetor de blocos

    for(int i = 0; i < s; i++){
        scanf("%d %lf %lf", &qnt_blocos, &vlm, &x);
        blocks[i] = addTBlocos(qnt_blocos, vlm, x); //Add TBlocks ao vetor
    } 

    imprimeTBlocosVetor(blocks, s); //Imprime o vetor

    freeTBlocosVetor(&blocks); //Libera o vetor

    return 0;
}