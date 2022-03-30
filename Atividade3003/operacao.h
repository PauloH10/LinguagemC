#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

void gravar(){

    FILE *arquivo;
    arquivo = fopen("dados.txt","w");
    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa
    }
    curso cur, *pcur;
    unidade uni,*puni;

    pcur = &cur;
    puni = &uni;

    printf("Entre com o nome do curso:\n");
    fgets(pcur->nomedocurso,30,stdin);

    printf("Entre com a descrição do aluno:\n");
    fgets(pcur->descricao,90,stdin);

    printf("Entre com a carga horaria do aluno:\n");
    fgets(pcur->cargahoraria,10,stdin);

    printf("Entre com o data de inicio do curso:\n");
    fgets(pcur->datainicio,10,stdin);

    printf("Entre com a data de termino do curso:\n");
    fgets(pcur->datatermino,10,stdin);

    printf("Entre com o preço do curso:\n");
    fgets(pcur->preco,10,stdin);

    printf("Entre com a unidade do curso:\n");
    fgets(puni->nomedaunidade,50,stdin);

    printf("Entre com a localização:\n");   
    fgets(puni->localizacao,20,stdin);

    printf("Entre com o horario de funcionamento do curso:\n");
    fgets(puni->horariodefuncionamento,20,stdin);

    printf("Entre com o telefone de contato:\n");
    fgets(puni->telefonedecontato,20,stdin);
    /* gravar os nomes dos arquivos */

    fprintf(arquivo,pcur->nomedocurso);
    fprintf(arquivo,pcur->descricao);
    fprintf(arquivo,pcur->cargahoraria);
    fprintf(arquivo,pcur->datainicio);
    fprintf(arquivo,pcur->preco);
    fprintf(arquivo,puni->nomedaunidade);
    fprintf(arquivo,puni->localizacao);
    fprintf(arquivo,puni->horariodefuncionamento);
    fprintf(arquivo,puni->telefonedecontato);

    fclose(arquivo);
}