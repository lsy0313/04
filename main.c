#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int time, hours, min, sec;
    
    printf("input the second : ");
    scanf("%d", &time);
    
    hours = time / 3600;
    time = time % 3600;
    min = time / 60;
    sec = time % 60;
    
    printf("The time for %d second is %d : %d : %d \n", time, hours, min, sec);
    
   
  system("PAUSE");
    
  return 0;
}
