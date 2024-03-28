## este é um projeto da aula de estrutura de dados 1, lecionado pelo professor Marco Aurélio do Instituto Federal - Campus Cubatão (IFSP).

# Projeto-Buraco

- Objetivo: 

- Criar em memória uma representação para cada uma das 52 cartas de um baralho (x 2 baralhos) para serem utilizadas em um jogo de Buraco.

- O programa deverá "distribuir" aleatoriamente as cartas (11 cartas para cada um dos 4 jogadores participantes). Encerra a proposta com a apresentação das "mãos" de cada jogador.

## Notação para a identificação da carta:

<i>N-99-B = Onde: </i><br> 
<i>N  -> Naipe (1-Copas / 2-Paus / 3-Ouro / 4-Espada)</i><br>
<i>99 -> Número da carta (01-Ás / 13-Rei)</i><br>
<i>B  -> Baralho (1 ou 2)</i><br>
<br>
<br>
<i>Exemplo: 4-10-2  ->  10 de espada do baralho 2</i><br>
<br>
<br>
<i>baralho[n][c]</i><br>
<i>n = 0..1</i><br>
<i>c = 0..51</i><br>
<br>
<br>
<i>baralho[0][1] = "1021"</i><br>
<i>baralho[0][2] = "1031"</i><br>
<i>baralho[0][0] = "1011"</i><br>
<i>.</i><br>
<i>.</i><br>
<i>baralho[0][12] = "1131"</i><br>
<i>baralho[0][13] = "2011"</i><br>
<i>.</i><br>
<i>.</i><br>
<i>baralho[0][51] = "4131"</i><br>
<i>.</i><br>
<i>baralho[1][0] = "1012"</i><br>
<i>.</i><br>
<i>.</i><br><i>.</i><br>
<i>.</i><br>
<i>baralho[1][51] = "4132"</i><br>
<i>mao[j][c]</i><br>
<i>j = 0..3</i><br>
<i>c = 0..10</i><br>
<br>
<i>c = 0..10</i><br>
<i>mao[0][0] = "1012"</i><br>
<i>mao[1][0] = "1011"</i><br>




