#include "square.h"
#include <iostream>


namespace git_test {

square::square() {
    square(10, "Bob");
}

square::square(double side, std::string name) {
    m_dSide = side;
    std::cout << "before " << &m_sName ;
    m_sName = "" + name;
    std::cout << " after " << &m_sName << std::endl;
    m_dArea = m_dSide * m_dSide;
}

double square::getSide() {
    return m_dSide;
}
double square::getArea() {
    return m_dArea;
}
std::string square::getName() {
    return m_sName;
}

double square::setSide(double side) {
    m_dSide = side;
    m_dArea = m_dSide * m_dSide;
}

void square::setName(std::string Name) {
    m_sName = Name;
}

void square::prtGraph() {
    std::cout << "this is a square, its name is " << m_sName << " , and its side is " << m_dSide << " , its area is " << m_dArea << std::endl; 
}


} // end of namespace git_test