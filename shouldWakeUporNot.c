// Barking Dog -- if time is from 11 night to 8 morning and if dog is barking we should wakup else we should not wakup
#include <stdio.h>
#include <stdbool.h>

int shouldWakeUp(int hourofday, bool barking){
    printf("Hour of day%d",hourofday);
    printf("test%d", (hourofday >0 && hourofday < 8));
    if((hourofday >0 && hourofday < 8) && barking){
       return 1;
  }
   else{
      return 0;
   }
}

int main() 
{
  int hourofday =7;
   bool barking = true;
  int wakeup = shouldWakeUp(hourofday, barking);
  printf("\nAns is = %d", wakeup);
if(wakeup == 1){
    printf("Wakeup");
}
else{
    printf("No Wakeup");
}

    return 0;
}

