class QueueElement{
public:
	QueueElement(int data, QueueElement *prev);
	QueueElement(const QueueElement &stackElement);

	~QueueElement();
	int getData();
	QueueElement* getPrev();
	void setPrev(QueueElement* prev);

private:
	int data;
	QueueElement *prev;
};