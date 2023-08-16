#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Entrez les coefficients a, b et c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("L'équation a une infinité de solutions.\n");
            } else {
                printf("L'équation n'a pas de solution.\n");
            }
        } else {
            double solution = -c / b;
            printf("L'équation a une solution unique : x = %.2lf\n", solution);
        }
    } else {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double racine_discriminant = sqrt(discriminant);
            double solution1 = (-b + racine_discriminant) / (2 * a);
            double solution2 = (-b - racine_discriminant) / (2 * a);
            printf("L'équation a deux solutions réelles : x1 = %.2lf et x2 = %.2lf\n", solution1, solution2);
        } else if (discriminant == 0) {
            double solution = -b / (2 * a);
            printf("L'équation a une solution double : x = %.2lf\n", solution);
        } else {
            double partie_reelle = -b / (2 * a);
            double partie_imaginaire = sqrt(-discriminant) / (2 * a);
            printf("L'équation a deux solutions complexes : x1 = %.2lf + %.2lfi et x2 = %.2lf - %.2lfi\n",
                   partie_reelle, partie_imaginaire, partie_reelle, partie_imaginaire);
        }
    }

    return 0;
}
