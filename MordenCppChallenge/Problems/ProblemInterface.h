#pragma once
#include <optional>
#include <functional>
#include <vector>
class ProblemInterface
{
public:
	ProblemInterface();
	virtual void input() = 0;
	virtual void solve() = 0;
	virtual ~ProblemInterface();
};

