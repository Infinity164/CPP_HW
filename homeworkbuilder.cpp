#include <iostream>
#include <map>
using namespace std;

class Burger {
public:
	int buns;
	string typeOfBread;
	int countOfMeat;
	string meat;
	bool cheese;
	bool salad;
	string sauce;

	void info() {
		cout << "Buns: " << buns << endl << "Type of buns: " << typeOfBread << endl << "Biffs: " << countOfMeat << endl << "Meat: " << meat << endl << "Cheese: " << cheese << endl << "Salad: " << salad << endl;
	}
};

class BurgerBuilder {
private:
	Burger* result;
public:
	BurgerBuilder() {};
	~BurgerBuilder() { delete result; }
	BurgerBuilder& reset() { this->result = new Burger(); return *this; }
	BurgerBuilder& setBuns(int count) { this->result->buns = count; return *this; }
	BurgerBuilder& setTypeOfBread(string type) { this->result->typeOfBread = type; return *this; }
	BurgerBuilder& setBiffs(int count) { this->result->countOfMeat = count; return *this; }
	BurgerBuilder& setMeat(string type) { this->result->meat = type; return *this; }
	BurgerBuilder& setCheese(bool flag) { this->result->cheese = flag; return *this; }
	BurgerBuilder& setSalad(bool flag) { this->result->salad = flag; return *this; }
	BurgerBuilder& setSauce(string type) { this->result->sauce = type; return *this; }
	Burger* getResult() { return this->result; }
};

class Director {
public:
	Burger* createHamburger(BurgerBuilder* builder) {
		builder->reset();
		builder->setBuns(2);
		builder->setTypeOfBread("Default");
		builder->setBiffs(1);
		builder->setMeat("Beef");
		builder->setCheese(true);
		builder->setSalad(true);
		builder->setSauce("Cheese");
		return builder->getResult();
	}
	Burger* createBigMac(BurgerBuilder* builder) {
		builder->reset();
		builder->setBuns(3);
		builder->setTypeOfBread("Default");
		builder->setBiffs(2);
		builder->setMeat("Beef");
		builder->setCheese(true);
		builder->setSalad(true);
		builder->setSauce("Cheese");
		return builder->getResult();
	}
};


int main()
{

	Director director;
	BurgerBuilder* builder = new BurgerBuilder;
	director.createBigMac(builder)->info();

}
