#include "inheritance.hpp"

Inheritance::CBase::CBase () {
    std::cout << "Constuctor of CBase class" << std::endl;
}

Inheritance::CBase::~CBase () {
    std::cout << "Destructor of CBase class" << std::endl;
}

Inheritance::CDerivedA::CDerivedA () {
    std::cout << "Constuctor of CDerivedA class" << std::endl;
}

Inheritance::CDerivedA::~CDerivedA () {
    std::cout << "Destructor of CDerivedA class" << std::endl;
}

Inheritance::CDerivedB::CDerivedB () {
    std::cout << "Constuctor of CDerivedB class" << std::endl;
}

Inheritance::CDerivedB::~CDerivedB () {
    std::cout << "Destructor of CDerivedB class" << std::endl;
}

Inheritance::CDiamondProblem::CDiamondProblem () {
    std::cout << "Constructor of CDiamondProblem class" << std::endl;
}
Inheritance::CDiamondProblem::~CDiamondProblem () {
    std::cout << "Destructor of CDiamondProblem class" << std::endl;
}
