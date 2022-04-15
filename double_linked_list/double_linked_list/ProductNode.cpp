#include "Product.cpp"

class ProductNode {
public:
	Product data;
	ProductNode* prev, * next;

	ProductNode() {
	}

	ProductNode(Product data) {
		this->data = data;
	}
};