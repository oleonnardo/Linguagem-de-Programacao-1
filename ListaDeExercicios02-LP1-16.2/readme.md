UNIVERSIDADE ESTADUAL DA PARAÍBA<br>
Curso: Ciência da Computação<br>
Disciplina: Linguagem de Programação 1<br>
Professor: Danilo Abreu Santos<br>
<br>
<center><h2><b>Lista 02: Estruturas Condicionais</b><br></h2></center>
<br>

<b>1.</b> Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
<br>

<b>2.</b> Usando o operador ternário, faça um programa que verifica o sexo de um usuário.
Será digitado m ou M para masculino e f ou F para feminino.
<br>

<b>3.</b> Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que
pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não.
<br>

<b>4.</b> Crie um algoritmo que, ao usuário entrar com a idade, informe se o mesmo é maior
de idade, menor de idade ou se tem mais de 65 anos.
<br>

<b>5.</b> Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa
e diga se a data é válida ou não. (Ignorar anos bissexto).
<br>

<b>6.</b> Desenvolva um algoritmo que o usuário entra com o valor do salário, e o algoritmo
deverá imprimir o desconto do INSS, seguindo os valores abaixo:
<br>
<p><em> - Menor ou igual a R$1600,00 = Isento<br>
- Maior que R$1600,00 e menor ou igual a R$3.000,00 = 20%<br>
- Maior que R$3.000,00 e menor ou igual a R$5.000,00 = 25%<br>
- Maior que R$5.000,00 = 30%</em><p>
<br>

<b>7.</b> Faça um programa que receba três números inteiros nas variáveis n1, n2 e n2. O
programa deverá ordenar os números (do menor para o maior). A saída deverá
obedecer a seguinte ordem de variáveis: n1, n2 e n3.
<br>

<b>8.</b> Crie um programa que mostre o consumo de combustível de um carro no percurso
(em quilômetros) que o usuário digitou, de acordo com o tipo do carro que também
será informado pelo usuário. Sabe-se que o carro do tipo A faz 8 km com um litro
de combustível, o tipo B faz 9 km com um litro e o tipo C faz 12 km com um litro.
<br>

<b>9.</b> Crie um programa que ao entrar com o valor de X, imprima o valor de Y. Sabendo
que:
<br>
  <p>
       { 1, se x <= 1<br>
   y = { 2, se 1 < x <= 2<br>
       { x², se 2 < x < = 3<br>
       { x³, se x > 3
  </p>
<br>

<b>10.</b> (UFU-L02Q02) Leia um número fornecido pelo usuário. Se esse número for positivo,
calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem
dizendo que o número é inválido.
<br>

<b>11.</b> Crie uma calculadora usando a instrução SWITCH, que pergunte qual das
operações básicas quer fazer (+, -, * e /), em seguida peça os dois números e
mostre o resultado da operação matemática entre eles.
<br>

<b>12.</b> Faça um programa que receba um número com 4 dígitos e, como saída deverá
inverter a ordem dos dígitos. O usuário digitará um número no formato MCDU
(milhar, centena, dezena e unidade), que deverá ser impresso como UDCM.
<br>

<b>13.</b> Crie um algoritmo que descubra se um número é múltiplo de 10, de 5 e de 2.
<br>

<b>14.</b> (UFU-L02Q10) Faça um programa que receba a altura e o sexo de uma pessoa e
calcule e mostre seu peso ideal, utilizando as seguintes formulas (onde h
corresponde à altura):
<p><em>Homens: (72:7 ∗ h) – 58<br>
Mulheres: (62;1 ∗ h) − 44;7.</em></p>
<br>

<b>15.</b> (UFU-L02Q13) Faça um algoritmo que calcule a média ponderada das notas de 3
provas. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final,
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos. (cada prova a pontuação
vai de 0 a 100).
<br>

<b>16. Overflow:</b>  Os computadores foram inventados para realizar cálculos muito rapidamente,
e atendem a esse requisito de maneira extraordinária. Porém, nem toda conta pode ser
feita num computador, pois ele não consegue representar todos os números dentro de sua
memória. Em um computador pessoal atual, por exemplo, o maior inteiro que é possível
representar em sua memória é 4.294.967.295. Caso alguma conta executada pelo
computador dê um resultado acima desse número, ocorrerá o que chamamos de overflow,
que é quando o computador faz uma conta e o resultado não pode ser representado, por
ser maior do que o valor máximo permitido (em inglês overflow significa trasbordar). Por
exemplo, se um computador só pode representar números menores do que 1023 e
mandamos ele executar a conta 1022 + 5, vai ocorrer overflow.
</br>
<b>Tarefa:</b> Dados o maior número que um computador consegue representar e uma
expressão de soma ou multiplicação entre dois inteiros, determine se ocorrerá overflow.<br>
<b>Entrada:</b> A entrada contém um único conjunto de testes, que deve ser lido do dispositivo
de entrada padrão (normalmente o teclado). A primeira linha da entrada contém um
inteiro N (1 ≤ N ≤ 500.000) representando o maior número que o computador consegue
representar. A segunda linha contém um inteiro P (0 ≤ P ≤ 1000), seguido de um espaço
em branco, seguido de um caractere C (que pode ser ‘+’ ou ‘<b>*</b>’, representando os
operadores de adição e multiplicação, respectivamente), seguido de um espaço em
branco, seguido de um outro inteiro Q (0 ≤ Q ≤ 1000). Essa linha representa a expressão
P + Q, se o caractere C for ‘+’, ou P × Q, se o caractere C for ‘<b>*</b>’.<br>
<b>Saída:</b> Seu programa deve imprimir, na saída padrão, a palavra ‘OVERFLOW’ se o
resultado da expressão causar um overflow, ou a palavra ‘OK’ caso contrário. Ambas as
palavras devem ser escritas com letras maiúsculas.
<br><br>

<b><em>Exemplos</em></b><br>
<b>Entrada</b><br>
10<br>
5 + 5<br>
<br>
<b>Saída</b><br>
OK<br>
--------
<br>
<b>Entrada</b><br>
44<br>
23 * 2<br>
<br>
<b>Saída</b><br>
OVERFLOW<br>
--------
<br>
<b>Entrada</b><br>
323500<br>
42 * 35<br>
<br>
<b>Saída</b><br>
OK<br>
--------
<br>
