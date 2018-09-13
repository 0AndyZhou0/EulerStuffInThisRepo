#include <stdio.h>

long main(){
  long largest = 2;
  long num = 600851475143;
  while(num > largest){
    while(num % largest == 0){
      num /= largest;
    }
    largest++;
  }
  printf("%li\n",largest);
  return largest;
}
