#include<stdio.h>
int main()
{
     printf("Lets learn about pointers\n");
     int a = 76;
     int* ptra = &a;
     int *ptr2 = NULL;
     printf("The address  of pointer a is %p\n", &ptra);
      printf("The address  of a is %p\n", &a);
     printf("The address  of a is %p\n", ptra);
     printf("The address  of some garbage  is %p\n", ptr2);
     printf("the value of a is %d", *ptra);
      printf("The value of a is %p\n", a);
      printf("the vlue of address in hexa is %x",&a);
     return 0;
}