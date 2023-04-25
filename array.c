#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	      int i;
      int x[5] = {0, 14, 1, 7, 11};
      char y[] = "SAS";

      printf("%d\n",x[3]);
      printf("%s\n",y);
      scanf("%d",&x[0]);

      for(i = 0; i < 5; i++) {
          printf("\nArray element %d: %d", i, x[i]);
      }

	return 0;
}
