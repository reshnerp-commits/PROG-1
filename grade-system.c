#include <stdio.h>

int main() {

      int G;

      for (int i = 0; i < 10; i++) {
      printf("Enter number: ");
      scanf("%d", &G);

      if ( G < 0 || G > 100 ) {
            printf("Invalid Grade\n");
      } else if ( G >= 90) {
            printf("GRADE:\n |A| |%d|\n", G);
      } else if ( G >= 80 ) {
            printf("GRADE:\n|B| |%d|\n", G);
      } else if ( G >= 70 ) {
            printf("GRADE:\n |C| |%d|\n", G);
      } else if ( G >= 60 ) {
            printf("GRADE:\n |D| |%d|\n", G);
      }
        else {
            printf("GRADE:\n|F| |%d|\n", G);
      }
      }
   
  return 0;
}
