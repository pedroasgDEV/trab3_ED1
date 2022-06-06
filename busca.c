//Modulos
#include "busca.h"

//Cria um vetor de TBlocos
TBlocos *newTBlocosVetor (int qtd){
    return (TBlocos *) malloc(qtd * sizeof(TBlocos));
}

//Add TBocos ao vetor
TBlocos addTBlocos (int qnt_blocos, double vlm, double x){
    TBlocos aux; //Cria uma variavel auxiliar

    //Preenche a variavel auxiliar
    aux.x = x;
    aux.qnt_blocks = qnt_blocos;
    aux.vlm = vlm;
    aux.h = binSearch(0,3 * aux.x, aux);

    return aux; //Retorna a variavel auxiliar
}

//Faz a pesquisa binaria
double binSearch(double min, double max, TBlocos block){
    if(max == 0) return 0;

    double med = (min + max)/2; //Pega o ponto medio
    double vlm = med * block.x * block.x * 2 * block.qnt_blocks; //Calula o volume de mateira prima a ser usada

    if(min == max && vlm != block.vlm) return -1; //Se não tiver encontrado nada
    else if(vlm > block.vlm) return binSearch(min, med + .001, block); //Se o valor estiver antes do ponto medio
    else if(vlm < block.vlm) return binSearch(med - .001, max, block); //Se o valor estiver depois do ponto medio
    else return med; //Se o valor for o do ponto medio */
}

//Imprime o vetor
void imprimeTBlocosVetor(TBlocos *blocks, int s){
    for(int i = 0; i < s; i++){
        if(blocks[i].h == 0) printf("Impossivel definir a altura do corte\n");
        else if(blocks[i].h == -1) printf("Altura do corte igual ou maior que a camara de exposicao\n");
        else printf("%.3lf\n", blocks[i].h);
    }
}

//Libera o vetor de TBlocos
void freeTBlocosVetor(TBlocos **blocks){
    free(*blocks);
    *blocks = NULL;
}
