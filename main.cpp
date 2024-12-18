#include <iostream>

int main() {
    int num1, num2;
    std::string op;

    double answer1;  // Used for division, as division can be a floating-point result
    long answer2, answer3, answer4;

    std::cout << "############# calculator++ #############" << std::endl; // Top header, makes it look cool lol
    std::cout << "Welcome to Calculator++, a calculator program written in C++." << std::endl << std::endl;

    std::cout << "Enter your first integer: ";
    std::cin >> num1;

    if (std::cin.fail()) {  // If the input is bad, exit
        std::cout << "That was not an integer." << std::endl;
        return 0;
    }

    std::cout << "Enter your operator (/*-+): ";
    std::cin >> op;

    if (!(op == "/" || op == "*" || op == "-" || op == "+")) {  // If the input is bad, exit
        std::cout << "That was not a correct operator." << std::endl;
        return 0;
    }

    std::cout << "Enter your second integer: ";
    std::cin >> num2;

    if (std::cin.fail()) {  // If the input is bad, exit
        std::cout << "That was not an integer." << std::endl;
        return 0;
    }

    if (op == "/") {
        if (num2 == 0) {
            std::cout << "Cannot divide by zero." << std::endl;
            return 0;
        }
        answer1 = static_cast<double>(num1) / num2;  // Perform division, result is a double
        std::cout << "Result: " << answer1 << std::endl;
    }
    else if (op == "*") {
        answer2 = num1 * num2;
        std::cout << "Result: " << answer2 << std::endl;
    }
    else if (op == "+") {
        answer3 = num1 + num2;
        std::cout << "Result: " << answer3 << std::endl;
    }
    else if (op == "-") {
        answer4 = num1 - num2;
        std::cout << "Result: " << answer4 << std::endl;
    }

    std::cout << "########################################" << std::endl; // Bottom header, makes it look cool lol
    return 0;
}
