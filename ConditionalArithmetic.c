#include <stdio.h>

int CalculateAdd(int number){
  int sum = 0;

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}
int CalculateMultiply(int number){
  int sum = 1;

  for (int i = 1; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {

      sum *= i;
    }
  }
  if (sum == 1) {
    sum = 0;
  }
  return sum;
}


int main(int argc, char const *argv[]) {

int  select = 0; //only 1 or 2
int number = 0; // only numbers from 1-100



 do {

   printf("Select Add (1) or Multiply (2): ");
   scanf("%d", &select);
 } while(select < 1 || select > 2);


 do {

   printf("Select a number in the range (1-100): ");
   scanf("%d", &number);
 } while(number < 1 || number > 100);

 if (select == 1) {
   printf("%d\n", CalculateAdd(number));
 }
 else
 if (CalculateMultiply(number) < 0) {
   printf("Overflow!\n" );
 }
 else 
  printf("%d\n", CalculateMultiply(number));

  return 0;
}
