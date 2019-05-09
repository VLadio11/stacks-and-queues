#include<iostream>
#include<cstring>
#include "Header.h";

using namespace std;

int main() {

	Customer cust;


	cust.push(15);
	cust.push(15);
	cust.push(12);
	cust.push(13);
	cust.display();

	char q;
	cin >> q;
	


	//char option;
	//meat of the code. Displays all the options and allows user select options.
	//do {
	//	cout << "Here are your options" << endl;
	//	cout << "Press 1 to add a new group to the line" << endl;
	//	cout << "Press 2 to display the line" << endl;
	//	cout << "Press 3 to quit" << endl;
	//	cin >> option;
	//	cin.ignore(50, '\n');


	//	switch (option) {
	//	case '1':
	//		cust.enqueue(11);
	//		cust.enqueue(7);
	//		cust.enqueue(13);
	//		cust.enqueue(9);
	//		cust.enqueue(3);
	//		cust.enqueue(12);
	//		cust.enqueue(11);
	//		cust.enqueue(13);
	//		cust.addGroup();
	//		cout << "added a new person to the line" << endl;
	//		break;
	//	case '2':
	//		cust.displayLine();
	//		break;
	//	default:
	//		break;
	//	}

	//} while (option != '3');
	/*cust.enqueue(5);
	cust.enqueue(18);
	cust.enqueue(11);
	cust.enqueue(7);
	cust.enqueue(13);
	cust.enqueue(9);
	cust.enqueue(3);
	cust.enqueue(12);
	cust.enqueue(11);
	cust.enqueue(13);
	cust.displayCQueue();
	int dq_element = cust.dequeue();
	cout << "\nDequeued element :: " << dq_element;
	cout << "\nAfter dequeueing :-";
	cust.displayCQueue();
	cout << endl;


	*/


	return 0;
}