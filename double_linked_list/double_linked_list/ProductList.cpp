<<<<<<< HEAD
#include "ProductNode.cpp"

class ProductList {
public:
	ProductNode* head, *tail;

	ProductList() {
		head = NULL;
		tail = NULL;
	}

	void addTail(Product data) {
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

	void addHead(Product data) {
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

	ProductNode* search(string pcode) {
		ProductNode* seek;
		while (seek != NULL) {
			if (seek->data.getPcode()._Equal(pcode))
				return seek;
		}
		return NULL;
	}

	void remove(string pcode) {
		ProductNode* it = head;
			while (it != NULL) {
				if (it->data.getPcode()._Equal(pcode)) {
					if (it->next == NULL) {
						tail = tail->prev;
						tail->next = nullptr;
					}
					else {
						it->prev->next = it->next;
						it->next->prev = it->prev;
					}
				}
				it = it->next;
		}
		

	}

	void printList() {
		ProductNode* it = head;
		while (it != NULL) {
			it->data.toString();
			it = it->next;
		}
	}
};

=======
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

>>>>>>> e41e260305395a14a90652a2e5cdb136968c1c18
