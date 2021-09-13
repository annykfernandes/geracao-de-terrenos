#include <stdio.h>
#include "funcs.h"

int main(void) {
  int *arr = generateArray();

  Pixel **image = generateMatrixOfPixels(arr);

  generateImage(image, 50, 50, "imagem.ppm");
  
  return 0;
}
