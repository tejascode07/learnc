#include <stdio.h>
int main(void) {
    //A Simple Hello World
    int kilometer,meter,centimeter;
  
   scanf("%d",&kilometer);
   
   meter= kilometer*1000;
   centimeter=kilometer*100000;
   
    printf("%d\n",meter);
    printf("%d\n", centimeter);
    return 0;
}