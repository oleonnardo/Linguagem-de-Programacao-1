

<div class="header">
	<span>URI Online Judge | 1973</span>
	<h1>Jornada nas Estrelas</h1>
	<div>
		<p>Por Leandro Zatesko, UFFS <img src='https://urionlinejudge.r.worldssl.net/gallery/images/flags/br.gif' alt='BR' /> Brazil</p>
	</div>
	<strong>Timelimit: 1</strong>
</div>

<div class="problem">

	<div class="description">
		<p>Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios em sequência. O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. Mas ele está definitivamente pirado. Quando passa pelo sítio Estrela <strong>i</strong>, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e segue ou para Estrela <strong>i</strong> + 1 ou para Estrela <strong>i</strong> - 1, dependendo se o número de carneiros em Estrela <strong>i</strong> era, respectivamente, ímpar ou par. Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. O irmão louco começa sua Jornada em Estrela 1, roubando um carneiro do seu próprio sítio.</p>
	</div>

	<h2>Entrada</h2>

	<div class="input">
		<p>A primeira linha da entrada consiste de um único inteiro <strong>N</strong> (1 ≤ <strong>N</strong> ≤ 10<sup>6</sup>), o qual representa o número de Estrelas. A segunda linha da entrada consiste de <strong>N</strong> inteiros, de modo que o <strong>i</strong>-ésimo inteiro, <strong>X<sub>i</sub></strong> (1 ≤ <strong>X<sub>i</sub></strong> ≤ 10<sup>6</sup>), representa o número inicial de carneiros em Estrela <strong>i</strong>.</p>
	</div>

	<h2>Saída</h2>

	<div class="output">
		<p>Imprima uma linha contendo dois inteiros, de modo que o primeiro represente o número de Estrelas atacadas pelo irmão louco e o segundo represente o número total de carneiros <em>não</em> roubados.</p>
	</div>

	<div class="both"></div>

	<table>
		<thead>
			<tr>
				<td>Exemplo de Entrada</td>
				<td>Exemplo de Saída</td>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td class="division">
					<p>8<br />
1 3 5 7 11 13 17 19</p>

				</td>
				<td>
					<p>8 68</p>

				</td>
			</tr>
		</tbody>
	</table>

	<div class="both"></div>

	<table>
		<tbody>
			<tr>
				<td class="division">
					<p>8<br />
					1 3 5 7 11 13 16 19</p>
				</td>
				<td>
					<p>7 63</p>

				</td>
			</tr>
		</tbody>
	</table>

	<p class="footer">
		3<sup>ạ</sup> Maratona de Programação <em>Júnior</em> da UFFS
	</p>
</div>





Fonte: http://www.urionlinejudge.com.br/repository/UOJ_1973.html