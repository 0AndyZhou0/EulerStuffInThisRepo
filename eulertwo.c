#include<stdio.h>

int main(){
  int sum = 0;
  int a = 1;
  int b = 2;
  while(a < 4000000){
    int temp = b;
    b += a;
    a = temp;
    if(a % 2 == 0){
      sum += a;
    }
  }
  printf("%d", sum);
  return sum;
}
