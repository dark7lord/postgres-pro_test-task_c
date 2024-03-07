#include "quadratic_equation.h"
#include <assert.h>

int main() {
	// Test 1: Discriminant > 0
	QuadraticEquationResult result1 = solve_equation(1.0, -3.0, 2.0);
	assert(result1.num_roots == 2);
	assert(result1.root1 == 2.0);
	assert(result1.root2 == 1.0);

	// Test 2: Discriminant = 0
	QuadraticEquationResult result2 = solve_equation(1.0, -2.0, 1.0);
	assert(result2.num_roots == 1);
	assert(result2.root1 == 1.0);
	assert(result2.root2 == 1.0);

	// Test 3: Discriminant < 0
	QuadraticEquationResult result3 = solve_equation(1.0, 2.0, 5.0);
	assert(result3.num_roots == 0);
	assert(result3.root1 == 0.0);
	assert(result3.root2 == 0.0);

	return 0;
}
