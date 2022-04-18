#include "ProductNode.cpp"

class ProductList {
public:
	ProductNode* head, *tail;

	ProductList() {
		head = nullptr;
		tail = nullptr;
	}

	void addTail(Product data) {
		ProductNode* newNode = new ProductNode(data);

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	void addHead(Product data) {
		ProductNode* newNode = new ProductNode(data);

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
		}
	}

	ProductNode* search(string pcode) {
		ProductNode* seek = head;
		while (seek != NULL) {
			if (seek->data.getPcode()._Equal(pcode))
				return seek;
			seek = seek->next;
		}
		return NULL;
	}

	void remove(string pcode) {
		ProductNode* seek = head;
		if (head == nullptr)
			cout << "List empty";
		else {
			while (seek != nullptr){
				if (seek->data.getPcode()._Equal(pcode)) {
					if (seek->next == nullptr) {
						tail = tail->prev;
						tail->next = nullptr;
					}
					else if(seek->prev == nullptr)
					{
						head = head->next;
						head->prev = nullptr;
					}
					else {
						seek->prev->next = seek->next;
						seek->next->prev = seek->prev;
					}
				}
				seek = seek->next;
			}
		}
	}

	void printList() {
		ProductNode* seek = head;
		while (seek != nullptr) {
			seek->data.toString();
			seek = seek->next;
		}

	}
		
		
};

