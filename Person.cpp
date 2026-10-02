#include <iostream>
using namespace std;

enum ennovels{ fantasy,romantic,horror,police };

struct stinterest {
	string programminglang;
	string sport;
	string sleep_or_eate;
	ennovels mynovels;
	
};

struct person1 {
	string name;
	string yourfathername;
	string country;
	string streetname;
	int age;
	int birthday;
	string yourmounth;
	stinterest interest;
	
	
	
};


int main()
{
	person1 myperson;
	myperson.name = "naghoom";
	myperson.age = 19;
	myperson.yourfathername = "mohammed";
	myperson.country = " GAZA";
	myperson.birthday = 2007;
	myperson.yourmounth = " April";
	myperson.streetname = " Yafa";
	myperson.interest.sport = " horses";
	myperson.interest.programminglang = " c++ ";
	myperson.interest.sleep_or_eate = " sleep";
	myperson.interest.mynovels = ennovels::fantasy;



	cout << myperson.interest.mynovels;

	return 0;


}

