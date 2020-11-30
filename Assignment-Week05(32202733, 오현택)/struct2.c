#include <stdio.h>
#include <math.h>

// Define the structure for point x, y (double data type)
struct point
{
  double x;
  double y;
};

// Define the structure for rectangle that has two points of above structure.

/*
 * Complete the function to return the area of rectangle (x1, y1), (x2, y2)
 */
double area(double x1, double y1, double x2, double y2)
{
  // Declare variable of rectangle structures
  // Save point 1 & point 2 to above variable
  // Calcuate area of rectangle.
  // Use structure member values, NOT input arguments.
  // assume : x2 >= x1, y1 >= y2
  struct point p1 = {x1, y1};
  struct point p2 = {x2, y2};
  double w, h, area;

  w = abs(p2.x - p1.x);
  h = abs(p2.y - p1.y);
  area = w * h;

  return area;
}

/*************************    MODIFY UP TO HERE!!!    ************************/
/*****************************************************************************/
/************************* DO NOT MODIFY FROM HERE!!! ************************/

#define NUM_CASES 6
double testdata[NUM_CASES][4] = {
    {0.0, 10.0, 5.0, 5.0},
    {1.0, 15.0, 10.0, -2.0},
    {-1.0, 2.0, 100.0, -2.0},
    {-12.0, -15.0, -1.0, -25.0},
    {2.0, 120.0, 50.0, -2000.0},
    {0.0, 2.0, 0.0, 1.0}};

int main(void)
{
  double result, localres;
  int passcnt = 0;
  for (int i = 0; i < NUM_CASES; i++)
  {
    result = area(testdata[i][0], testdata[i][1], testdata[i][2], testdata[i][3]);
    localres = ((testdata[i][2] - testdata[i][0]) * (testdata[i][1] - testdata[i][3]));
    printf("\nTest case %d ", i);
    if (result == localres)
    {
      printf("passed");
      passcnt++;
    }
    else
    {
      printf("failed (expect %f, return %f)", localres, result);
    }
  }
  printf("\n\n*** %d/%d test case passed!! ***\n", passcnt, NUM_CASES);

  return 0;
}