#include "Analyzer.h"

int main() {
    Analyzer *analyzer = new Analyzer();
    analyzer->Volumen(10, 9, 8, 10000);
    delete analyzer;
    return 0;
}