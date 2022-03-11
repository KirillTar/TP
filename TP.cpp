#include <iostream>
#include <string>
#include <conio.h>

#include "Queue.h"
#include "QueueFirst.h"
#include "QueueSecond.h"
#include "QueueThird.h"

using namespace std;

template <typename StackLike>
StackLike* QueueCurrent;

QueueFirst* Queue1;
QueueSecond* Queue2;
QueueThird* Queue3;
Queue* buffer;

template <typename StackLike>
void pushLoop(StackLike queue) {
	int x;

		cout << "Enter nuber: ";
		cin >> x;
		queue->push(x);
		cout << endl << "Press any key to exit" << endl;
		_getch();
}

template <typename StackLike>
void popLoop(StackLike queue) {

	if (queue->isEmpty()) {
		cout << "Queue is empty"  << endl;
	}
	else 
	{
		cout << queue->pop() << "is poped" << endl;
	}
	cout << endl << "Press any key to exit" << endl;
	_getch();
}


template <typename StackLike>
void printLoop(StackLike queue) {
	if (queue->isEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else
	{
		queue->print();
	}
	cout << endl << "Press any key to exit" << endl;
	_getch();
}

template <typename StackLike>
void copyLoop(StackLike* queue) {
	buffer = queue->copy();
}

template <typename StackLike>
void uniteLoop(StackLike* stack) {
	QueueElement* Actual = buffer->getHead();

	while (Actual->getPrev()) {
		Actual = Actual->getPrev();
	}

	Actual->setPrev(stack->getHead());
	stack->setHead(buffer->getHead());

	buffer = nullptr;
	cout << endl << "Press any key to exit" << endl;
	_getch();
}

template <typename StackLike>
void calculateLoop(StackLike queue) {
	if (queue->isEmpty()) {
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << "Task: " << queue->numberCheck() << endl;

	}
	cout << endl << "Press any key to exit" << endl;
	_getch();
}

template <typename StackLike>
void commandList(int command, StackLike queue) {
	switch (command)
	{
	case 1:
		pushLoop(queue);	
		break;

	case 2:
		popLoop(queue);
		
		break;
	case 3:
		printLoop(queue);
		break;

	case 4:
		if (queue->isEmpty()) {
			cout << "Queue is empty" << endl;
			break;
		}
		copyLoop(queue);
		cout << endl << "Press any key to exit" << endl;
		_getch();
		break;

	case 5:
		uniteLoop(queue);
		break;

	case 6:
		calculateLoop(queue);
		break;
	
	case 0:
		exit(0);
		break;
	}
}

int main()
{
	Queue1 = new QueueFirst();
	Queue2 = new QueueSecond();
	Queue3 = new QueueThird();

	int QueueActive = 0;
	int command = 0;

	while (true)
	{
		printf("\033[1;44mCommands list:\033[0m \n\n");
		printf("1) Push element \n");
		printf("2) Pop element \n");
		printf("3) Print queue \n");
		printf("4) Copy queue \n");
		printf("5) Unite queues \n");
		printf("6) Task exe \n");
		printf("0) Exit \n");

		cout << endl << "Queue number:";
		cin >> QueueActive;

		if (QueueActive < 1 || QueueActive > 3)
		{
			cout << " Wrong queue"<< endl;
				continue;
		}
		cout << "Command number:";
		cin >> command;

				system("@cls||clear");
				switch (QueueActive) 
				{
					case 1:
						QueueCurrent<QueueFirst> = Queue1;
						commandList(command, QueueCurrent<QueueFirst>);
						break;
					case 2:
						QueueCurrent<QueueSecond> = Queue2;
						commandList(command, QueueCurrent<QueueSecond>);
						break;
					case 3:
						QueueCurrent<QueueThird> = Queue3;
						commandList(command, QueueCurrent<QueueThird>);
						break;
				}
				system("@cls||clear");
	}
}

