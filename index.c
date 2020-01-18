#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  int i ,j;

  for( i = 65 ; i <= 68  ; i++ ){
    for( j = 65 ; j <= 84 ; j++){
      if( i == 65 )
        printf("%c", j);
      else if ( i == 65 + 1 ){
        printf("%c", j);
        j += 1;
      }
      else if( i == 65 + 2 ){
        printf("%c", j);
        j += 2;
      }
      else if( i == 65 + 3 ){
        printf("%c", j);
        j += 3;
      }
    }
    printf("\n");
  }
}
