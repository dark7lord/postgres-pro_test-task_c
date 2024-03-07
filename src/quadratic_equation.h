#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

typedef struct {
	int num_roots;
	double root1;
	double root2;
} QuadraticEquationResult;

QuadraticEquationResult solve_equation(double a, double b, double c);

#endif // QUADRATIC_EQUATION_H
