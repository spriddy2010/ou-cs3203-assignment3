/*
 * assignment3.cpp
 *
 *  Created on: Sep 6, 2023
 *      Author: sprid
 */
#include <iostream>
using namespace std;

int additionMethod(int size) {
	int array[size];
	int number;
	int adding = 0;
	cout << "Enter integers of array: ";
	for(int i= 0; i < size; i++) {
		cin >> number;
		array[i] = number;
	}
	for (int i = 0; i < size; i++) {
		adding = array[i] + adding;
	}
	return adding;
}

