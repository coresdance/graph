#pragma once

#include <string>

namespace git_test {

class graph 
{
public:
    //get
    virtual double getArea() = 0;
    virtual std::string getName() = 0;

    //set
    virtual void setName(std::string) = 0;
    
    //other
    virtual void prtGraph() = 0;
    
protected:
    std::string m_sName;
    double m_dArea;
};

} // end of namespace git_test