#pragma once
#include <iostream>
#include <algorithm>
#include "../ProblemInterface.h"

namespace Math {
	class SumOfNaturals : public ProblemInterface
	{
	public:
		SumOfNaturals();
		virtual void run() override;
		~SumOfNaturals();
	private:
		int mInput;

	};
	class Gcd : public ProblemInterface {
	public:
		Gcd() {
			
		}
		virtual void run() override {
			int num[2];
			std::cin >> num[0] >> num[1] ;
			
			if (num[0] * num[1] == 0) {
				std::cout << "zero value" << std::endl;
				return;
			}

			std::sort(std::begin(num), std::end(num), [](
				int &num1, int num2) {return num1 > num2; });
			
			while (num[1]) {
				int temp = num[1];
				num[1] = num[0] % num[1];
				num[0] = temp;
			}
			std::cout << num[0] << std::endl;

		}
		~Gcd() = default;
	};
}