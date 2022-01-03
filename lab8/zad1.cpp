#include <iostream>

using namespace std;

struct Element {
	double value;
	Element* next;

	Element(double value){
		this->value = value;
		next = nullptr;
	}
};


void add_to_list(Element*& head, double value){
	if (head == nullptr){
		head = new Element(value);
	}
	else {
		Element *temp = head;
		while (temp->next != nullptr){
			temp = temp->next;
		}
		temp->next = new Element(value);
	}
};

void print_list(Element* head){
	if (head == nullptr){
		cout << "[]";
	}
	else{
		cout << "[" << head->value << "]";
		while (head->next != nullptr){
			head = head->next;
			cout << "->[" << head->value << "]";
		}
	}
	cout << endl;
}


void delete_from_list(Element*& head, double value){

}

void count(Element*head){
	int i;
	if (head == nullptr){
		i = 0;
	}
	else{
		i = 1;
		while (head->next != nullptr){
			head = head->next;
			i++;
		}
	}
	cout << i<<endl;
}

void find(Element*&head, Element*&wsk) {
	double n;
	cout << endl;
	cout << "Jaka wartosc chcesz znalezc:";
	cin >> n;
	if (head->value = n) {
		wsk = head;
	}
	else while (head->next != nullptr) {
		if (head->next->value = n) {
			wsk = head;
		}
	}
	cout << wsk;
}

int main()
{
	Element*head = nullptr;
	Element*wsk = 0;

	add_to_list(head, 1.0);
	add_to_list(head, 2.0);
	add_to_list(head, 3.0);
	print_list(head);
//	delete_from_list(head, 2.0);
	count(head);
	find(head, wsk);
}

