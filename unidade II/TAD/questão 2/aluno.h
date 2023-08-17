#include"disciplina.h"
//TAD:ALUNO
typedef struct aluno Aluno;

//cria um aluno
Aluno* cria_aluno(char nome[], int matricula);

//matricula disciplina aluno

void matricula_disciplina (Aluno* aluno, Disciplina* disciplina);

//exclui um aluno
void exclui_aluno(Aluno* aluno);