#include <stdio.h>

int max(int num1, int num2) {
  // используется тернарный оператор
  // если первое число большое второго, то функция возвраща первое число, иначе второе (даже если они равны)
  return num1 > num2 ? num1 : num2; 
}

int main()
{
  int num1, num2;
  printf("Введите два числа\n");
  scanf("%d %d", &num1, &num2);
  
   int maxNum = max(num1, num2);
   printf("Максимально число %d", maxNum);
   
  return 0;
}
