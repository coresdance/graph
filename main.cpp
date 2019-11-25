#include <iostream>
#include <vector>
#include <typeinfo>
#include "square.h"
#include "circle.h" 

int main() {
    std::vector<git_test::graph *> g;

    for (int i = 0 ; i < 5; ++i)
        if (i & 1) 
        {
            g.push_back((git_test::graph *)
                (new git_test::circle(i, "Circle_" + i))
            );
        } else 
        {
            g.push_back((git_test::graph *) 
                (new git_test::square(i, "Square_" + i))
            );
        }

    for (auto it : g)
        if (typeid(*it) == typeid(git_test::circle)) {
            ((git_test::circle*)it)->prtGraph();
        } else if (typeid(*it) == typeid(git_test::square)) {
            ((git_test::square*)it)->prtGraph();
        } else {
            //异常
            std::cout << "异常" << std::endl;
        }
    return 0;
}