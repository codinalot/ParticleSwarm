#ifndef FUNCTIONONE_H
#define FUNCTIONONE_H
#include "Problem.hpp"

namespace PSO {

	/**
	* @class FunctionOne
	* @brief This inherits from the Problem interface to define a sample problem.
	*/
	class FunctionOne : public Problem {

	public:

		// Implementation of Problem interface Q function
		double Q(const std::pair<double, double> &p) {
			return 100 * (1 - (pdist(p) / mdist()));
		}

	};

}

#endif /* FUNCTIONONE_H */