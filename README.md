# SISTEMAS-OPERACIONAIS
PROJETO



## BUGS:  

SE A PESSOA DIGITA ENTER OU APENAS ESPAÇO EM BRANCO O COMPORTAMENTO ESPERADO É QUE ELE IMPRIMA NOVA LINHA EX:

COMPORTAMENTO ESPERADO:

myshell: <- usuario digita enter ou espaços em brancos e depois enter >
myshell: 

COMPORTAMENTO ATUAL:

myshell:   <- usuario digita duas vezes ou mais espaço em branco e digita enter>
myshell: comando desconhecido:   <- ele imprime "comando desconhecido">
            <-ele lê o espaço em branco como enter e pula linha>
myshell:


O MOTIVO DESSE BUG É PORQUE NÃO ACHEI UMA FORMA DE LER A STRING QUE PODE TER 4096 CARACTERES E GARANTIR QUE TODOS ELES SEJAM =" " PARA SO ENTÃO EXIBIR ESSE COMPORTAMENTO, enta a forma que eu fiz
é verificar se o usuario digitou apenas enter ou se ele digitou " "(1 espaço) e depois enter nesses casos o comportamento está correto.

## VALIDAÇÃO:  

TESTAR SE AS FUNÇÕES ESTÃO SENDO CHAMADAS CORRETAMENTE: wait,run,stop,continue,kill,start e quit/exit, obs: as funções ainda não estão implementadas então testar apenas se elas são chamadas
por isso coloquei um printf para quando elas são chamadas;
