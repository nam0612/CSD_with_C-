#include <iostream>
#include "Product.cpp"

using namespace std;

class ProductNode {
public:
	Product data;
	ProductNode* next;

	/*ProductNode() {
	}*/

	ProductNode(Product data) {
		this->data = data;
		this->next = NULL;
	}

};
