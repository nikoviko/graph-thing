# graph-thing
Esse é um projetinho em C++ que eu fiz pra trabalhar com grafos. A ideia é criar vértices (os “pontos”), ligar eles com arestas (as “linhas”), e poder mostrar tudo de um jeito simples.

O que já tem

Dá pra adicionar vértices com nome (tipo “A”, “B”, “C”). Dá pra criar arestas com peso (um número que indica “distância” ou “custo”) e escolher se elas são direcionadas ou não. Mostrar na tela como o grafo tá montado, mostrando cada vértice e pra onde ele aponta. Tem umas funções de busca (BFS, DFS) e caminho mínimo (Dijkstra) planejadas, mas ainda não fiz.

Como rodar

Se você tem um compilador g++ instalado, é só abrir o terminal na pasta do projeto e digitar:
make

Depois, roda o programa:
./bin/grafo.exe

Se estiver no Windows, pode ser que tenha que usar:
bin\grafo.exe



Como funciona por dentro

O cupholder.h e o cupholder.cpp têm as classes que fazem o grafo funcionar.

O main.cpp é o que roda o programa.

O Makefile ajuda a compilar tudo de boa.

E o futuro?

Quero fazer funcionar as buscas em largura e profundidade. Implementar o Dijkstra pra encontrar o caminho mais curto. Melhorar a interface pra usar o programa. E claro, deixar tudo mais robusto. :3
