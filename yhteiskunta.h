#include <vector>
#include "ihminen.h"

class Yhteiskunta{

public:
	std::vector<Ihminen *> ihmiset;
	void AddIhminen(Ihminen *i){
		ihmiset.push_back(i);
	}

};
