#include "List.h"
#include <iostream>
using namespace std;

Node::Node(string set_item) {
	item = set_item;
	next = nullptr;
}

List::List() {
	head = nullptr;
}

void List::append(string set_item) {
	Node* current = head;
	if (head == nullptr) {
		head = new Node(set_item);
		return;
	}
	while (current->next != nullptr) {
		current = current->next;
	}
	current->next = new Node(set_item);
}

void List::printList() {
	Node* current = head;
	int i = 0;
	if (head == nullptr) {
		cout << "empty\n";
	}
	while (current != nullptr) {
		cout << i << " " << current->item << "\n";
		i++;
		current = current->next;
	}
}

void List::insert(string set_item, int slot) {
	if (slot == 0) {
		Node* tmp = head;
		head = new Node(set_item);
		if (tmp != nullptr) {
			head->next = tmp;
		}
		return;
	}

	Node* current = head;
	int i = 0;
	while (i + 1 != slot && current->next != nullptr) {
		current = current->next;
		i++;
	}
	Node* tmp = current->next;
	current->next = new Node(set_item);
	if (tmp != nullptr) {
		current->next->next = tmp;
	}
}

void List::pop() {
	if (head == nullptr) {
		return;
	}
	if (head->next == nullptr) {
		head = nullptr;
		return;
	}
	Node* current = head;
	while (current->next->next != nullptr) {
		current = current->next;
	}
	current->next = nullptr;
}