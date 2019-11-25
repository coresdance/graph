#pragma once

#include "graph.h"

namespace git_test {

class square : public graph 
{
public:
    square();
    square(double side, std::string);

    //get
    double getSide();
    virtual double getArea();
    virtual std::string getName();

    //set
    double setSide(double side);
    virtual void setName(std::string);

    //other
    virtual void prtGraph();


protected:
    double m_dSide;


};



} // end of namespace git_test