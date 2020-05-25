#include <iostream>
#include "BinaryTree.h"
#include "Itr.h"

int main()
{
	Node* c1 = new Node(4);
	Node* c2 = new Node(6);
	Node* c3 = new Node(3);
	Node* c4 = new Node(5, NULL, c2);
	Node* c5 = new Node(2, c1, c4);
	Node* c6 = new Node(1, c5, c3);
	Node* root = c6;
	BinaryTree tree(root);

	cout << " Bypass in direct order: " << endl;
	tree.BypassDirectOrder();
	cout << endl;
	cout << " Bypass in reverse order: " << endl;
	tree.BypassReverseOrder();
	cout << endl;
	cout << " Bypass in width: " << endl;
	tree.BypassInWidth();
	cout << endl;

	system("pause");
	return 0;
}