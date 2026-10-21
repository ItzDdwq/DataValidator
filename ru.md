# DataValidator (Header-only)
Простая библиотека на C++ для проверки форматов данных.

[Вернуться](README.md)


## Что умеет
- `isValidEmail(email)` — проверка e-mail (наличие `@`, точки и отсутствие пробелов).
- `isValidIP(ip)` — проверка IPv4 (4 сегмента, числа от 0 до 255, без ведущих нулей).
- `isValidPhone(phone)` — проверка мобильного номера РФ (10 или 11 цифр, код начинается с 9).


## Как подключить
Скопируй `library.h` из [репозитория](https://github.com/ItzDdwq/DataValidator) или [release](https://github.com/ItzDdwq/DataValidator/releases/tag/v1.0) в свой проект и подключи его. 

```cpp
#include "library.h"
#include <iostream>
#include "library.h"

int main() {
    std::cout << isValidEmail("test@mail.ru") << "\n";   // true
    std::cout << isValidIP("100.100.0.0") << "\n";       // true
    std::cout << isValidPhone("+79123456789") << "\n";   // true
    
    std::cout << isValidEmail("bad_email") << "\n";      // false
    
    return 0;
}
```

## Требования
- C++17 или выше.
- Компилятор поддерживающий `std::string` и `std::stringstream`.
