/* ***************************************************************************
 * SW Convergence coding 2
 * Assignment - Week 04
 * 
 * Name : 오현택
 * Student ID : 32202733
 * 
 * ***************************************************************************/

#include <stdio.h>
#include <ctype.h>

/*
 * Complete code to return same result of isalpha() 
 */
int my_isalpha(int ch)
{
  if (ch >= 65 && ch <= 90)
  {
    return 1;
  }
  else if (ch >= 97 && ch <= 122)
  {
    return 2;
  }
  else
  {
    return 0;
  }
}

/*
 * Complete code to return same result of isupper() 
 */
int my_isupper(int ch)
{
  if (ch >= 65 && ch <= 90)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*
 * Complete code to return same result of islower() 
 */
int my_islower(int ch)
{
  if (ch >= 97 && ch <= 122)
  {
    return 2;
  }
  else
  {
    return 0;
  }
}

/*
 * Complete code to return same result of isdigit() 
 */
int my_isdigit(int ch)
{
  if (ch >= 48 && ch <= 57)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*
 * Complete code to return same result of isalnum() 
 */
int my_isalnum(int ch)
{
  if (ch >= 48 && ch <= 57 || ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*
 * Complete code to return same result of toupper() 
 */
int my_toupper(int ch)
{
  if (ch >= 97 && ch <= 122)
  {
    ch -= 32;
    return ch;
  }
  else
  {
    return ch;
  }
}

/*
 * Complete code to return same result of tolower() 
 */
int my_tolower(int ch)
{
  if (ch >= 65 && ch <= 90)
  {
    ch += 32;
    return ch;
  }
  else
  {
    return ch;
  }
}

/*************************    MODIFY UP TO HERE!!!    ************************/
/*****************************************************************************/
/************************* DO NOT MODIFY FROM HERE!!! ************************/

int _check_my_func(int lib, int my)
{
  if (lib != 0)
    lib = 1;
  if (my != 0)
    my = 1;
  return (lib == my);
}

#define EACH_T_CASES 128

int _test_isalpha(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (_check_my_func(isalpha(c), my_isalpha(c)))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_isupper(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (_check_my_func(isupper(c), my_isupper(c)))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_islower(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (_check_my_func(islower(c), my_islower(c)))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_isdigit(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (_check_my_func(isdigit(c), my_isdigit(c)))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_isalnum(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (_check_my_func(isalnum(c), my_isalnum(c)))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_toupper(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (toupper(c) == my_toupper(c))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int _test_tolower(void)
{
  int c = 0, numpass = 0;
  while (c < EACH_T_CASES)
  {
    if (tolower(c) == my_tolower(c))
    {
      numpass++;
    }
    c++;
  }
  return numpass;
}

int main(void)
{
  int c = 0;
  int totalpass = 0, pass = 0, totalcases = 0;
  int res = 0;
  pass = _test_isalpha();
  printf("Test result(isalpha()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_isupper();
  printf("Test result(isupper()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_islower();
  printf("Test result(islower()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_isdigit();
  printf("Test result(isdigit()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_isalnum();
  printf("Test result(isalnum()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_toupper();
  printf("Test result(toupper()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  pass = _test_tolower();
  printf("Test result(tolower()) : %.2f%% passed: (%d test cases passed, %d test cases failed)\n", ((float)pass / (float)EACH_T_CASES) * 100.0, pass, EACH_T_CASES - pass);
  totalcases += EACH_T_CASES;
  totalpass += pass;

  printf("\n\n*** %.2f%% passed (%d passed, %d failed) ***\n\n", ((float)totalpass / (float)totalcases) * 100.0, totalpass, totalcases - totalpass);

  return 0;
}
