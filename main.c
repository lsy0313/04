#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year, result;
    int x, y, z;
    
    printf("input the year : ");
    scanf("%d", &year);
    
    x = year % 4;
    y = year % 100;
    z = year % 400;
    
    result = (!x && y) || !z;
    
    printf("is the year %d the leap year? : %d \n", year, result);
   
  system("PAUSE");
  
  return 0;
}
