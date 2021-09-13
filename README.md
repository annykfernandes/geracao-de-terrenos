# Projeto final da disciplina de ITP: geração de terrenos  

Criando representações gráficas de terrenos em imagens PPM.

<img src="/imagens/expvsreal.png" alt="expectativa versus realidade"/>

## Descrição

Projeto feito para a disciplina de Introdução às Técnicas de Programação. A proposta é gerar terrenos aleatoriamente, criando um contorno com o algorítmo de disperção do ponto médio (midpoint displacement method). Aqui temos duas pastas, com duas tentativas minhas de exercutar a proposta. A pasta geracao-de-terreno-v0/src, possui um código feito de forma mais organizada, modularizada, com o uso de structs, entre outro. Porém, apesar de mais organizado, a referente v0 não gera a imagem, retornando um bendito segmentation fault.
Já a pasta geracao-de-terreno-v1/src possui a versão 1, onde os arquivos não estão tão divididos, tudo está confinado em menos arquivos, porém, gera a imagem. 

## Executando o programa
* Para a v0: 
> gcc generator.c io.c funcs.c -o nome_do_arquivo -g -w
> ./nome_do_arquivo

* Para a v1: 
> gcc generator.c io.c -o nome_do_arquivo -g -w
> ./nome_do_arquivo


## Relatos sobre o processo de desenvolvimento
* O que foi feito:
  Técnica para calcular pontos médios entre valores de um array, o qual foi usado para gerar o contorno da imagem (matriz) de ponteiros e gerada no arquivo PPM, com seu respectivo cabeçalho. 
* O que faltou:
  Faltou modularizar melhor os arquivos e produzir uma imagem com melhor resolução. O algoritmo atual não funciona para valores muito altos, gerando um segmentation fault, mesmo com a alocação dinâmica.
* O que faria diferente: 
  Tentaria corrigir o que não permite que os valores do array sejam muito grandes.

## Autoria

Anny Klarice Fernandes Souza
[anny.klarice.fernandes.127@ufrn.edu.br]



link git-hub: https://github.com/annykfernandes/geracao-de-terrenos
