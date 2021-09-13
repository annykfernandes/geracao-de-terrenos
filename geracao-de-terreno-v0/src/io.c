#include "io.h"
#include "primitive.h"
void generateImage(Pixel **imageM, int tamX, int tamY, char * fileName)
{
  FILE *arquivo = fopen(fileName, "w");
  
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
              fprintf(arquivo,"%d %d %d ", imageM[linha][coluna].r, imageM[linha][coluna].g, imageM[linha][coluna].b);
            }
            fprintf(arquivo, "\n");
        }
        fclose(arquivo);
    }
    else
    {
        printf("Erro %s ao abrir o arquivo!\n", strerror(errno));
    }
    
}