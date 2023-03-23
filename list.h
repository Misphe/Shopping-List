#pragma once
#include <string>
using namespace std;

class Node {
	string item;
	Node* next;
public:
	Node(string set_item);
	friend class List;
};

class List {
private:
	Node* head;

public:
	List();

	void append(string set_item);
	void printList();
	void insert(string set_item, int slot);
	void pop();
};

