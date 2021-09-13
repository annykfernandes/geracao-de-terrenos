#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "primitive.h"

int *generateArray();
Pixel **generateMatrixOfPixels(int *arr);
void generateImage(Pixel **imageM, int tamX, int tamY,  char * fileName);
