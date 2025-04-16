#include <iostream>

enum class Operation{Add, Subtract, Multiply, Divide};

struct Calculator{

    public:
        Calculator(){
        };

        Calculator(Operation operation);
        int Calculate(int a, int b);
        Operation get_operation(){
            return m_operation;}

    private:
        Operation m_operation;
};

Calculator::Calculator(Operation operation): m_operation{operation} {};

int Calculator::Calculate(int a, int b){

switch(get_operation()){

    case Operation::Add:{
        return a + b;
    }
    case Operation::Subtract:{
        return a - b;
    }
    case Operation::Multiply:{
        return a * b;
    }
    case Operation::Divide:{
        return a / b;
    }

    default: {
        std::cout << "Not an operator that exists here..."<< std::endl;
        break;
    }
}
}

int main(){

    Calculator calc1 = {Operation::Add};
    std::cout<<"Add" << calc1.Calculate(2, 9) << std::endl;

    Calculator calc2 = {Operation::Subtract};
    std::cout<<"Subtract" << calc1.Calculate(7, 3) << std::endl;

    Calculator calc3 = {Operation::Multiply};
    std::cout<<"Multiply" << calc1.Calculate(5, 6) << std::endl;

    Calculator calc4 = {Operation::Divide};
    std::cout<<"Divide" << calc1.Calculate(10, 2) << std::endl;

    return 0;

}