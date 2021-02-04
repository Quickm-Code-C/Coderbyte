#pragma once

#include <string>
#include <vector>
#include <utility>

struct Node
{
	std::string	data;
	Node *		left;
	Node *		right;
};

typedef struct Node Node;

class TreeGraphs
{
public:
			std::string TreeConstructor(std::string strArr[], int length);
			std::string SymmetricTree(std::string strArr[], int length);
			std::string	PreorderTraversal(std::string strArr[], int length);


protected:
	std::vector<std::pair<int, int>>	parseInput(std::vector<std::string> input);
	void								parseInputString(std::string str, int & num1, int & num2);

	// Symmetric Tree code challenge
	Node *								fillTree(std::vector<std::string> input, Node * root, int index, int length);
	Node *								createTreeNode(std::string data);
	bool								isTreeSymmetric(Node * node1, Node * node2);

	// Preorder Traversal code challenge
	std::string							createPreorderOutput(Node * root);


};

