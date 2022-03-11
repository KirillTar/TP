#include "QueueSecond.h"

QueueSecond::QueueSecond()
{
	Queue::Queue();
}

void QueueSecond::setHead(QueueElement* element) {
	Queue::setHead(element);
}

QueueElement* QueueSecond::getHead() {
	return Queue::getHead();
}

void QueueSecond::push(int number) {
	Queue::push(number);
}

int QueueSecond::pop() {
	return Queue::pop();
}

void QueueSecond::print() {
	Queue::print();
}

Queue* QueueSecond::copy() {
	return Queue::copy();
}


bool QueueSecond::isEmpty() {
	return Queue::isEmpty();
}

int QueueSecond::numberCheck() {
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
