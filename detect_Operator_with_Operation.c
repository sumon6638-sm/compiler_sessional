#include<stdio.h>

int main()

{

  int a, b, sum, sub, mul, div;
  char opr;
  printf("\nEnter two no: ");
  scanf("%d %d", &a, &b);
  printf ("Enter any one operator: ");
  scanf("%s", &opr);

  // (opr == '+')
  //     ? res = a + b,
  //       printf("The sum is %d", res)
  //     : (opr== '-')
  //       ? res=a-b,
  //         printf("n The difference is %d",res)
  //       : (opr== '*')
  //         ? res=a*b,
  //           printf("n The product is %d",res)
  //         : (opr == '/')
  //           ? res=a/b,
  //             printf("n The quotient is %d",res)
  //           : printf ("n Invalid entry");

  // sum = a + b;
  // sub = a - b;
  // mul = a * b;
  
  
  
  

  if (opr == '+')
  {
    sum = a + b;
    printf("Sum : %d", sum);
  }

  else if(opr== '-')
  {
    printf("n The difference is %d",sub);
  }

  else if(opr== '*')
  {
    printf("n The product is %d",mul);
  }

  else if(opr == '/')
  {
    printf("n The quotient is %d",div);
  }

  else
  {
    printf ("n Invalid entry");
  }

  return 0;

}