#pragma once
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <bitset>

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
		virtual void input()override;
	private:
		int mInputVal;
	};
	class ArmstrongNumbers : public ProblemInterface {

		enum SOLUTION {
			NOT_FIND = -1
		};
	public:

		ArmstrongNumbers();
		// Inherited via ProblemInterface
		virtual void input() override;
		virtual void solve() override;
		void recuresive(std::vector<int>& arr,int (&arrVal)[3],int deep);
		int arrVal[10];
		int mMin;
		int mMax;
	};
	class PrimeFactorsNumber : public ProblemInterface {
		// Inherited via ProblemInterface
	public:
		virtual void input() override;
		virtual void solve() override;
		bool isPrime(int);
	private:
		int mNum;
	};
	class GrayCode : public ProblemInterface {
	public:
		// Inherited via ProblemInterface
		virtual void input() override;
		virtual void solve() override;
	private:
		uint32_t mVal;

	};
}
