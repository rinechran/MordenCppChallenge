#pragma once
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

#include "../ProblemInterface.h"

namespace Math {
	class SumOfNaturals : public ProblemInterface
	{
	public:
		SumOfNaturals();
		virtual void solve() override;
		virtual void input() override {
			std::cin >> mInput;
		}
		~SumOfNaturals();
		
	private:
		int mInput;

	};
	class Gcd : public ProblemInterface {
	public:
		Gcd();
		virtual void solve() override;
		virtual void input() override;
		~Gcd() = default;
	private:
		int num[2];

	};
	class Lcm : public ProblemInterface {
	public:
		Lcm();
		~Lcm() = default;
		virtual void solve();
		virtual void input();
		int gcd(int n, int m);

	private:
		
		std::vector<int> mInput;
	};
}