// Program to implement Linear Search in C:

#include <stdio.h>
int main() //main function
{
  int a[10] = {30, 20, 30, 40, 67, 30, 89, 30, 12, 25}; //input array already given

  int item, n = 10, pos;  //initialization

  printf("\nArray elements are..\n");

  for (pos = 0; pos < n; pos++) // Going through array sequencially
  {

    printf("%d ", a[pos]); //print array elements

    printf("\n\nEnter the number to search in the array ");

    scanf("%d", &item); //enter number to search

    pos = 0;  //initialize

    int c = 0; //to count how many time same number repeat
  }
  while (pos < n) //finding number in given array
  {
    if (a[pos] == item) //successful search
    {
      c++; //count increment

      printf("\n %d is found at %d position", item, pos); 
    }
    pos++; //increment location
  }
  if (c == 0)  //unsuccessful search
  {
    printf("\n%d is not found in the array", item); 
  }
  printf("\n %d found %d times in the array", item, c);
}
//end of program
