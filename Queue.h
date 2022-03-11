#include "QueueElement.h"
#pragma once

class Queue 
{
public:
	Queue();
	virtual void push(int element);
	virtual int pop();
	virtual void print();
	virtual bool isEmpty();
	virtual QueueElement* getHead();
	virtual void setHead(QueueElement* element);
	virtual Queue* copy();
	int getResultValue();

private:
	QueueElement *head;
};


