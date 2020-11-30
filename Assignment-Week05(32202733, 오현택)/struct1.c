#include <stdio.h>
#include <math.h>

// Define the structure for point x, y (double data type)
struct point
{
  double x;
  double y;
};

/*
 * Complete the function to return the distance from (x1, y1) to (x2, y2)
 */
double distance(double x1, double y1, double x2, double y2)
{
  // Declare variable of point structures for point 1 (to save x1, y1) & point 2 (to save x2, y2)
  // Save point 1 & point 2 to above declared variable
  // Calcuate distance between point 1 & point2 and return it to the caller.
  // Use structure member values, NOT input arguments (x1, y1, x2, y2).
  // Use sqrt() function to get square root. sqrt(4.0) will return 2.0.
  struct point p1 = {x1, y1};
  struct point p2 = {x2, y2};
  double w, h, dist;

  w = p1.x - p2.x;
  h = p1.y - p2.y;
  dist = sqrt((double)(w * w + h * h));

  return dist; // Modify return value
}

/*************************    MODIFY UP TO HERE!!!    ************************/
/*****************************************************************************/
/************************* DO NOT MODIFY FROM HERE!!! ************************/

#define NUM_CASES 6
double testdata[NUM_CASES][4] = {
    {1.0, 2.0, 3.0, 4.0},
    {1.0, 2.0, 1.0, 2.0},
    {1.0, 2.0, -1.0, -2.0},
    {12.0, 15.0, -1.0, 25.0},
    {2.0, 120.0, -50.0, -2000.0},
    {1.0, 2.0, 0.0, 0.0}};

int main(void)
{
  double result, localres;
  int passcnt = 0;
  for (int i = 0; i < NUM_CASES; i++)
  {
    result = distance(testdata[i][0], testdata[i][1], testdata[i][2], testdata[i][3]);
    localres = sqrt((testdata[i][2] - testdata[i][0]) * (testdata[i][2] - testdata[i][0]) + (testdata[i][3] - testdata[i][1]) * (testdata[i][3] - testdata[i][1]));
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