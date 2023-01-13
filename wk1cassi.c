#include <stdio.h>
int main(void) {
  int num1, num2, sum;
  printf("the first number is\n");
  scanf("%d", &num1);
  printf("the second number is\n");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("sum is %d\n", sum);

  return 0;
}

#include <stdio.h>
int main(void) {
  float radius, area, circumference;
  printf("enter radius of the circle\n");
  scanf("%f", &radius);
  area = 3.14 * radius * radius;
  circumference = 2 * 3.14 * radius;
  printf("Area of the cicle is %.3f\n", area);
  printf("Circumference is %.1f\n", circumference);
  return 0;
}

#include <stdio.h>
int main(void) {
  float principle, rate, time, simpleinterest;
  printf("Enter principle, rate and time to find simple interest:\n");
  scanf("%f", &principle);
  scanf("%f", &rate);
  scanf("%f", &time);
  simpleinterest = (principle * rate * time) / 100;
  printf("Simple interest=%f\n", simpleinterest);
  return 0;
}

#include <stdio.h>
int main(void) {
  float centigrade, farenheit;
  printf("Enter temp in Centigrade:\n");
  scanf("%f", &centigrade);
  farenheit = 1.8 * centigrade + 32;
  printf("temperature in farenheit= %f\n", farenheit);
  return 0;
}

#include <stdio.h>
int main(void) {
  int soc, hu, py, java, eng, sum, percentage, total;
  printf("Enter marks of 5 subject:\n");
  scanf("%d%d%d%d%d", &soc, &hu, &py, &java, &eng);
  printf("Enter asumption total number:\n");
  scanf("%d", &total);
  sum = soc + hu + py + java + eng;
  percentage = (sum * 100) / total;
  printf("Sum=%d\n", sum);
  printf("Percentage=%d\n", percentage);
  return 0;
}
