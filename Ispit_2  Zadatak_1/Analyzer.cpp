#include "Analyzer.h"


Analyzer::Analyzer() {}

double Analyzer::Volumen(double a, double b, double c, int N) {
    TRandom3 random(0);
    int br = 0;
    double x, y, z;

    for (int i = 0; i < N; i++) {
        x = random.Uniform(-a, a);
        y = random.Uniform(-b, b);
        z = random.Uniform(-c, c);

        if (x * x / (a * a) + y * y / (b * b) + z * z / (c * c) <= 1) {
            br++;
        }
    }

    double volumen = (double) br / N * (2 * a) * (2 * b) * (2 * c);
    std::cout << "Volumen elipsoida je: " << volumen << std::endl;
    return volumen;
}