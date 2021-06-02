#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */



int main ()
{
  int i = 0;

  /* initialize random seed: */
  srand (time(NULL));#include <stdio.h>      /* printf, scanf, puts, NULL */
  while (i < 10000)
  {
  	printf("%c%c %c%c %d%d\n", 101 + rand()%26, 101 + rand()%26, rand()%100);
  }