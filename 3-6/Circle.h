#pragma once
#include"IsShape.h"

class Circle : public IsShape
{
public:
	void size() override;
	void draw() override;
};

