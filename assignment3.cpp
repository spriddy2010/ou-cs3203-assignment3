/*
 * assignment3.cpp
 *
 *  Created on: Sep 6, 2023
 *      Author: sprid
 */
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int additionMethod(list<int> numList) {
	int adding = 0;
	auto i = numList.begin();
	for(int j = 0;j < numList.size(); j++) {
		adding = *i + adding;
		advance(i, 1);
	}
	return adding;
}
int multiplyMethod(list<int> numList) {
int multiply = 1;
auto i = numList.begin();
for(int j = 0;j < numList.size(); j++) {
multiply = *i * multiply;
advance(i, 1);
}
return multiply;
}
int main () {
	list<int> numbers;
	int number;
	int size;

	cout << "Please enter the length of the list: " << endl;
	cin >> size;
	if(size <=0) {
		cout << "Please enter a number greater than 0 for the size." << endl;
		return 0;
	}
	cout << "Please enter the integers for calculations: " << endl;

	for(int i = 0; i < size; i++) {
		cin >> number;
		numbers.push_front(number);
	}
	cout << "Here is the addition of the list of numbers: " << additionMethod(numbers) << endl;
	cout << "Here is the multiplication of the list of number: " << multiplyMethod(numbers) << endl;
}
