#include <iostream>
using namespace std;

struct stdefperson1 {
	string name;
	string last_name;
	int age;
	string phone;

};


void readperson(stdefperson1 &person) {
	cout << " enter your name : " << endl;
	cin >> person.name;

	cout << " enter your  last name : " << endl;
	cin >> person.last_name;

	cout << " enter your age : " << endl;
	cin >> person.age;

	cout << " enter your phone : " << endl;
	cin >> person.phone;
	cout << endl << endl;

}


void printperson(stdefperson1 person) {
	cout << "\n************************************\n";
	cout << " your name is: " << person.name << endl;
	cout << " your last name is : " << person.last_name<<endl;
	cout << " your age  is: " << person.age<<endl;
	cout << " your phone is: " << person.phone<<endl;
	cout << "\n************************************\n";
}

void readpersoninfo(stdefperson1 person[2]) {

	readperson(person[0]);
	readperson(person[1]);

}

void printpersoninfo(stdefperson1 person[2]) {
	printperson(person[0]);
	printperson(person[1]);
}

int main()
{
	stdefperson1 dear_pers[2];
	readpersoninfo(dear_pers);
	printpersoninfo(dear_pers);

	


}
