#pragma once
#include <iostream>

using namespace std;

class Node
{
private:
	int key;
	Node* pParent;
	Node* pLeft;
	Node* pRight;
public:
	Node(int key = 0, Node* pLeft = NULL, Node* pRight = NULL, Node* pParent = NULL);
	Node(const Node& copy);
	~Node() {};

	Node* getLeft() const;
	Node* getRight() const;
	Node* getParent() const;
	int getKey() const;

	void setpLeft(Node* _left);
	void setpRight(Node* _right);
	void setpParent(Node* _parent);
	void setKey(int _key);

	friend ostream& operator<<(ostream& out, const Node& root)
	{
		out << " " << root.key;
		return out;
	}
};

Node::Node(int key, Node* pLeft, Node* pRight, Node* pParent)
{
	this->key = key;
	this->pLeft = pLeft;
	this->pRight = pRight;
	this->pParent = pParent;
}

Node::Node(const Node& copy)
{
	key = copy.key;
	pParent = copy.pParent;
	pLeft = copy.pLeft;
	pRight = copy.pRight;
}

Node* Node::getLeft() const
{
	return pLeft;
}
Node* Node::getRight() const
{ 
	return pRight;
}
Node* Node::getParent() const 
{ 
	return pParent;
}

int Node::getKey() const
{
	return key;
}

