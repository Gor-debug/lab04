#include <iostream>
#include "formatter_ex.h"
#include "solver.h"

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << formatter_ex("Solving quadratic equation") << std::endl;
    solve(a, b, c);
    return 0;
}
