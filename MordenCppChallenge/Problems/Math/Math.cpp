#include "Math.h"



Math::SumOfNaturals::SumOfNaturals()
{
	std::cout << "SumOfNaturals" << std::endl;
}

void Math::SumOfNaturals::solve() {

	std::uint64_t accumulate = 0L;

	for (int i = 0; i <= mInput; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			accumulate += i;
		}
	}
	std::cout << accumulate << std::endl;

}

void Math::SumOfNaturals::input() {
	std::cin >> mInput;
}


Math::SumOfNaturals::~SumOfNaturals()
{
}

Math::Lcm::Lcm() {
	std::cout << "Lcm" << std::endl;
}

void Math::Lcm::solve() {

	if (*(mInput.end() - 1) == 0) {
		std::cout << "zero value" << std::endl;
	}
	const auto copy_input = mInput;
	for (int *i = &(mInput[mInput.size() - 2]); i >= &(mInput[0]); --i) {
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

int Math::Lcm::gcd(int n, int m) {
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

void Math::PrimeNumber::input() {
	std::cin >> mNum;
}

void Math::PrimeNumber::solve() {
	// -1 not_vaild
	// 0 non_prime
	std::vector<int> n(mNum+1);

	std::fill(n.begin(), n.end(), -1);

	int max = 0;
	for (int i = 2; i <= mNum; ++i) {
		if (n[i] == 0) continue;

		if (isPrime(i) == true) {
			max = i;
		}
		else {
			for (int j = 1; j*i <= mNum; ++j) {
				n[i] = 0;
			}
		}

	}

	std::cout << max << std::endl;;


	
}

bool Math::PrimeNumber::isPrime(int n)
{
	if (n == 1)
		return false;
	if (!(n & 1))
		return n == 2;

	for (int i = 2; i <= std::sqrt(n); ++i) {
		if (n%i == 0)return false;
	}

	return true;
}

void Math::Sexyprime::input()
{
	std::cin >> mNum;
}

void Math::Sexyprime::solve()
{
}

bool Math::Sexyprime::isPrime(int n)
{
	if (n == 1)
		return false;
	if (!(n & 1))
		return n == 2;

	for (int i = 2; i <= std::sqrt(n); ++i) {
		if (n%i == 0)return false;
	}

	return true;
}
