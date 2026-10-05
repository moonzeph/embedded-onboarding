#include <stdio.h>
#include <stdlib.h>

void fizzBuzz(int n);
int threeWayCompare(const void *a, const void *b);

int main(int argc, char **argv) {
  //Exercise 1: Hello World and compiling with gcc
  printf("Hello, world!");

//Exercise 2: FizzBuzz

//Dynamically allocate an int array using pointer notation of size 20.
  int* arr = malloc(20*sizeof(int));
  //Populate the array w/nums from 1 to 20
  for(int i = 0; i < 20; i++)
  {
    arr[i] = i+1;
  }
  
  //In main, run the function FizzBuzz on the array.
  printf("\nRunning FizzBuzz on array\n");
  for(int i = 0; i < 20; i++)
  {
  printf(" i=%d: ", arr[i]);
    fizzBuzz(arr[i]);
    printf("\n");

  }

  //Also in main, write a for-loop on FuzzBuzz from 1 to 30.
  printf("\nRunning FizzBuzz from 1-30\n");
  for(int i = 1; i<=30; i++)
  {
    printf("i =%d: ", i);
    fizzBuzz(i);
    printf("\n");
  }

  //Exercise 3: Function pointer practice
 printf("Qsort on array in descending order\n");
qsort(arr, 20, sizeof(int), threeWayCompare); 
for(int i = 0; i < 20; i++)
{
  printf("%d ", arr[i]);
}



  return 0;
}

void fizzBuzz(int n)
{
  /*
  If n is divisible by 3, print Fizz.
If n is divisible by 5, print Buzz.
If n is divisible by both 3 and 5, print FizzBuzz
If n is not divisible by either, print nothing.
*/
  if(n %3 == 0)
  {
    printf("Fizz");
  }
  
  if(n % 5 == 0)
  {
    printf("Buzz");
    
  }
}

int threeWayCompare(const void *a, const void *b)
{
  int x = *(const int *)a;
  int y = *(const int *)b;
  return (x < y) -(x > y);
 
}