#include "CreditCardValidator.h"
#include <iostream>
#include <string>

int main() {
    std::string cardNumber;

    std::cout << "=== Credit Card Validator (Luhn Algorithm) ===\n";
    std::cout << "Enter card number (spaces or hyphens allowed): ";
    std::getline(std::cin, cardNumber);

    if (CreditCardValidator::isValid(cardNumber)) {
        std::cout << "Status: VALID credit card number format.\n";
    } else {
        std::cout << "Status: INVALID credit card number format.\n";
    }

    return 0;
}