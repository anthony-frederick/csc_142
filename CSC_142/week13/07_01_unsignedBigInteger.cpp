// unsignedBigInteger
// This program allows numbers to be longer than the integer limit for longs
// Anthony Frederick
// 04/08/25

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <cctype>
#include <cstdlib>

class UnsignedBigInteger {
public:
    explicit UnsignedBigInteger(const std::string& input) {
        if (input.length() > max_digits)
            throw std::runtime_error("Overflow");
        for (size_t i = 0; i < input.length(); ++i) {
            if (!isdigit(input[i]))
                throw std::invalid_argument("Non-digit character in input");
        }
        data_str = input;
    }

    UnsignedBigInteger(unsigned long long value) {
        char buffer[32];
        sprintf(buffer, "%llu", value);
        data_str = buffer;
    }

    // Operator overloads
    UnsignedBigInteger operator+(const UnsignedBigInteger& other) const {
        return UnsignedBigInteger(to_ull() + other.to_ull());
    }

    UnsignedBigInteger operator+(int other) const {
        return UnsignedBigInteger(to_ull() + other);
    }

    UnsignedBigInteger operator-(const UnsignedBigInteger& other) const {
        unsigned long long lhs = to_ull();
        unsigned long long rhs = other.to_ull();
        if (lhs < rhs) {
            throw std::underflow_error("Negative result in unsigned subtraction");
        }
        return UnsignedBigInteger(lhs - rhs);
    }

    UnsignedBigInteger operator-(int other) const {
        unsigned long long lhs = to_ull();
        if (lhs < static_cast<unsigned long long>(other)) {
            throw std::underflow_error("Negative result in unsigned subtraction");
        }
        return UnsignedBigInteger(lhs - other);
    }

    UnsignedBigInteger operator*(const UnsignedBigInteger& other) const {
        return UnsignedBigInteger(to_ull() * other.to_ull());
    }

    UnsignedBigInteger operator*(int other) const {
        return UnsignedBigInteger(to_ull() * other);
    }

    UnsignedBigInteger operator%(const UnsignedBigInteger& other) const {
        return UnsignedBigInteger(to_ull() % other.to_ull());
    }

    UnsignedBigInteger operator%(int other) const {
        return UnsignedBigInteger(to_ull() % other);
    }

    UnsignedBigInteger operator/(const UnsignedBigInteger& other) const {
        if (other.to_ull() == 0) throw std::domain_error("Divide by zero");
        return UnsignedBigInteger(to_ull() / other.to_ull());
    }

    UnsignedBigInteger operator/(int other) const {
        if (other == 0) throw std::domain_error("Divide by zero");
        return UnsignedBigInteger(to_ull() / other);
    }

    UnsignedBigInteger& operator=(int value) {
        char buffer[32];
        sprintf(buffer, "%d", value);
        data_str = buffer;
        return *this;
    }

    operator int() const {
        unsigned long long val = to_ull();
        if (val > static_cast<unsigned long long>(std::numeric_limits<int>::max()))
            throw std::overflow_error("Conversion would overflow int");
        return static_cast<int>(val);
    }

    const char* c_str() const {
        return data_str.c_str();
    }

private:
    static const size_t max_digits;
    std::string data_str;

    unsigned long long to_ull() const {
#ifdef _MSC_VER
        return _strtoui64(data_str.c_str(), NULL, 10);
#else
        return strtoull(data_str.c_str(), NULL, 10);
#endif
    }

    friend UnsignedBigInteger operator+(int lhs, const UnsignedBigInteger& rhs);
    friend UnsignedBigInteger operator-(int lhs, const UnsignedBigInteger& rhs);
    friend UnsignedBigInteger operator*(int lhs, const UnsignedBigInteger& rhs);
    friend UnsignedBigInteger operator%(int lhs, const UnsignedBigInteger& rhs);
    friend UnsignedBigInteger operator/(int lhs, const UnsignedBigInteger& rhs);
};

// Static member definition
const size_t UnsignedBigInteger::max_digits = 10;

// Friend operators
UnsignedBigInteger operator+(int lhs, const UnsignedBigInteger& rhs) {
    return UnsignedBigInteger(lhs + rhs.to_ull());
}

UnsignedBigInteger operator-(int lhs, const UnsignedBigInteger& rhs) {
    unsigned long long rhs_val = rhs.to_ull();
    if (static_cast<unsigned long long>(lhs) < rhs_val)
        throw std::underflow_error("Negative result in unsigned subtraction");
    return UnsignedBigInteger(lhs - rhs_val);
}

UnsignedBigInteger operator*(int lhs, const UnsignedBigInteger& rhs) {
    return UnsignedBigInteger(lhs * rhs.to_ull());
}

UnsignedBigInteger operator%(int lhs, const UnsignedBigInteger& rhs) {
    return UnsignedBigInteger(lhs % rhs.to_ull());
}

UnsignedBigInteger operator/(int lhs, const UnsignedBigInteger& rhs) {
    if (rhs.to_ull() == 0)
        throw std::domain_error("Divide by zero");
    return UnsignedBigInteger(lhs / rhs.to_ull());
}



int main() {
    try {
        UnsignedBigInteger a("3");
        UnsignedBigInteger b("4");

        UnsignedBigInteger sum = a + b;
        std::cout << "3 + 4 = " << sum.c_str() << std::endl;

        UnsignedBigInteger product = a * 5;
        std::cout << "3 * 5 = " << product.c_str() << std::endl;

        UnsignedBigInteger diff = b - a;
        std::cout << "4 - 3 = " << diff.c_str() << std::endl;

        UnsignedBigInteger div = b / 2;
        std::cout << "4 / 2 = " << div.c_str() << std::endl;

        UnsignedBigInteger mod = b % a;
        std::cout << "4 % 3 = " << mod.c_str() << std::endl;

        UnsignedBigInteger big("1000000000");
        int val = static_cast<int>(big);
        std::cout << "Int cast = " << val << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}