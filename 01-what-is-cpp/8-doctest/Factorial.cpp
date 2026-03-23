#include <exception>
#include <stdexcept>

/* Write during class, to demonstrate test-driven development */
int factorial(int number) {
    if (number<0) throw std::out_of_range{"number should be at least 0"};
    if (number<=1) return 1;
    else return number*factorial(number-1);
}
