#pragma once

//#include<iostream>
#include "Position2D.h"
#include <string>

using namespace std;

class Monster
{
private:
	std::string m_name; // char *data, unsigned lenth 묶인게 string
	Position2D m_location; // sub class

	//int m_x; // location // "Position2D.h" 로 대체
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D pos2d_in)
		: m_name(name_in), m_location(pos2d_in)
	{}

	void moveTo(const Position2D &pos_target)
	{
		m_location.set(pos_target);
	}

	friend std::ostream & operator << (std::ostream &out, const Monster &monster)
	{
		out << monster.m_name << " " << monster.m_location;

		return out;
	}
};
