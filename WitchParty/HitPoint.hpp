# pragma once
# include "Common.hpp"

class HitPoint {

private:
	int _value;
	const int MAX = 100;
	const int MIN = 0;

public:

	HitPoint(const int value)
		: _value{ value }
	{
		if (MIN > _value) {
			throw Error{ U"指定されたHPが最低値より少ないです。" };
		}
		if (_value > MAX) {
			throw Error{ U"指定されたHPが最大値より大きいです。" };
		}
	}
};
