# Desafio Batalha Naval em C

Este projeto implementa um *jogo de Batalha Naval simplificado* em três níveis de dificuldade:  
*Novato, **Aventureiro* e *Mestre*.  
O objetivo é treinar lógica de programação com *vetores bidimensionais, **matrizes* e *estruturas de repetição aninhadas*.

---

## Estrutura do Projeto

### Nível Novato
- Tabuleiro pequeno (5x5).
- Dois navios:
  - Um posicionado *verticalmente*.
  - Outro posicionado *horizontalmente*.
- Saída: exibe as *coordenadas ocupadas* pelos navios.

### Nível Aventureiro
- Tabuleiro expandido para *10x10*.
- Quatro navios:
  - Horizontal.
  - Vertical.
  - Diagonal principal.
  - Diagonal secundária.
- Saída: exibe todo o tabuleiro, onde:
  - 0 = posição livre.
  - 3 = posição ocupada por navio.

### Nível Mestre
- Implementação de *habilidades especiais* no tabuleiro.
- Matrizes representam *áreas afetadas* pelos ataques:
  - *Cone*:
    
    00100
    01110
    11111
    
  - *Octaedro*:
    
    00100
    01110
    00100
    
  - *Cruz*:
    
    00100
    11111
    00100
    
- Saída: o sistema exibe as matrizes de habilidades, onde:
  - 0 = área não afetada.
  - 1 = área afetada.

---

## Como Compilar

No terminal, digite:

```bash
gcc batalha_naval.c -o batalha_naval
