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
	//11 5
	if (mNum<=6) return;
	for (int i = 5; i <= mNum-6; ++i) {
		if (isPrime(i) && isPrime(i + 6)) {
			std::cout << i << " " << i + 6 << std::endl;
		}

	}
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



void Math::AbundantNumbers::solve()
{
	std::vector<int> number(mInputVal+1);
	std::fill(number.begin(), number.end(), SOLUTION::NOT_FIND);

	//원래 큰수부터 작은수까지가면서 2나누면서 
	//그 아래의 있는 약수도 구해 판별할려고했지만 귀잖아서 안함

	for (int i = 2; i < number.size(); ++i) {
		if (DivisorSum(i) > i)
			number[i] = i;
	}

	//print solve
	for (auto &it : number) {
		if (it != SOLUTION::NOT_FIND) std::cout << it << std::endl;
	}
	

}

void Math::AbundantNumbers::input()
{
	std::cin >> mInputVal;
}
int Math::AbundantNumbers::DivisorSum(int n)
{

	int temp = 0;
	int sqrtVal = n / 2;
	int sum = 0;
	for (int i = sqrtVal; i > 0; --i) {
		if (n%i == 0)
			sum += i;
	}

	return sum;
}


void Math::AmicableNumbers::solve()
{
	std::vector<uint32_t> divierSumArr(mInputVal*100);
	std::fill(divierSumArr.begin(), divierSumArr.end(), 0);
	for (int i = 1; i <=mInputVal; ++i) {
		for (int j = 1; j <= mInputVal/i; ++j) {
			divierSumArr[i*j] += j;
		}
	}

	
	for (int i = 1; i <= mInputVal; ++i) {
		int val = divierSumArr[i]-i;
		if (val >= mInputVal)
			continue;
		
		if (i == (divierSumArr[val]-val))
			std::cout << i <<"  "<< val << std::endl;

	}
}

void Math::AmicableNumbers::input()
{
	this->mInputVal = 1000000;
}


Math::ArmstrongNumbers::ArmstrongNumbers() : mMin(100), mMax(999) {}

void Math::ArmstrongNumbers::input()
{
	for (int i = 0; i < sizeof(arrVal)/sizeof(int); ++i) {
		arrVal[i] = i * i *i;
	}
}

void Math::ArmstrongNumbers::solve()
{
	std::vector<int> NarcissisticArr(1000);

	std::fill(NarcissisticArr.begin(), NarcissisticArr.end(), SOLUTION::NOT_FIND);
	for (int i = mMin; i <= mMax; ++i) {
		if (NarcissisticArr[i] == SOLUTION::NOT_FIND) {
	
			int first = i / 100;
			int mid = (i-first*100) / 10;
			int last = i - (first * 100 + mid * 10);
			std::cout << arrVal[first] + arrVal[mid] + arrVal[last] << std::endl;
			
		}
	}

}
// 1 2 3
//
void Math::ArmstrongNumbers::recuresive(std::vector<int>& arr, int(&arrVal)[3], int deep)
{
	if (deep <= -1)
		return;

	for (int i : arrVal) {

	}

}

void Math::PrimeFactorsNumber::input()
{
	std::cin >> mNum;
}

void Math::PrimeFactorsNumber::solve()
{

	int i = 2;
	while (mNum!=1) {
		if (mNum % i==0 ) {
			mNum /= i;
			std::cout << i << std::endl;
		}
		else{
			++i;
		}
	}
}

bool Math::PrimeFactorsNumber::isPrime(int n )
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
