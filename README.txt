# Projeto final da disciplina de ITP: geração de terrenos 

Criando representações gráficas de terrenos em imagens PPM.

## Descrição

Projeto feito para a disciplina de Introdução às Técnicas de Programação. A proposta é gerar terrenos aleatoriamente, criando um contorno com o algorítmo de disperção do ponto médio (midpoint displacement method). Aqui temos duas pastas, com duas tentativas minhas de exercutar a proposta. A pasta xxxxxxxxxx, possui um código feito de forma mais organizada, modularizada, com o uso de structs, entre outro. Porém, apesar de mais organizado, a referente v0 não gera a imagem, retornando um bendito segmentation fault.
Já a pasta xxxxxx possui a versão 1, onde os arquivos não estão tão divididos, tudo está confinado em menos arquivos, porém, gera a imagem. 

## Executando o programa
Para a v0: 
>>>gcc generator.c io.c funcs.c -o nome_do_arquivo -g -w
>>>./nome_do_arquivo

Para a v1: >>>gcc generator.c io.c -o nome_do_arquivo -g -w
>>>./nome_do_arquivo


## Relatos sobre o processo de desenvolvimento

## Autoria

Anny Klarice

