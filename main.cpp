#include <iostream>
#include "List.h"

using namespace std;


int main() {
	List list;
	string input;
	int slot;
	while (input != "exit") {
		cin >> input;
		if (input == "append") {
			cin >> input;
			list.append(input);
		}
		if (input == "print") {
			cin >> input;
			if (input == "list") {
				list.printList();
			}
		}
		if (input == "insert") {
			cin >> input;
			cin >> slot;
			list.insert(input, slot);
		}
		if (input == "pop") {
			list.pop();
		}
	}
}