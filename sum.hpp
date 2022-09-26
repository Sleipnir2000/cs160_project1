#ifndef _SUM_HPP
#define _SUM_HPP


#include "tree.hpp"
#include <iostream>

// A visitor which sums all the node values in
// the tree. You need to implement the visitNode
// function for this visitor.
class SumVisitor : public Visitor {
public:
	int sum = 0;
	void visitNode(Node* node);
};

#endif
