#include <iostream>;
#include "Header.h";
#pragma warning(disable : 4996)

// enqueue an element to the circular queue 
void Customer::enqueue(int data) {
	node *new_element = new node;
	new_element->data = data;

	//for (int i = 0; i < sizeof(gName); i++) {
	//	new_element->groupName[i] = gName[i];
	//}
	//memcpy(new_element->groupName, gName, sizeof(gName));
	//strcpy(new_element->specialSeats, specialSeats);

	new_element->next = nullptr;
	if (front == nullptr) {
		front = rear = new_element;
	}
	else {
		// next of rear is front in circular queue
		rear->next = new_element;
		rear = new_element;
	}
	rear->next = front;
}

// dequeue front element from circular queue
int Customer::dequeue() {
	int element;
	if (front == nullptr) {
		return -99999; //for empty queue
	}
	else if (front == rear) {
		// only 1 node in circular queue
		element = front->data;
		delete front;
		front = rear = nullptr;
	}
	else {
		node *ptr = front;
		element = ptr->data;
		front = front->next;
		// next of rear is front in circular queue 
		rear->next = front;
		delete ptr;
	}
	return element;
}

// display all the elements of the circular queue
void Customer::displayQueue() {
	node *ptr = front;
	cout << "\nPeople in line:  \n";
	do {
		cout <<"Group Name: " << ptr->groupName << " number of people: " << ptr->numOfPeople << endl;
		ptr = ptr->next;
	} while (ptr != front);
}


bool Customer::isfull()    //if the top of stack is equal to thr maximum element allowed in stack, its full in size and cant push elements
{
	if (top == maxsize)
		return true;
	else
		return false;
}

bool Customer::isempty()   //if the top of stack is 0, its empty and nothing to pop from stack
{
	if (top == 0)
		return true;
	else
		return false;
}

void Customer::push(int x)
{
	if (isfull())
	{
		cout << "Stack is full" << endl;
		return;
	}
	else
		a[top].data = x;//if stack is not full, element is pushed into stack at the top index of stack array

	top++;
}

void Customer::pop()
{
	//if (isempty())
	//{
	//	cout << "nothing in list" << endl;
	//	return;
	//}
	//else
	//	top--;   //if stack is not empty (when top is not equal to zero) element can be poped out of stack(element can be removed from the top index of stack)
	//cout << "pops " << a[top] << endl;
}

void Customer::display()   //displays the elements of the stack
{
	int i;
	if (top == 0)
	{
		cout << "nothing to display" << endl;
	}
	else
		cout << "Displaying" << endl;
	for (i = 0; i < top; i++)
	{
		cout << a[i].data << endl;
	}
}

void Customer::Top()   //displays the t op most element in the array of stack
{
	/*cout << "top is " << a[top - 1] << endl;*/
}

void Customer::Size()    //displays the size of stack
{
	cout << "size of Stack is " << top << endl;
}

bool Customer::addGroup() {
	char groupName[50];
	char specialNeed[50];
	int numOfPeople;
	
	for (int i = 0; i < 49; i++) {
		groupName[i] = ' ';
		specialNeed[i] = ' ';
	}
	cout << "Enter  group name: ";
	cin.getline(groupName, 49);
	cin.clear();
	

	cout << "Enter number of people in group: ";
	cin >> numOfPeople;
	cin.clear();

	cout << "Does anyone have special needs? y/n";
	char specialNeeds;
	cin >> specialNeeds;
	cin.ignore(1);
	if (specialNeeds == 'y') {

		cout << "What special needs are required" << endl;
		cin.getline(specialNeed, 49);
	}
	else
	{
		cout << "No special needs needed" << endl;
	}

	cout << "Would you like to receive promotions? y/n" << endl;
	char promotions;
	cin >> promotions;
	cin.ignore(1);
	if (promotions == 'y') {
		char fullName[50];
		char email[25];
		cout << "Enter full name: ";
		cin.getline(fullName, 49);
		cout << "Enter email: ";
		cin.getline(email, 49);

	}
	else {
		cout << "You will not receive any promotions" << endl;
	}

	return true;

}
