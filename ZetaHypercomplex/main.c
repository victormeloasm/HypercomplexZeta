#include <stdio.h>

typedef struct {
    double real;
    double imag;
    double dual;
} hypercomplex;

hypercomplex zeta(hypercomplex s, int n) {
    hypercomplex result = { 0.0, 0.0, 0.0 };
    double eps = 1e-8;

    for (int k = 1; k <= n; k++) {
        double inv_k_squared = 1.0 / (double)(k * k);
        double inv_k_quad = inv_k_squared * inv_k_squared;
        hypercomplex term = { inv_k_squared, 0.0, 0.0 };

        for (int j = 1; j < k; j++) {
            double inv_j_squared = 1.0 / (double)(j * j);
            double inv_j_quad = inv_j_squared * inv_j_squared;
            double inv_j_k_quad = inv_j_quad * inv_k_quad;

            term.real -= 2.0 * inv_j_quad * inv_j_k_quad + inv_j_quad * inv_j_quad * inv_k_quad;
            term.imag -= 2.0 * inv_j_quad * inv_j_k_quad - inv_j_quad * inv_j_quad * inv_k_quad;
            term.dual += 2.0 * inv_j_quad * inv_j_k_quad - inv_j_quad * inv_j_quad * inv_k_quad;
        }

        result.real += term.real;
        result.imag += term.imag;
        result.dual += term.dual;

        if (term.real < eps && term.imag < eps && term.dual < eps)
            break;
    }

    return result;
}

int main() {
    hypercomplex s;
    int n = 55;  // Set the number of terms to sum to 55

    printf("Enter the real part of the hypercomplex number: ");
    scanf("%lf", &s.real);
    printf("Enter the imaginary part of the hypercomplex number: ");
    scanf("%lf", &s.imag);
    printf("Enter the dual part of the hypercomplex number: ");
    scanf("%lf", &s.dual);

    hypercomplex z = zeta(s, n);

    printf("Zeta function value: %.10f + %.10fi + %.10fj\n", z.real, z.imag, z.dual);

    return 0;
}
