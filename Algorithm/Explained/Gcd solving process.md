Procedure
The Euclidean algorithm proceeds in a series of steps such that the output of each step is used as an input for the next one. Let k be an integer that counts the steps of the algorithm, starting with zero. Thus, the initial step corresponds to k = 0, the next step corresponds to k = 1, and so on.

Each step begins with two nonnegative remainders rk−1 and rk−2. Since the algorithm ensures that the remainders decrease steadily with every step, rk−1 is less than its predecessor rk−2. The goal of the kth step is to find a quotient qk and remainder rk that satisfy the equation

{\displaystyle r_{k-2}=q_{k}r_{k-1}+r_{k}}{\displaystyle r_{k-2}=q_{k}r_{k-1}+r_{k}}
and that have 0 ≤ rk < rk−1. In other words, multiples of the smaller number rk−1 are subtracted from the larger number rk−2 until the remainder rk is smaller than rk−1.

In the initial step (k = 0), the remainders r−2 and r−1 equal a and b, the numbers for which the GCD is sought. In the next step (k = 1), the remainders equal b and the remainder r0 of the initial step, and so on. Thus, the algorithm can be written as a sequence of equations

{\displaystyle {\begin{aligned}a&=q_{0}b+r_{0}\\b&=q_{1}r_{0}+r_{1}\\r_{0}&=q_{2}r_{1}+r_{2}\\r_{1}&=q_{3}r_{2}+r_{3}\\&\,\,\,\vdots \end{aligned}}}{\displaystyle {\begin{aligned}a&=q_{0}b+r_{0}\\b&=q_{1}r_{0}+r_{1}\\r_{0}&=q_{2}r_{1}+r_{2}\\r_{1}&=q_{3}r_{2}+r_{3}\\&\,\,\,\vdots \end{aligned}}}
If a is smaller than b, the first step of the algorithm swaps the numbers. For example, if a < b, the initial quotient q0 equals zero, and the remainder r0 is a. Thus, rk is smaller than its predecessor rk−1 for all k ≥ 0.

Since the remainders decrease with every step but can never be negative, a remainder rN must eventually equal zero, at which point the algorithm stops. The final nonzero remainder rN−1 is the greatest common divisor of a and b. The number N cannot be infinite because there are only a finite number of nonnegative integers between the initial remainder r0 and zero.

Proof of validity
