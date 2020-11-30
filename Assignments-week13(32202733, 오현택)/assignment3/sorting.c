#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define ARR_SIZE 100000

// Complete selection_sort function to perform selection sorting
// ***** Complete ******
// * DON'T USE ARRAY INDEX
// ** USE ONLY POINTER ARITHMATIC
void selection_sort(int *arr, int size)
{

  return;
}

// Complete insertion_sort function to perform insertion sorting
// ***** Complete ******
// * DON'T USE ARRAY INDEX
// ** USE ONLY POINTER ARITHMATIC
void insertion_sort(int *arr, int size)
{

  // ##### YOUR CODE HERE!!

  return;
}

// DON'T MODIFY check_result FUNCTION
void check_result(int *arr, clock_t start_t, clock_t end_t)
{
  bool sorted = true;
  for (int i = 1; i < ARR_SIZE; i++)
  {
    if (*(arr + i) < *(arr + i - 1))
    {
      sorted = false;
      break;
    }
  }
  if (sorted)
  {
    printf("Success to sort numbers.\n");
  }
  else
  {
    printf("Fail to sort numbers.\n");
  }
  printf("It took %lf seconds.\n", (double)(end_t - start_t) / (double)(CLOCKS_PER_SEC));
  return;
}

int main(void)
{
  FILE *fp;
  int *arr_sel, *arr_ins, idx = 0, rand_val;
  clock_t start_t, end_t;

  // Allocate memory for arr_sel & arr_ins
  // arr_sel will be used for selection sorting.
  // arr_ins will be used for insertion sorting.
  // ***** Complete ******
  arr_sel = #### #;
  arr_ins = #### #;

  // Check whether the memory allocation is success or not.
  // ***** Complete ******
  if (#### #)
  {
    // If arr_set and arr_ins is successfully allocated.
    // Open file numbers.txt as read mode & save file pointer to fp.
    fp = #### #;
    if (fp)
    {
      printf("---1. Read from data file!! \n");

      // Read all numbers from file to arr_sel.
      // Use for, while, do-while statement
      // Use fscanf, fgets to read a line from file.
      // ***** Complete ******

      #### #

          // Close fp
          // ***** Complete ******
          #### #

          // Copy arr_sel to arr_ins
          // ***** Complete ******
          memcpy(#### #);

      printf("\n---2. Selection Sorting \n");
      start_t = clock();
      selection_sort(arr_sel, ARR_SIZE);
      end_t = clock();
      check_result(arr_sel, start_t, end_t);

      printf("\n---3. Insertion Sorting \n");
      start_t = clock();
      insertion_sort(arr_ins, ARR_SIZE);
      end_t = clock();
      check_result(arr_ins, start_t, end_t);
    }
    else
    {
      printf("Error to open file numbers.txt\n");
    }
  }
  else
  {
    printf("memory allocation error\n");
  }

  // Free arr_sel if that was successfully allocated
  // ***** Complete ******
  if (#### #)
    #### #;

  // Free arr_ins if that was successfully allocated
  // ***** Complete ******
  if (#### #)
    #### #;

  return 0;
}