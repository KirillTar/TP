#include "QueueThird.h"

QueueThird::QueueThird()
{
	Queue::Queue();
}

QueueElement* QueueThird::getHead() {
	return Queue::getHead();
}

void QueueThird::setHead(QueueElement* element) {
	Queue::setHead(element);
}

void QueueThird::push(int number) {
	Queue::push(number);
}

int QueueThird::pop() {
	return Queue::pop();
}

void QueueThird::print() {
	Queue::print();
}

Queue* QueueThird::copy() {
	return Queue::copy();
}

bool QueueThird::isEmpty() {
	return Queue::isEmpty();
}

int QueueThird::numberCheck() {
	QueueElement* actual = this->getHead();
	int counter = 0;
	float HarmonicMean = 0.0;
	float Summ = 0.0;
	int Number = 0;

	while (actual->getPrev())
	{
		counter++;
		Summ += 1 / actual->getData();
		actual = actual->getPrev();
	}
	HarmonicMean = counter / Summ;

	while (actual->getPrev())
	{
		if (actual->getData() > HarmonicMean)
		{
			Number = actual->getData();
			break;
		}
		actual = actual->getPrev();
	}
	return Number;
}
