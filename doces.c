#include <stdio.h>

#define DOCES 1

static const char *doces[DOCES][2] = {{"Gabriel", "Sonho de Goiabada"}};

int main(void) {
  for (int i = 0; i < DOCES; i++)
    printf("Meu nome é %s e eu gosto de %s.\n", doces[i][0], doces[i][1]);

  return 0;
}
