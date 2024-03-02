#pragma once
#include "Pair.h";

class Long
{
private:
	Pair number;

public:
	Pair getNumber() const { return number; };

	void Init(const Pair& num);
	void Read();
	void Display() const;

	Long add(const Long& other) const;
	Long multiply(const Long& other) const;
	Long subtract(const Long& other) const;
};

