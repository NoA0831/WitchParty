# pragma once
# include "Common.hpp"
# include "HitPoint.hpp"

class Character {

private:
	String name;
	int hp;                       // キャラクターのHP
	int mp;                       // キャラクターのMP

public:
	Character(const std::string& _name, int _hp, int _mp, const std::vector<std::string>& _skills)
		: name(_name), hp(_hp), mp(_mp), skills(_skills) {}
};
