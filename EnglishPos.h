/*
 * EnglishPos.h
 *
 *  Created on: Feb 29, 2016
 *      Author: fox
 */

#ifndef ENGLISHPOS_H_
#define ENGLISHPOS_H_

#include <string>

using namespace std;

namespace fox {

enum EnglishPosType {
	NOUN = 1, VERB, ADJ, ADV, PREP, CD, OTHER
};

class EnglishPos {
public:
	EnglishPos() {

	}
/*	virtual ~EnglishPos() {

	}*/



	static EnglishPosType getType(const string& pos) {

		if(pos=="NNP" || pos=="NNS" || pos=="NN" || pos=="NNPS")
			return NOUN;
		else if(pos=="VB" || pos=="VBZ" || pos=="VBG" || pos=="VBD" || pos=="VBN" || pos=="VBP")
			return VERB;
		else if(pos=="JJ" || pos=="JJS"  || pos=="JJR")
			return ADJ;
		else if(pos=="RB" || pos=="RBR"  || pos=="RBS")
			return ADV;
		else if(pos=="IN" || pos=="TO")
			return PREP;
		else if(pos=="CD")
			return CD; // ordinal number are tagged as JJ
		else
			return OTHER;


	}
};

} /* namespace fox */

#endif /* ENGLISHPOS_H_ */
