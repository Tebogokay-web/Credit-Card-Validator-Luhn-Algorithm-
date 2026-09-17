#ifndef CREDIT_CARD_VALIDATOR_H
#define CREDIT_CARD_VALIDATOR_H

#include <string>

class CreditCardValidator {
public:
    // Validates credit card number format using the Luhn Algorithm
    static bool isValid(const std::string& cardNumber);

private:
    // Helper function to remove non-numeric characters and validate input
    static std::string sanitizeInput(const std::string& input);
};

#endif // CREDIT_CARD_VALIDATOR_H