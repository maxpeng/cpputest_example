#include "pythagorean.h"
#include "square_root.h"


float Pythagorean_hypotenuse(int x, int y)
{
    float hypotenuse = SquareRoot_sqrt(x*x + y*y);
    return hypotenuse;
}
