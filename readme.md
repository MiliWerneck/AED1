# Contador de Instruções - Matriz N x N
## Para compilar usar:
```
make clean
make
make run
```
# Instruções

1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) - Considere a posição (N, N) como posição final;

4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

5.1) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

# Funcionamento:

A matriz é inicializada pela função matrizInicia que gera valores aleatórios de 0 a 99. 

Pode-se mudar o tamanho da matriz através do MAXTAM que se encontra no cabeçalho matriz.h.

Após a inicialização inicia-se o percurso através da matriz de acordo com as regras citadas acima. 

Para que não ocorra erros de retorno em mesmo valor (mesma posição) foi utilizado um tracker de caminho através do valor numérico -1.

Durante o procedimento, são percorridos os pontos de interesse (ou seja, de maior valor) dentro da matriz e somados a uma variável que é impressa no fim da execução.

# Respostas:

1) - Há mais de uma maneira de resolver esse problema ?
    Sim, poderia também ter sido usada uma matriz com 3 dimensões, onde a terceira receberia 0 ou 1, que marcaria ponto onde pode passar
    a soma e onde não pode.
    matriz[i][j][2]

2) - Há algoritmos em literatura que resolvam esse problema ?
    O algoritmo de Dijkstra para o caminho mais curto pode auxiliar na resolução do problema ao inverter os valores positivos para negativos encontrando assim o menor caminho e em seguida trocando o valor da soma final resultando no valor de caminho mais longo (maior valor).
    
    Esse algoritmo só pode ser utilizado caso os valores da matriz não possuam sinal.

   
3) - Pode existir mais de um caminho cujo valor total é o maximo?
    Sim, depende da semente randômica iniciada.
   
    

