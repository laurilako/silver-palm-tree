#include "src/calculator.h"

int main() {
    assert(calculator(1.0, "+", 1.0) == 2.0); //2
    assert(calculator(5.0, "-", 2.0) == 3.0); //3
    assert(calculator(10.0, "/", 2.0) == 5.0); //5
    assert(calculator(5.0, "*", 2.0) == 10.0); //10
    assert(calculator(10.0, "/", 0.0) == 1.0); //Division by zero error
    assert(calculator(2.0, ";", 4.0) == 1.0); //Invalid operator error
    return 0;
}
