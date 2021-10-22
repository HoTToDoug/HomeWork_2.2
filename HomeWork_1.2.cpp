#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string Name;
	int age;
	string sex;
	int wight;
	static int counter;
public:
	Person() : Name("Jon"), age(18), sex("Male"), wight(60) {
		counter++;
	};
	void setName(string N) {
		Name = N;
	};
	void setAge(int a) {
		age = a;
	};
	void setSex(string s) {
		sex = s;
	};
	void setWight(int w) {
		wight = w;
	};
	static int getCounter() {
		return counter;
	};
	string getName() const{
		return Name;
	};
	int getAge() const {
		return age;
	};
	string getSex() const {
		return sex;
	};
	int getWight() const {
		return wight;
	};
	void getStud() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << age << endl;
		cout << "Sex: " << sex << endl;
		cout << "Wight: " << wight << " kg" << endl;
		cout << "//-------------------------------------//" << endl;
	};
};

class Student {
private:
	int years_of_education;
public:
	Student() : years_of_education(5) {};
	void setYears(int year) {
		years_of_education = year;
	};
	int getYears() const {
		return years_of_education;
	};
};

int Person::counter = 0;

class Fruit {
protected:
	string Name;
	string color;
public:
	Fruit() {
		Name = "Apple";
		color = "green";
	};
	Fruit(string n, string c) : Name(n), color(c) {};
	string getName() const {
		return Name;
	};
	string getColor() const {
		return color;
	};
};

class Apple : private Fruit {
protected:
	string applename;
	string applecolor;
public:
	Apple() {
		applename = "GrannySmith apple";
		applecolor = "green";
	};
	Apple(string c) : Fruit("apple", c) {};
	string getName() const {
		return Name;
	};
	string getColor() const {
		return color;
	};
};

class Banana : public Fruit {
public:
	Banana() : Fruit("banana", "yellow") {};
	string getName() const { 
		return Name;
	};
	string getColor() const {
		return color;
	};
};

class GrannySmith : public Apple {
protected:
	string name;
	string color;
public:
	GrannySmith() {
		name = "GrannySmith apple";
		color = "green";
	};
	GrannySmith(string n, string c) {
		Apple::applename = "GrannySmith apple";
		Apple::applecolor = "green";
	};
	string getName() const {
		return applename;
	};
	string getColor() const {
		return applecolor;
	};
};

int main()
{
	Student y1;
	Person s1, s2, s3;
	s1.setName("Riana");
	s1.setAge(19);
	s1.setSex("Female");
	s1.setWight(80);
//-------------------------------------//
	s2.setName("Jon");
	s2.setAge(20);
	s2.setSex("Male");
	s2.setWight(66);
//-------------------------------------//
	s3.setName("Ivan");
	s3.setAge(21);
	s3.setSex("Male");
	s3.setWight(90);
//-------------------------------------//
	y1.setYears(9);

	cout << "Number of students: " << s3.getCounter() << endl;
	cout << "Years of education: " << y1.getYears() << endl;
	cout << "//-------------------------------------//" << endl;
	s1.getStud();
	s2.getStud();
	s3.getStud();

	//-------------------------------------//

	Apple a("Red");
	Banana b;
	GrannySmith c;
	cout << "My " << a.getName() << " is " << a.getColor() << endl;
	cout << "My " << b.getName() << " is " << b.getColor() << endl;
	cout << "My " << c.getName() << " is " << c.getColor() << endl;

	return 0;
};
