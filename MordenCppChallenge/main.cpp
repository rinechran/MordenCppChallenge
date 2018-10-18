#include <iostream>
#include <vector>
#include <optional>
#include <string>
#include <functional>
#include <iostream>
#include "Problems/Math/Math.h"


int main() {


	std::vector<std::shared_ptr<ProblemInterface>> problems = {
		//std::make_shared<Math::SumOfNaturals>(),
		//std::make_shared<Math::Gcd>()
		//std::make_shared<Math::Lcm>()
		//std::make_shared<Math::PrimeNumber>()
		//std::make_shared<Math::Sexyprime>()
		//std::make_shared<Math::AbundantNumbers>()
		//std::make_shared<Math::AmicableNumbers>()
		//std::make_shared<Math::ArmstrongNumbers>()
		//std::make_shared<Math::PrimeFactorsNumber>()
		//std::make_shared<Math::GrayCode>()
		std::make_shared<Math::ConvertingNumerical>()
	};

	for (auto &i : problems) {
		i->input();
		i->solve();
	}
}
	
	