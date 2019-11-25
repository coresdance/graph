#include "circle.h" 
#include <iostream>
#include <math.h>

namespace git_test {

const double circle::PI = 3.141592653589793238463;

circle::circle() {
    circle(10, "Alice");
}

circle::circle(double length, std::string name) {
    m_sName = "" + name;
    m_dLength = length;
    m_dArea = PI * length * length;
}

double circle::getLength() {
    return m_dLength;
}
double circle::getArea() {
    return m_dArea;
}
std::string circle::getName() {
    return m_sName;
}

double circle::setLength(double length) {
    m_dLength = length;
    m_dArea = PI * length * length;
}

void circle::setName(std::string String) {
    m_sName = String;
}

void circle::prtGraph() {
    std::cout << "this is a circle, its name is " << m_sName << " , and its length is " << m_dLength << " , its area is " << m_dArea << std::endl; 
}


} // end of namespace git_test