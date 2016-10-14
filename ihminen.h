#include "yhteiskunta.h"



class Ihminen{
private:
	std::string nimi;
	Yhteiskunta *yhteiskunta;

public:

	Ihminen(){
		if(rand()%2) nimi = "Jaska";
		else 	  	 nimi = "Kalle";
	}

	Ihminen(Yhteiskunta *yhteiskunta){
		nimi = "Participant";
		this->yhteiskunta = yhteiskunta;	
	}
};
