#pragma once
#include <optional>
#include <functional>
class ProblemInterface
{
public:
	ProblemInterface();
	virtual void run() = 0;
	virtual ~ProblemInterface();
};

