#include <stdio.h>

int main(){
  int num = 1;
  for(int i = 20;i >= 1;i--){
    int temp = i;
    for(int n = 2;n <= temp;n++){
      while(temp % n == 0){
	temp /= n;
	if(num % n != 0){
	  num *= n;
	}
      }
    }
  }
  printf("%d",num);
  return num;
}
