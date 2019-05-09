#ifndef C_QUEUE
#define C_QUEUE
#define maxsize 10
using namespace std;

typedef struct cqueue_node {
	int data;
	int numOfPeople;
	char *groupName = new char[1];
	char *specialSeats = new char[1];
	struct cqueue_node *next;
}node;

struct stack {
	char *fullName;
	char *email;
	int data;

};

class Customer {
private:
	// pointers to front and rear element
	node *front, *rear;
	int top;
	stack *a = new stack[1];

public:
	Customer() {
		front = rear = nullptr;
		top = 0;
	}
	//stack
	bool isfull();
	bool isempty();
	void push(int x);
	void pop();
	void display();
	void Top();
	void Size();

	//for queue
	void enqueue(int data); // insert an element
	int dequeue(); // removes the front element
	void displayQueue(); // display the circular queue

	//general calls
	void displayLine() { this->displayQueue(); };
	bool addGroup();
};

#endif