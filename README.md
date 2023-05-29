# Eigen-values-and-eigen-vectors-calculator

- Applicable for 3*3 matrix.

- Can calculate :

  - Characteristic equation for the matrix.
  - Eigen values.
  - Eigen vectors(coming up).
  - Can verify the values using trace,determinant and eigen value relation.
  - Can work with real as well as imaginary roots 

- Methods used :

  - Uses ***LOOPS*** to guess the first rational eigen values within the range (-100 to +100).
  - Then ***converts the cubic polynomial into a quadratic polynomial*** by using ***SYNTHETIC DIVISION***.
  - Then finds the roots for the new found quadratic polynomial.
  - Prints the eigen values as well as cross checks with trace and determinant.
