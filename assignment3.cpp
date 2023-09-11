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

