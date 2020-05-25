#pragma once
#include <queue>
#include <stack>
#include "Node.h"

class BinaryTree
{
private:
	Node* root;
public:
	BinaryTree(Node* _root = NULL) : root(_root) {};
	void BypassDirectOrder();
	void BypassReverseOrder();
	void BypassInWidth();
};

void BinaryTree::BypassDirectOrder()
{
	if (root == NULL)
	{
		return;
	}
	stack<Node*> st;
	st.push(root);
	while (!st.empty())
	{
		Node* tmp = st.top();
		st.pop();
		cout << *tmp;
		if (tmp->getRight() != NULL)
			st.push(tmp->getRight());
		if (tmp->getLeft() != NULL)
			st.push(tmp->getLeft());
	}
	cout << endl;
}

void BinaryTree::BypassReverseOrder()
{
	if (root == NULL)
	{
		return;
	}
	stack<Node*> st1;
	stack<Node*> st2;

	st1.push(root);
	while (!st1.empty())
	{
		Node* tmp = st1.top();
		st1.pop();
		st2.push(tmp);
		if (tmp->getLeft() != 0)
			st1.push(tmp->getLeft());
		if (tmp->getRight() != 0)
			st1.push(tmp->getRight());
	}
	while (!st2.empty())
	{
		Node* tmp = st2.top();
		st2.pop();
		cout << *tmp;
	}
	cout << endl;
}

void BinaryTree::BypassInWidth()
{
	if (root == NULL)
	{
		return;
	}
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* tmp = q.front();
		q.pop();
		cout << *tmp;
		if (tmp->getLeft() != NULL)
			q.push(tmp->getLeft());
		if (tmp->getRight() != NULL)
			q.push(tmp->getRight());
	}
	cout << endl;
}
