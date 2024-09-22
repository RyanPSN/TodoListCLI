#include <iostream>

using namespace std;

class Todos {
public:
	string todoOne;
	string todoTwo;
	bool isActiveTodo = true;

	void getTodos(string todoOne, string todoTwo) {
		this->todoOne = todoOne;
		this->todoTwo = todoTwo;
		this->isActiveTodo = isActiveTodo;

	}

	void PrintMyTodos() {


		cout << "Todo | One: " << todoOne << endl;
		cout << "Todo | Two: " << todoTwo << endl;
		
	}




};

int main() {

	Todos s;

	int num;
	cout << "Enter Num of Todos: " << endl;
	cin >> num;
	num += 1;

	std::cout << "Enter Todo " << num << endl;
	cin >> s.todoOne;
	std::cout << "Enter Todo  " << num << endl;
	cin >> s.todoTwo;

	s.getTodos(s.todoOne, s.todoTwo);
	s.PrintMyTodos();

	system("pause > 0");
	return 0;
}