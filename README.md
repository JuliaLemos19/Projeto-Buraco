## este é um projeto da aula de estrutura de dados 1, lecionado pelo professor Marco Aurélio do Instituto Federal - Campus Cubatão (IFSP).

# Projeto-Buraco

- Objetivo: 

- Criar em memória uma representação para cada uma das 52 cartas de um baralho (x 2 baralhos) para serem utilizadas em um jogo de Buraco.

- O programa deverá "distribuir" aleatoriamente as cartas (11 cartas para cada um dos 4 jogadores participantes). Encerra a proposta com a apresentação das "mãos" de cada jogador.

- Notação para a identificação da carta:

<i>N-99-B = Onde: </i><br>
N-99-B = Onde: 
N  -> Naipe (1-Copas / 2-Paus / 3-Ouro / 4-Espada)
99 -> Número da carta (01-Ás / 13-Rei)
B  -> Baralho (1 ou 2)
Exemplo: 4-10-2  ->  10 de espada do baralho 2
baralho[n][c]
n = 0..1
c = 0..51
baralho[0][1] = "1021"
baralho[0][2] = "1031"
baralho[0][0] = "1011"
.
.
baralho[0][12] = "1131"
baralho[0][13] = "2011"
.
.
baralho[0][51] = "4131"
.
baralho[1][0] = "1012"
.
.
.
.
baralho[1][51] = "4132"
mao[j][c]
j = 0..3
c = 0..10

mao[0][0] = "1012"
mao[1][0] = "1011"




