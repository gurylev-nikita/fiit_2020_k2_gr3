#pragma once
#include <stack>
#include "Node.h"

class Itr
{
private:
	stack <Node*> st;
	Node* root;
public:
	Itr(Node* _root)
	{
		st.push(root);
	}
	bool hasNext()
	{
		return !st.empty();
	}
	int Next()
	{
		Node* tmp = st.top();
		st.pop();
		int val = tmp->getKey();
		if (tmp->getRight() != NULL)
			st.push(tmp->getRight());
		if (tmp->getLeft() != NULL)
			st.push(tmp->getLeft());
		return val;
	}
};

