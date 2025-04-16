#include <iostream>

enum class Operation{Add, Subtract, Multiply, Divide};

struct Calculator{

    public:
        Calculator(Operation operation);

    private:
        Operation m_operation;
};