#include <iostream>

int main() {
    int num1, num2;
    std::string op;

    double answerFloat;  // Used for division, as division can be a floating-point result
    long answer;

    std::cout << "############### Calculator++ ###############" << std::endl; // Top header, makes it look cool lol
    std::cout << "Welcome to Calculator++, a calculator program written in C++." << std::endl << std::endl;

    std::cout << "Enter your first integer: ";
    std::cin >> num1;

    if (std::cin.fail()) {  // If the input is bad, exit
        std::cout << "That was not an integer." << std::endl;
        return 0;
    }

    std::cout << "Enter your operator (/*-+%): ";
    std::cin >> op;

    if (!(op == "/" || op == "*" || op == "-" || op == "+" || op == "%")) {  // If the input is bad, exit
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
        answerFloat = static_cast<double>(num1) / num2;  // Perform division, result is a double
        std::cout << "Result: " << answerFloat << std::endl;
    } else if (op == "*") {
        answer = num1 * num2;
        std::cout << "Result: " << answer << std::endl;
    } else if (op == "+") {
        answer = num1 + num2;
        std::cout << "Result: " << answer << std::endl;
    } else if (op == "-") {
        answer = num1 - num2;
        std::cout << "Result: " << answer << std::endl;
    } else if (op == "%") {
        answer = num1 % num2;
        std::cout << "Result: " << answer << std::endl;
    }

    std::cout << "############################################" << std::endl; // Bottom header, makes it look cool lol
    return 0;
}
