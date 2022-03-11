#include "QueueElement.h"

QueueElement::QueueElement(int data, QueueElement *prev) {
	this->data = data;
	this->prev = prev;
}

QueueElement::QueueElement(const QueueElement &stackElement) {
	this->data = stackElement.data;
	this->prev = stackElement.prev;
}

QueueElement::~QueueElement() {
	this->data = 0;
	this->prev = nullptr;
}

int QueueElement::getData() {
	return data;
}

QueueElement* QueueElement::getPrev() {
	return prev;
}

void QueueElement::setPrev(QueueElement* prev) {
	this->prev = prev;
}
