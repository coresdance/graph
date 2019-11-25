#include <iostream>
#include <vector>
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

    
    return 0;
}