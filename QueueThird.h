#include "Queue.h"

class QueueThird : protected Queue
{
public:
	QueueThird();
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