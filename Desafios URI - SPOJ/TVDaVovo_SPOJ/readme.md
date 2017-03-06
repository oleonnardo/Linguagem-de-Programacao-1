<div>

	<table width="100%" style="margin-top:10px; display: inline;">
	<tbody><tr>
		<td>
			
						
			<!-- 
			<h1>1366. TV da Vovó</h1>
			<h2>SPOJ Problem Set (obi)</h2>
			<h2>Problema: TV</h2>
			 -->
			
			<h2>TV - TV da Vovó</h2>
		</td>
	</tr>
	</tbody></table>
	
	<p align="justify">
		</p><div class="prob">
	<p>A vovó tem um televisor muito antigo, que ultimamente está exibindo
um defeito incômodo: a imagem aparece 'deslocada’ (para cima ou para
baixo, para o lado direito ou para o lado esquerdo). Quando a imagem
está deslocada para cima, a parte da imagem que deixa de ser vista na
parte superior reaparece na parte de baixo da tela. Da mesma forma,
quando a imagem está deslocada a direita, a parte da imagem que deixa
de ser vista à direita reaparece na tela do lado esquerdo.</p>

<p><img src="https://www.spoj.com/content/wanderley:tv.jpg">

</p><p>A imagem do televisor pode ser vista como uma matriz de pontos
organizados em linhas e colunas.  Para consertar o televisor da vovó,
você pode ajustar a imagem introduzindo uma série de 'comandos de
correção’ em um painel de ajuste. Cada comando de correção desloca a
imagem de um certo número de linhas (para cima ou para baixo) e um
certo número de colunas (para a direita ou para a esquerda).</p>

<h3>Tarefa</h3>

<p>Dada uma matriz que representa uma imagem defeituosa e uma série de
comandos de correção, seu programa deve calcular a matriz que
representa a imagem resultante após todos os comandos terem sido
aplicados sequencialmente.</p>

<h3>Entrada</h3>

<p>A entrada possui vários conjuntos de teste. Cada conjunto de teste
inicia com a descrição da matriz que representa a imagem do
televisor. A primeira linha contém dois inteiros M e N representando o
número de linhas e o número de colunas da matriz (<code>1 &lt;= M &lt;= 1000</code> e <code>1
&lt;= N &lt;= 1000</code>). As M linhas seguintes da entrada contém cada uma N
inteiros, descrevendo o valor de cada ponto da imagem. Após a
descrição da imagem, segue-se a descrição dos comandos de
correção. Cada comando de correção é descrito em uma linha contendo
dois inteiros X e Y. O valor de X representa o deslocamento na direção
horizontal (valor positivo representa deslocamento para a direita,
valor negativo para a esquerda), e o valor de Y representa o
deslocamento da direção vertical (valor positivo para cima, valor
negativo para baixo). O final da lista de comandos é indicado por <code>X =
Y = 0</code>, e o final da entrada é indicado por <code>M = N = 0</code>.</p>

<pre><b>Exemplo de Entrada</b>
3 3
1 2 3
4 5 6
7 8 9
1 0
1 -1
0 0
3 4
6 7 8 5
10 11 12 9
2 3 4 1
-3 2
0 0
0 0
</pre>

<h3>Saída</h3>

<p>Para cada conjunto de teste, o seu programa deve produzir uma
imagem na saída. A primeira linha da saída deve conter um
identificador do conjunto de teste, no formato "Teste n", onde n
é numerado seqüencialmente a partir de 1. A seguir deve aparecer a
matriz que representa a imagem resultante, no mesmo formato da imagem
de entrada. Ou seja, as N linhas seguintes devem conter cada uma M
inteiros que representam os pixels da imagem. Após a imagem deixe uma
linha em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve
ser seguida rigorosamente.</p>

<pre><b>Exemplo de Saída</b>
Teste 1
8 9 7
2 3 1
5 6 4

Teste 2
1 2 3 4
5 6 7 8
9 10 11 12
</pre>

<p>(esta saída corresponde ao exemplo de entrada acima)</p>

<h3>Restricões</h3>

<p><code>0 &lt;= N &lt;= 1000</code> (N = 0 apenas para indicar o final da entrada)<br>
<code>0 &lt;= M &lt;= 1000</code> (M = 0 apenas para indicar o final da entrada)<br>
<code>0 &lt;= X &lt;= 1000</code><br>
<code>0 &lt;= Y &lt;= 1000</code><br>
<code>0 &lt;= número de comandos de correção em cada conjunto de teste &lt;= 1000</code></p>
	</div>
	
		
	<div class="text-center">
		<a href="/submit/TV/" class="btn btn-primary btn-lg"><i class="fa fa-send"></i> Submit solution!</a>
	</div>
</div>