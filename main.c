#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct texto {
              char *palavra[100];
              int TAM;
    };

int obterCodigoFunction(char* comando_digitado){ /// RETORNA O CODIGO DA FUNÇÃO SE FOR VALIDO COMANDO OU -1 CASO COMANDO INVALIDO -2 NULO E 0 CASO O USUARIO TENHA DIGITADO ESPAÇO EM BRANCO;
  if(!comando_digitado){return -2;};
  if(strcmp (comando_digitado,"\n")==0){return -2;};
  if(strcmp (comando_digitado,"start")==0){return 1;};
  if(strcmp (comando_digitado,"run")==0){return 2;};
  if(strcmp (comando_digitado,"wait")==0){return 3;};
  if(strcmp (comando_digitado,"stop")==0){return 4;};
  if(strcmp (comando_digitado,"continue")==0){return 5;};
  if(strcmp (comando_digitado,"kill")==0){return 6;};
  if(strcmp (comando_digitado,"quit")==0){return 0;};
  if(strcmp (comando_digitado,"exit")==0){return 0;};


  return -1;
}


struct texto obetPalavras(char *comando){ ///retorna um vetor com todas as palavras da linha de comando.
        struct texto text;
        text.TAM =0;
        char *sub;
        sub = strtok(comando," \t\n");
        while(sub != NULL){
            text.palavra[text.TAM] = sub;
            text.TAM++;
            sub = strtok(NULL,"\t\n");
        }

        return text;
    }

void imprima(char* mensagem){
    printf("myshell: %s\n",mensagem);
}

///--------------------FUNÇÕES PARA SEREM IMPLEMENTADAS----------------/////////

void f_wait(){
    imprima("PROCESSO CHAMADO: WAIT");
}

void f_stop( ){
    imprima("PROCESSO CHAMADO: STOP");
}

void f_continue( ){
     imprima("PROCESSO CHAMADO: CONTINUE");
}

void f_kill( ){
     imprima("PROCESSO CHAMADO: KILL");
}

void f_start(){
      imprima("PROCESSO CHAMADO: START");
}

void f_run(){
     imprima("PROCESSO CHAMADO: RUN");
}

void f_quit(){ ///extra- implementar por ultimo

    exit(0);


}





int main(){

while(1>0){

    char comando[4096];
    printf("myshell>");
    fflush(stdout);
    fgets(comando,4096,stdin);

    struct texto txt= obetPalavras(comando);
    int codigo = obterCodigoFunction(txt.palavra[0]);
    if(codigo == -1){

    }

    switch(codigo){

    case -2:
        /// não faz nada;
    break;

    case -1:
        printf("myshell: comando desconhecido: %s \n",txt.palavra[0]);
    break;

    case 0:
         f_quit();
    break;

    case 1:

         f_start();

    break;

    case 2:

         f_run();

    break;

    case 3:

         f_wait();

    break;

    case 4:

        f_stop();

    break;

    case 5:

        f_continue();

    break;

    case 6:

        f_kill();

    break;


    }
}




}

