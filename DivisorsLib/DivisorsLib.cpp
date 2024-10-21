#include <vector>
#include "Divisors.h"
#include <iostream>

using namespace std;

std::vector<unsigned long long> divisors(unsigned long long number)
{
    	std::vector<unsigned long long> result;
    	unsigned long long i;
	for (i = 1; i * i < number; i++) {
        	if (number % i == 0)
            	result.push_back(i);
    	}
    	if (i - (number / i) == 1) {
        	i--;
    	}
    	for (; i >= 1; i--) {
        	if (number % i == 0)
            		result.push_back(number / i);
    	}
	return result;
}
