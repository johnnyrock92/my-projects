#include <stdio.h>

int main() {
double a, b, addition, subtraction, multiplication, division;
printf("\nPodaj pierwsza liczbe: ");
scanf("%lf", &a);
printf("Podaj druga liczbe: ");
scanf("%lf", &b);
addition = a + b;
subtraction = a - b;
multiplication = a * b;
division = a / b;
printf("%.2lf + %.2lf = %.2lf\n", a, b, addition);
printf("%.2lf - %.2lf = %.2lf\n", a, b, subtraction);
printf("%.2lf x %.2lf = %.2lf\n", a, b, multiplication);
printf("%.2lf : %.2lf = %.2lf\n", a, b, division);

  printf("\n");
  return 0;
}
