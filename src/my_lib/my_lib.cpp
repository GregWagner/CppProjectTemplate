#include <iostream>

#include "my_lib.h"

int print_hello_world() {
    std::cout << "Cout: Hello World" << '\n';

    // Adress Sanitizer should see this
    // int *x = new int[42];

    return 1;
}

unsigned int factorial(unsigned int number) {
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
