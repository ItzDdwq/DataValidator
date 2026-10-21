# DataValidator (Header-only)
A simple C++ library for validating data formats.

[Return](README.md)


## What it does
- `isValidEmail(email)` — validates e-mail (presence of `@`, a dot, and no spaces).
- `isValidIP(ip)` — validates IPv4 (4 segments, numbers from 0 to 255, no leading zeros).
- `isValidPhone(phone)` — validates a Russian mobile number (10 or 11 digits, code starts with 9).

## How to include
Copy `library.h` from the [repository](https://github.com/ItzDdwq/DataValidator) or [release](https://github.com/ItzDdwq/DataValidator/releases/tag/v1.0) into your project and include it.

```cpp
#include "library.h"
#include <iostream>

int main() {
    std::cout << isValidEmail("test@mail.ru") << "\n";   // true
    std::cout << isValidIP("100.100.0.0") << "\n";       // true
    std::cout << isValidPhone("+79123456789") << "\n";   // true
    
    std::cout << isValidEmail("bad_email") << "\n";      // false
    
    return 0;
}
```

## Requirements
- C++17 or higher.
- A compiler that supports `std::string` and `std::stringstream`.
