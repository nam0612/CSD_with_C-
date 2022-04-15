#include "ProductNode.cpp"

class ProductList {
	ProductNode* head, *tail;

	ProductList() {
		head = NULL;
		tail = NULL;
	}

	void addNodeTail(Product data) {
		ProductNode* newNode = new ProductNode(data);

		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	void addNodeHead(Product data) {
		ProductNode* newNode = new ProductNode(data);

		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
		}
	}

	ProductNode* printList(string pcode) {
		ProductNode* seek;
		while (seek != NULL) {
			if (seek->data.getPcode()._Equal(pcode))
				return seek;
		}
		return NULL;
	}
};

