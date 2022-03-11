#include "QueueElement.h"
#pragma once

class Queue 
{
public:
	Queue();
	void push(int element);
	int pop();
	void print();
	bool isEmpty();
	QueueElement* getHead();
	void setHead(QueueElement* element);
	Queue* copy();
	int numberCheck();

private:
	QueueElement *head;
};


