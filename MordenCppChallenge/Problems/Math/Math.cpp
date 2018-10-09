#include "Math.h"



Math::SumOfNaturals::SumOfNaturals()
{
	std::cout << "SumOfNaturals" << std::endl;
}

void Math::SumOfNaturals::solve() {

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

Math::Lcm::Lcm() {
	std::cout << "Lcm" << std::endl;
}

void Math::Lcm::solve() {
	std::sort(mInput.begin(), mInput.end(), [](
		int &num1, int &num2) {return num1 > num2; });
	if (*(mInput.end()-1) == 0) {
		std::cout << "zero value" << std::endl;
	}
	const auto copy_input = mInput;
	for (int *i = &(mInput[mInput.size()-2]); i >= &(mInput[0]);--i) {
		int gcd_value = gcd(*i, *(i + 1));
		*i = *i * *(i + 1) / gcd_value;
	}
	std::cout << *(mInput.begin());


}

void Math::Lcm::input() {
	int number = 0;
	std::cin >> number;
	std::vector<int> input(number);

	for (auto &i : input) {
		std::cin >> i;
	}
	mInput = std::move(input);
}

int Math::Lcm::gcd(int n,int m) {
	if (m > n)
		std::swap(n, m);

	while (m) {
		int temp = m;
		m = n % m;
		n = temp;
	}
	return n;
}

Math::Gcd::Gcd() { std::cout << "Gcd" << std::endl; }

void Math::Gcd::solve() {



	std::sort(std::begin(num), std::end(num), [](
		int &num1, int &num2) {return num1 > num2; });
	if (num[1] == 0) {
		std::cout << "zero value" << std::endl;
		return;
	}
	while (num[1]) {
		int temp = num[1];
		num[1] = num[0] % num[1];
		num[0] = temp;
	}
	std::cout << num[0] << std::endl;

}

void Math::Gcd::input() {
	std::cin >> num[0] >> num[1];
}
