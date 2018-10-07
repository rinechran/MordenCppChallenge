#pragma once
#include <iostream>
#include "../ProblemInterface.h"

class One : public ProblemInterface
{
	int mInput;
public:
	One();
	virtual void run() override;
	~One();
};

