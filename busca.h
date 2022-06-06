#ifndef BUSCA_H
#define BUSCA_H

//Bibliotecas
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    double h; //Altura dos blocos 
    double x; //Parametro de dimensões do bloco
    double vlm; //Volume total da materia prima disponivel
    int qnt_blocks; //Quantidade de blocos
}TBlocos;

TBlocos *newTBlocosVetor (int qtd); //Cria um vetor de TBlocos
TBlocos addTBlocos (int qnt_blocos, double vlm, double x); //Add TBocos ao vetor
double binSearch (double min, double max, TBlocos block); //Faz a pesquisa binaria
void imprimeTBlocosVetor(TBlocos *blocks, int s); //Imprime o vetor
void freeTBlocosVetor(TBlocos **blocks); //Libera o vetor de TBlocos

#endif