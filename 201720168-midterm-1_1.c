#include <stdio.h>

double aver-rage(double in1, double in2){

  int sum =0;
  float avg = 0;

  sum = in1 + in2;
  avg = sum/2;

  return avg;
}

int main(void){
  
  double num1, num2;
  float avg = 0;

  printf("Enter the number 1:");
  scanf("%lf", &num2);

  printf("Enter the number 2:");
  scanf("%ls", &num2);
 
  avg = double aver-rage(num1, num2);

  printf("The mean of %lf and %lf is %f.", num1, num2, avg);

  return 0;
}

