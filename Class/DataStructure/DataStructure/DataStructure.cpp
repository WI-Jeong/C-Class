
#include <iostream>

struct Node {
	int value = 0;
	Node* next = nullptr;
	Node* prev = nullptr;

	Node(int a = 0) {
		value = a;
	}
	void attach_to_tail(Node* node) {
		if (next == nullptr) {
			next = node;
			node->prev = this;
		}
		else {
			next->attach_to_tail(node);
		}
	}
	void print_self_and_next() {
		std::cout << value << std::endl;

		if (next != nullptr) {
			next->print_self_and_next();
		}
	}
};

struct List {
	Node* head = nullptr;

	void push_back(Node* node) {

		if (head == nullptr) {
			head = node;
		}
		else {
			head->attach_to_tail(node);
		}

	}
	void print_all() {
		if (head != nullptr) {
			head->print_self_and_next();
		}
	}
};

// pseudo code(수도코드): 의사코드 (실제로 작동하진 않는 코드)

int main() {

	List list = {};

	list.push_back(new Node(3));
	list.push_back(new Node(2));
	list.push_back(new Node(5));

	list.print_all();

}
