#include <stdio.h>
#include <math.h>

double main(){
  double largest = 2;
  double num = 600851475143;
  while(num > 1){
    while(fmod(num, largest) == 0){
      num /= largest;
    }
  }
  printf("%f",largest);
  return largest;
}
