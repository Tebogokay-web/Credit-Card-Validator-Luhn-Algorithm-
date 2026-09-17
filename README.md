# Credit Card Validator (Luhn Algorithm)

A lightweight C++ application that validates credit card numbers using the **Luhn Algorithm** (Modulus 10). Demonstrates clean Object-Oriented Programming, input sanitization, and basic string parsing techniques.

---

## Features

* **Luhn Algorithm Implementation:** Validates account checksums according to industry standard rules.
* **Input Sanitization:** Ignores spaces and hyphens automatically.
* **Format Checking:** Enforces digit length bounds (13–19 digits).
* **Zero External Dependencies:** Built purely with C++ Standard Library (`std::string`, `std::algorithm`, `<cctype>`).

---

## Building & Running

### Prerequisites

* C++17 compliant compiler (GCC, Clang, or MSVC)
* CMake 3.14 or higher

### Build Steps

```bash
# Clone repository
git clone [https://github.com/Tebogokay-web/credit-card-validator.git](https://github.com/Tebogokay-web/credit-card-validator.git)
cd credit-card-validator

# Create build directory
mkdir build && cd build

# Compile
cmake ..
make

# Run application
./credit_card_validator
