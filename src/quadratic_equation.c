// quadratic_equation.c
#include "quadratic_equation.h"
#include <math.h>

QuadraticEquationResult solve_equation(double a, double b, double c) {
	QuadraticEquationResult result;

	double discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		result.num_roots = 2;
		result.root1 = (-b + sqrt(discriminant)) / (2 * a);
		result.root2 = (-b - sqrt(discriminant)) / (2 * a);
	} else if (discriminant == 0) {
		result.num_roots = 1;
		result.root1 = -b / (2 * a);
		result.root2 = result.root1;
	} else {
		result.num_roots = 0;
		result.root1 = 0.0;
		result.root2 = 0.0;
	}

	return result;
}
