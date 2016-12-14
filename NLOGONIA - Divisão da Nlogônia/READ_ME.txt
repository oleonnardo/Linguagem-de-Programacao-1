# NLOGONIA - Divisão da Nlogônia

<p>Depois de séculos de escaramuças entre os quatro povos habitantes da Nlogônia, e de dezenas de anos de negociações envolvendo diplomatas, políticos e as forças armadas de todas as partes interessadas, com a intermediação da ONU, OTAN, G7 e SBC, foi finalmente decidida e aceita por todos a maneira de dividir o país em quatro territórios independentes.</p>

<p>Ficou decidido que um ponto, denominado ponto divisor, cujas coordenadas foram estabelecidas nas negociações, definiria a divisão do país da seguinte maneira. Duas linhas, ambas contendo o ponto divisor, uma na direção norte-sul e uma na direção leste-oeste, seriam traçadas no mapa, dividindo o país em quatro novos países. Iniciando no quadrante mais ao norte e mais ao oeste, em sentido horário, os novos países seriam chamados de Nlogônia do Noroeste, Nlogônia do Nordeste, Nlogônia do Sudeste e Nlogônia do Sudoeste.</p>


<p><img src="https://www.spoj.com/content/wanderley:nlogonia.png"/>

<p>A ONU determinou que fosse disponibilizada uma página na Internet para que os habitantes
pudessem consultar em qual dos novos países suas resid&#234;ncias est&#227;o, e voc&#234; foi contratado para
ajudar a implementar o sistema.</p>

<h3>Entrada</h3>

<p>A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um
inteiro <code>K</code> indicando o número de consultas que ser&#227;o realizadas (<code>0 < K <= 10^3</code>). A segunda
linha de um caso de teste contém dois números inteiros <code>N</code> e <code>M</code> representando as coordenadas
do ponto divisor (<code>&#8722;10^4 < N, M < 10^4</code>). Cada uma das <code>K</code> linhas seguintes contém dois inteiros
<code>X</code> e <code>Y</code> representando as coordenadas de uma resid&#234;ncia (<code>&#8722;10^4 <= X, Y <= 10^4</code>). Em todas
as coordenadas dadas, o primeiro valor corresponde &#224; direç&#227;o leste-oeste, e o segundo valor
corresponde &#224; direç&#227;o norte-sul.</p>

<p>O final da entrada é indicado por uma linha que contém apenas o número zero.</p>

<h3>Saída</h3>

<p>Para cada caso de teste da entrada seu programa deve imprimir uma linha contendo:</p>

<p> a palavra <code>divisa</code> se a resid&#234;ncia encontra-se em cima de uma das linhas divisórias 
(norte-sul ou leste-oeste);</p>

<p> <code>NO</code> se a resid&#234;ncia encontra-se na Nlogônia do Noroeste;</p>

<p> <code>NE</code> se a resid&#234;ncia encontra-se na Nlogônia do Nordeste;</p>

<p> <code>SE</code> se a resid&#234;ncia encontra-se na Nlogônia do Sudeste;</p>

<p> <code>SO</code> se a resid&#234;ncia encontra-se na Nlogônia do Sudoeste.</p>
