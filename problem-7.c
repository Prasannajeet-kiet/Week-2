#include <stdio.h>

int main(){
  int a, b, c;
  printf("Enter the sides of traingle: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a < 1 || b < 1 || c < 1){
    printf("Numbers cannot be negative");
  }
  else if((a+b+c) != 180){
    printf("The sides of traingle must be equal to 180");
  }
  else{
    printf("success");
  }
  

}