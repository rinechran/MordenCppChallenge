#include "Math.h"



Math::SumOfNaturals::SumOfNaturals()
{
}

void Math::SumOfNaturals::run() {
	std::cin >> mInput;

	std::uint64_t accumulate = 0L;

	for (int i = 0; i <= mInput; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			accumulate +=i;
		}
	}
	std::cout << accumulate << std::endl;

}


Math::SumOfNaturals::~SumOfNaturals()
{
}
