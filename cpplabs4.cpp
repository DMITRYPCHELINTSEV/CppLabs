#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, n, k, s;
    k = 1;
    s = 0;
    printf ("Введите количество чисел последовательности:\n");
    scanf ("%d", &n);
  printf ("Введите числа последовательности:\n");
  while (k<=n)
  { 
    k++;
    scanf("%d", &a);
    if (!(a%3) && (a%5))
      s++;
           }
  printf ("сумма= %d", s);
  getch();
  return 0;
}