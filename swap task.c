#include <stdio.h>

int main()
{ int a=5,b=3,temp=0;
   printf("value of a %d and value of b %d\n",a,b);
  temp=a;
  a=b;
  b=temp;
    printf("new value of a  %d and b  %d respctively",a ,b);

    return 0;
}
