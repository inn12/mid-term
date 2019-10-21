#include <stdio.h>

int main(void){
  int i, num =0;
  int j = 1;

  printf("Enter ther number: ");
  scanf("%d", &num);

  for (i = 1; i <num; i++)
    j = j*i;

  printf("The factorial of %d is %d \n", num, j);
}

/*
   r
   list
   b 8
   r
   q

   r
   b 8
   watch j
   c
   p j = 1
   c
   q
 */
