#include "One.h"



One::One()
{
}

void One::run() {
	std::cin >> mInput;

	std::uint64_t accumulate = 0L;

	for (int i = 0; i <= mInput; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			accumulate +=i;
		}
	}
	std::cout << accumulate << std::endl;

}


One::~One()
{
}
