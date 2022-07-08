# Hash - Por endereçamento Aberto e Fechado
<p align="left">Marinêz Werneck Magalhães</p>

## Definição do Projeto

<p align="justify"> Implementação de duas tabelas hash: i) endereçamento fechado e; ii) endereçamento aberto por hash dupla. O trabalho deve receber diretamente no seu código um vetor de no mínimo 20 valores inteiros, os quais serão utilizados como entrada  para as duas estruturas que, por sua vez, são criadas com o dobro do tamanho do vetor (i.e., número primo maior que esse valor dobro). Feito isso, como resultado da execução deve-se apresentar o número de colisões ocorridas para ambas as estruturas quando o mesmo vetor é armazenado. Por fim, contemplar no README.md uma breve discussão dos motivos que levaram uma estrutura a apresentar melhores resultados.</p>

## Resultados Obtidos

<p align="justify"> As Hashs foram implementadas, baseadas nos arquivos do professor Michel, utilizando um vetor de 30 valores inteiros mais 4 valores estáticos, e o número primo escolhido foi o 73, que é pelo menos duas vezes o tamanho do vetor.

- Hash fechada (HF), menos colisão, utiliza lista.
- Hash aberta dupla (HA), mais colisão se tem mais valor inserido, utiliza uma matriz.


## Compilação:

| Comando | Função |
|---------| --------|
| `make c` | Limpa tudo, compila e executa |
| `make r` | Compila e executa |


## Referências:

> https://github.com/mpiress/HashTable
