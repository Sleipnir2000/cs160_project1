#ifndef _MAX_HPP
#define _MAX_HPP

#include "tree.hpp"
#include <iostream>

// You will need to implement a complete visitor that
// finds the maximum element in the tree. You can use
// the print and sum visitors for reference.

// WRITEME
class MaxVisitor : public Visitor {
    private:
    bool isInTopLevel = true; 

    public:
    int max;
    void visitNode(Node* node);
};

#endif
