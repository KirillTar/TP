#include "QueueFirst.h"

int QueueFirst::numberCheck() {
	QueueElement *actual = this->getHead();
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
