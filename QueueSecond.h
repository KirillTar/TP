#include "Queue.h"

class QueueSecond : private Queue
{
public:
	QueueSecond();
	void push(int element);
	int pop();
	void print();
	bool isEmpty();
	QueueElement* getHead();
	void setHead(QueueElement* element);
	Queue* copy();
	int numberCheck();

private:
};

