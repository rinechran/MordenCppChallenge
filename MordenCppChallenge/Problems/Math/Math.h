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
		virtual void input() override;
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
	class PrimeNumber : public ProblemInterface{
	public:
		PrimeNumber() = default;
		virtual void input() override;
		virtual void solve() override;
		bool isPrime(int n);

		~PrimeNumber() = default;
		int mNum;
		
	
	};

	class Sexyprime  : public ProblemInterface{
	public:
		Sexyprime() = default;
		~Sexyprime() = default;
		virtual void input() override;
		virtual void solve() override;
		bool isPrime(int n);
		int mNum;

	};

	class AbundantNumbers : public ProblemInterface {
	public:

		enum SOLUTION {
			NOT_FIND = -1
		};

		AbundantNumbers() = default;
		~AbundantNumbers() = default;
		virtual void solve();
		virtual void input();
		int DivisorSum(int);

	private:
		int mInputVal;
	};

	class AmicableNumbers : public AbundantNumbers {
	public:
		AmicableNumbers() = default;
		~AmicableNumbers() = default;

		// Inherited via ProblemInterface
		virtual void solve() override;
	private:
		int mInputVal;
	};
	class ArmstrongNumbers : public ProblemInterface {
		// Inherited via ProblemInterface
		virtual void input() override;
		virtual void solve() override;
	};
}
