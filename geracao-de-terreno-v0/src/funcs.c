#include "funcs.h"

int *generateArray()
{
    int r = rand() % 8;
    int n = 50;

    int *arr = malloc(500*sizeof(int*));

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
        c = ((a + b) / 2) + rand() % 1;
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

                a = rand() % 100;
                b = rand() % 100;
                c = ((a + b) / 2) + rand() % 10;
                arr[indxMin] = a;
                arr[indxMax] = b;
                arr[indxMid] = c;

                aux = 0;
            }
        }
    }

    return arr;
}

Pixel **generateMatrixOfPixels(int *arr){
  
  Pixel **image = (Pixel**) malloc(500 * sizeof(Pixel));

  Pixel *purple;
  purple = malloc(sizeof(Pixel));
  purple->r = 146;
  purple->g = 76;
  purple->b = 252;

  Pixel *orange;
  purple = malloc(sizeof(Pixel));
  purple->r = 252;
  purple->g = 187;
  purple->b = 76;
  

  int linha, coluna;

  for (coluna = 0; coluna < 50; coluna++)
  {
    for (linha = 0; linha < 50; linha++)
    {
      if (linha > arr[coluna])
      {
        image[linha][coluna] = *orange;
      }else
      {
        image[linha][coluna] = *purple;
      }
    }
     
  }

  return image;
  
}

