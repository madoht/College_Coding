/* ***************************************************************************
 * SW Convergence coding 2
 * Assignment - Week 04
 * 
 * Name : 오현택
 * Student ID : 32202733
 * 
 * ***************************************************************************/

#include <stdio.h>
#include <string.h>

/*
 * Complete code to return same result of strlen() 
 */
size_t my_strlen(const char *s)
{
  size_t count = 0;
  while (*(s + count) != '\0')
  {
    count++;
  }
  return count;
}

/*
 * Complete code to return same result of strcpy() 
 */
char *my_strcpy(char *s1, const char *s2)
{
  int i = 0;
  while (s2[i]!= '\0'){
    s1[i] = s2[i];
    i++;
  }
  s1[i] = NULL;
  return s1;
}

/*
 * Complete code to return same result of strncpy() 
 */
char *my_strncpy(char *s1, const char *s2, size_t n)
{
  const char *a1 = s2;
  int i;
  for(int i=0; i<n; i++){
    *s1 = *a1;
    s1++;
    a1++;
  }
  return s1;
}

/*
 * Complete code to return same result of strcat() 
 */
char *my_strcat(char *s1, const char *s2)
{
  int a = strlen(s1);
  int b = 0;
  while (s2[b] != '\0')
  {
    s1[a++] = s2[b++];
  }
  return s1;
}

/*************************    MODIFY UP TO HERE!!!    ************************/
/*****************************************************************************/
/************************* DO NOT MODIFY FROM HERE!!! ************************/

int main(void)
{
  const char *str1[3] = {
      "Seoul",
      "I Seoul U",
      "Dankook University Mobile Eng. Dept."};

  char str2[100];
  char str3[100];

  int totalcase = 0;
  int pass = 0;

  printf("\n=== strlen test ===\n");
  for (int i = 0; i < 3; i++, totalcase++)
  {
    if (strlen(str1[i]) != my_strlen(str1[i]))
    {
      printf("*** Fail \"%s\" : strlen = %ld, my_strlen = %ld\n", str1[i], strlen(str1[i]), my_strlen(str1[i]));
    }
    else
    {
      printf("Sucess \"%s\" : strlen = %ld, my_strlen = %ld\n", str1[i], strlen(str1[i]), my_strlen(str1[i]));
      pass++;
    }
  }

  printf("\n=== strcpy test ===\n");
  for (int i = 0; i < 3; i++, totalcase++)
  {
    strcpy(str2, str1[i]);
    my_strcpy(str3, str1[i]);
    if (strcmp(str2, str3))
    {
      printf("*** Fail \"%s\" : strcpy = \"%s\", my_strcpy = \"%s\"\n", str1[i], str2, str3);
    }
    else
    {
      printf("Sucess \"%s\" : strcpy = \"%s\", my_strcpy = \"%s\"\n", str1[i], str2, str3);
      pass++;
    }
  }

  printf("\n=== strncpy test ===\n");
  memset(str2, 0, 100);
  memset(str3, 0, 100);
  for (int i = 0; i < 3; i++, totalcase++)
  {
    strncpy(str2, str1[i], 6);
    my_strncpy(str3, str1[i], 6);
    if (strcmp(str2, str3))
    {
      printf("*** Fail \"%s\" : strncpy = \"%s\", my_strncpy = \"%s\"\n", str1[i], str2, str3);
    }
    else
    {
      printf("Sucess \"%s\" : strncpy = \"%s\", my_strncpy = \"%s\"\n", str1[i], str2, str3);
      pass++;
    }
  }

  printf("\n=== strcat test ===\n");
  memset(str2, 0, 100);
  memset(str3, 0, 100);
  for (int i = 0; i < 3; i++, totalcase++)
  {
    strcpy(str2, "Concat - ");
    strcpy(str3, "Concat - ");
    strcat(str2, str1[i]);
    my_strcat(str3, str1[i]);
    if (strcmp(str2, str3))
    {
      printf("*** Fail \"%s\" : strcat = \"%s\", my_strcat = \"%s\"\n", str1[i], str2, str3);
    }
    else
    {
      printf("Sucess \"%s\" : strcat = \"%s\", my_strcat = \"%s\"\n", str1[i], str2, str3);
      pass++;
    }
  }

  printf("\n\n*** %.2f%% passed (%d passed, %d failed) ***\n\n", ((float)pass / (float)totalcase) * 100.0, pass, totalcase - pass);

  return 0;
}