#include <iostream>
#include <string>

//linked list

#include "ProductNode.cpp"
using namespace std;

class ProductList
{
private:
	ProductNode *head, *tail;
public:
	ProductList() {
		head = NULL;
		tail = NULL;
	}

	ProductNode* findProductByCode(string pcode) {
		ProductNode* it = head;
		while (it != NULL) {
			if (it->data.getPcode()._Equal(pcode)) {
				return it;
			}
			it = it->next;
		}
	}

	void addHead(Product data) {
		ProductNode* it = new ProductNode(data);
		
		if (head == NULL) {
			head = it;
			tail = it;
		}
		else {
			it->next = head;
			head = it;
		}
	}

	void addTail(Product data) {
		ProductNode* it = new ProductNode(data);

		if (head == NULL) {
			head = it;
			tail = it;
		}
		else {
			tail->next = it;
			tail = it;
		}
	}

	void printList() {
		ProductNode* it = head;
		while (it != NULL) {
			it->data.toString();
			it = it->next;
		}
	}
	void remove(string pcode) {
		ProductNode* it = head;

		while (it != NULL) {
			if (it->data.getPcode()._Equal(pcode)) {
				removeNode(it);
				break;
			}
			it = it->next;
		}
	}
	void removeNode(ProductNode* node) {
		ProductNode* it = head;
		if (node == tail) {
			while (it != NULL)
			{
				if (it->next == node) {
					it->next = nullptr;
					break;
				}
				it = it->next;
			}
		}
		else {
			node->data = node->next->data;
			node->next = node->next->next;
		}
	}

};


