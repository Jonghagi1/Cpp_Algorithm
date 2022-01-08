#include<iostream>
#include "Monster.h"

using namespace std;

int main() {

	Monster mon1("Alien", Position2D(0, 0));

	cout << mon1 << endl; // Alien 0 0

	mon1.moveTo(Position2D(1, 7));

	cout << mon1 << endl; // Alien 1 7

	return 0;
}