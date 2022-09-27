//Construa uma estrutura aluno com nome, numero de matricula e curso e imprima os dados na tela

#include <stdio.h>
#include <string.h>

int main(){
  //Definição da estrutura

  struct aluno{
  char nome [50];
  int nMatricula;
  char curso [50];
  };

  //Declara a estrutura
  struct aluno informacoes;

  //Inicialização dos membros das variáveis da estrutura
  strcpy(informacoes.nome, "Vanessa");
  informacoes.nMatricula = 20220927;
  strcpy(informacoes.curso, "Programação");

  printf("Nome: %s\nNumero: %i\nCurso: %s", informacoes.nome,informacoes.nMatricula,informacoes.curso);

  return 0;
}