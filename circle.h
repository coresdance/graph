#pragma once

#include "graph.h"

namespace git_test {

class circle : public graph 
{
public:
    circle();
    circle(double, std::string);

    //get
    double getLength();
    virtual double getArea();
    virtual std::string getName();

    //set
    double setLength(double length);
    virtual void setName(std::string);

    //other
    virtual void prtGraph();
    const static double PI;

protected:
    double m_dLength;

};


} // end of namespace git_test