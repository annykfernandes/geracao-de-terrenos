#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "io.h"

void writeImage(int **imageM, int tamX, int tamY)
{
    FILE *arquivo = fopen("imagem.ppm", "w");
    
    imageM = malloc(500 * sizeof(int *));
    for (int i = 0; i < 50; i++)
    {
        imageM[i] = malloc(500 * sizeof(int *));
    }

    int r = rand() % 6;
    int n = 50;
    int *arr = malloc(100*sizeof(int*));

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    int indxMin = 0;
    int indxMax = (n - 1);
    int indxMid = n / 2;

    int a = 0, b = 0, c = 0;

    while (indxMid > 0)
    {

        a = rand() % 8;
        b = rand() % 8;
        c = (a + b)/ 2 + rand() % 1;
                
        arr[indxMin] = a;
        arr[indxMax] = b;
        arr[indxMid] = c;

        indxMax = indxMid;
        indxMid = indxMid / 2;
    }

    while (indxMax != n - 1)
    {

        int aux = indxMax;

        while (aux != 0)
        {
            if (arr[aux] != 0)
            {
                aux++;
            }
            else
            {
                indxMin = aux - 1;
                indxMid = aux;
                indxMax = aux + 1;

                a = rand() % 8;
                b = rand() % 8;
                c = ((a + b) / 2) + rand() % 1;
                arr[indxMin] = a;
                arr[indxMax] = b;
                arr[indxMid] = c;

                aux = 0;
            }
        }
    }
    //int pixelWhite[] = {255, 255, 255};
    int linha, coluna;

    for (coluna = 0; coluna < 50; coluna++){
        for (linha = 0; linha < 50; linha++){
            if (linha > arr[coluna])
            {
                imageM[linha][coluna] = 1;
            }else{
                imageM[linha][coluna] = 0;
            }
        }
        
    }

    if (arquivo != NULL)
    {
        fprintf(arquivo, "P3\n");
        fprintf(arquivo, "%d %d\n", tamX, tamY);
        fprintf(arquivo, "255\n");

        int linha, coluna;

        for (linha = 0; linha < 50; linha++)
        {
            for (coluna = 0; coluna < 50; coluna++)
            {
                if (imageM[linha][coluna] ==1)
                {
                    fprintf(arquivo, "146 76 252\n");
                }else{
                    fprintf(arquivo, "252 187 76\n");
                }
                
            }
        }
        fclose(arquivo);
    }
    else
    {
        printf("Erro %s ao abrir o arquivo!\n", strerror(errno));
    }
}