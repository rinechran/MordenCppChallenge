#include <iostream>
#include <vector>
#include <optional>
#include <string>
#include <functional>
#include <iostream>
#include "Problems/ch1/One.h"


int main() {

	std::vector<std::shared_ptr<ProblemInterface>> problems = {
		std::make_shared<One>()
	};

	for (auto &i : problems) {
		i->run();
	}
}
	
