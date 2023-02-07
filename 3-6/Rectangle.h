#pragma once
#include"IsShape.h"

class Rectangle : public IsShape
{
public:
	void size() override;
	void draw() override;
};

