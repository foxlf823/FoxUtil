/*
 * test.cpp
 *
 *  Created on: Dec 20, 2015
 *      Author: fox
 */


#include "SentSplitter.h"
#include <set>
#include <iostream>
#include "Tokenizer.h"
#include "Word2Vec.h"
#include "wnb/core/wordnet.hh"
#include "EnglishPos.h"

#include <stdlib.h>
#include <assert.h>


using namespace wnb;



using namespace std;
using namespace fox;

#define SIZE 10





int main(int argc, char **argv)
{
	wordnet wn("/home/fox/tool/WordNet-3.0/dict/");
	string lemma;
	lemma = wn.morphword("dogs", N);
	cout<<lemma<<endl;
	vector<synset> synsets = wn.get_synsets(lemma, N);
	if(!synsets.empty()) {
		stringstream ss;
		ss<<synsets[0].id;
		cout<<ss.str()<<endl;
	}



	return 0;
}




