#include <stdio.h>
#include <math.h>

// Define strucure for the point x, y(double data type).
struct point
{
  double x;
  double y;
};

/*
 * Complete the function to return the distance from (x1, y1) to (x2, y2)
 */
void use_struct_to_get_input(void)
{
  // Declare an array of structure which defined above for point.
  // Structure array has 2 elements.
  // Use "for" statement & scanf function to get 2 points from user.
  // Save each points to array. (use %lf to get double data type input)
  // Calculate & print the distance from 1st point to 2nd point.
  double w, h, dist, x1, y1, x2, y2;
  struct point list[2] = {
      {x1, y1},
      {x2, y2},
  };

  for (int i = 0; i < 2; i++)
  {
    scanf("%lf", &list[i].x);
    scanf("%lf", &list[i].y);
  }

  w = list[1].x - list[0].x;
  h = list[1].y - list[0].y;
  dist = sqrt((double)(w * w + h * h));
  printf("%f", dist);

  return;
}

/*************************    MODIFY UP TO HERE!!!    ************************/
/*****************************************************************************/
/************************* DO NOT MODIFY FROM HERE!!! ************************/

int main(void)
{
  use_struct_to_get_input();
  return 0;
}