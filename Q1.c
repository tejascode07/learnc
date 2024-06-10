#include <stdio.h>
int main(void) {
    //A Simple Hello World
    
    
    //Getting input via STDIN
    int userIntInput  ;
    scanf("%d",&userIntInput);
    if (userIntInput==0)
    {
        printf("Zero");
    }
    
     else if(userIntInput%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}