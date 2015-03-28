/* MyStack program*/
#define maximumDept = 10; // default size of MyStack
class MyStack
{
private:
	int numberOfitems;
	int topOfMyStack;
	int*items;
public:
	MyStack(int size); // contructor
	virtual ~MyStack(); // decontructor
	void push(int); // pushing into stact
	int pop();
	int peek(); // peeking an item to display
	bool isFull(); // check when stack is full
	bool isEmpty(); // check when it is empty

};