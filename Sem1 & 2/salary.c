#include <stdio.h>
int main()
{
  float basic, da, hra, gross_salary;
  printf("Enetr The Basic Salry: ");
  scanf("%f", &basic);
  da = (74.0 / 100) * basic;
  hra = (15.0 / 100) * basic;
  gross_salary = basic + da + hra;
  printf("Dearness Aloowance DA = Rs%.2f\n", da);
  printf("House Rent Allowance HRA = Rs%.2f\n", hra);
  printf("Gross Salary = Rs%.2f\n", gross_salary);
}