# Listas Lineares: Implementação em C

<p> </p>

<p> </p>

<p align="justify">
Em uma lista A temos um conjunto de elementos inteiros positivos ou não <a1; a2; . . . ; an>. Elabore uma função que consiga encontrar neste conjunto a máxima soma.
</p>

<p align="justify">
Para a execução deste problema foi realizada leitura de uma lista fornecida, e feita a comparação com o número anterior para saber se era o maior que o próximo a ser somado.
Ao final, fez-se a soma dos valores máximos, conforme apresentado na figura abaixo.
</p>

<p align="center">
<img src="imgs/tela.PNG"/> 
</p>


# Compilação e Execução

A lista linear disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |

