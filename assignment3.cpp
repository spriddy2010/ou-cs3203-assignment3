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
	for(auto itr = numList.begin(); itr != numList.end(); itr++) {
		adding = *itr + adding;
	}
	return adding;
}
int multiplyMethod(list<int> numList) {
	int multiply = 1;
	for(auto itr = numList.begin(); itr != numList.end(); itr++) {
		multiply = *itr * multiply;
}
	return multiply;
}
list<int> reversalMethod(list<int> numList) {
	list<int> num2;
	auto i = numList.end();
	for(auto itr = numList.begin(); itr != numList.end(); itr++) {
		num2.push_front(*itr);
	}
	return num2;
}
int main () {
	list<int> numbers;
	int number;
	auto i = numbers.begin();
	int size;

	cout << "Please enter the length of the list: " << endl;
	cin >> size;
	if(size <= 0) {
		cout << "Please enter a number greater than 0 for the size." << endl;
		return 0;
	}
	cout << "Please enter the integers for calculations: " << endl;

	for(int i = 0; i < size; i++) {
		cin >> number;
		numbers.push_back(number);
	}
	cout << numbers.front();
	cout << "Here is the addition of the list of numbers: " << additionMethod(numbers) << endl;
	cout << "Here is the multiplication of the list of number: " << multiplyMethod(numbers) << endl;

	cout << "Put it in reverse Terry!";
	numbers = reversalMethod(numbers);
    for (auto itr = numbers.begin(); itr != numbers.end(); itr++){
        cout << *itr << " ";
}
}
