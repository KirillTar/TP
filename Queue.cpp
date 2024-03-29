#include <iostream>
#include "Queue.h"

Queue::Queue() {};

void Queue::setHead(QueueElement* element) {
	this->head = element;
}

QueueElement* Queue::getHead() {
	return head;
}

void Queue::push(int number) {
	QueueElement* element = new QueueElement(number, head);
	this->head = element;
}

int Queue::pop() {
	if (isEmpty()) return -1;

	QueueElement* last = this->head;
	QueueElement* prev = last;

	while (last)
	{
		if (last->getPrev()) {
			prev = last;
			last = last->getPrev();
		}
		else {
			break;
		}
	}

	int value = last->getData();
	prev->setPrev(nullptr);

	delete last;

	return value;
}

void Queue::print() {
	QueueElement* currnet = this->head;

	while (currnet)
	{
		std::cout << currnet->getData();
		currnet = currnet->getPrev();
		if (currnet) std::cout << " -> ";
	}

	std::cout << std::endl;

}

Queue* Queue::copy()
{
	Queue *QueueNew = new Queue;
	QueueNew->head = new QueueElement(*this->head);
	QueueElement *currnet = QueueNew->head;

	while (currnet)
	{
		QueueElement *prev = currnet->getPrev();

		if (prev) {
			QueueElement *tmp = new QueueElement(*prev);
			currnet->setPrev(tmp);
			currnet = tmp;
		} else {
			break;
		}
	}

	std::cout << "Queue copyed" << std::endl;
	return QueueNew;
}

bool Queue::isEmpty() {
	return this->head == nullptr;
}


