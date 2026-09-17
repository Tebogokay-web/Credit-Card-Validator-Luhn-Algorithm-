#include "CreditCardValidator.h"
#include <algorithm>
#include <cctype>

bool CreditCardValidator::isValid(const std::string& cardNumber) {
    std::string cleanNumber = sanitizeInput(cardNumber);

    // Standard card lengths range between 13 and 19 digits
    if (cleanNumber.length() < 13 || cleanNumber.length() > 19) {
        return false;
    }

    int sum = 0;
    bool doubleDigit = false;

    // Process digits from right to left (Luhn Algorithm)
    for (int i = static_cast<int>(cleanNumber.length()) - 1; i >= 0; --i) {
        int digit = cleanNumber[i] - '0';

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return (sum % 10 == 0);
}

std::string CreditCardValidator::sanitizeInput(const std::string& input) {
    std::string cleaned = "";
    for (char c : input) {
        if (std::isdigit(static_cast<unsigned char>(c))) {
            cleaned += c;
        } else if (c != ' ' && c != '-') {
            // Return empty string if invalid non-numeric/separator character is found
            return ""; 
        }
    }
    return cleaned;
}