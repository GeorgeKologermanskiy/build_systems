#include <iostream>
#include "A/index.h"
#include "B/lib.h"

void foo(int a, int b) {
    std::cout << NA::gcd(a, b) << std::endl;
    std::cout << NB::sum(a, b) << std::endl;
    std::cout << NB::mul(a, b) << std::endl;
}