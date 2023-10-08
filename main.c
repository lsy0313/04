#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;  // ÀÔ·Â¹Þ´Â µÎ °³ÀÇ Á¤¼ö 
    int add, sub, mul, div, rest; // µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼À, ³ª¸ÓÁö  
    
    printf("input two integers : ");
    scanf("%d %d", &a, &b);
    
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rest = a % b;
     
    printf("+ result is %d\n", add);
    printf("- result is %d\n", sub);
    printf("* result is %d\n", mul);
    printf("/ result is %d\n", div);
    printf("%% result is %d\n", rest);
   
  system("PAUSE");
  
  return 0;
}
