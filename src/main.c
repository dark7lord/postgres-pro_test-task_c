#include <stdio.h>
#include "quadratic_equation.h"

int main() {
	double a, b, c;
	printf("Enter coefficients (a, b, c): ");
	scanf("%lf %lf %lf", &a, &b, &c);

	QuadraticEquationResult result = solve_equation(a, b, c);

	if (result.num_roots == 0) {
		printf("No real roots\n");
	} else if (result.num_roots == 1) {
		printf("One real root: %lf\n", result.root1);
	} else {
		printf("Two real roots: %lf and %lf\n", result.root1, result.root2);
	}

	return 0;
}
