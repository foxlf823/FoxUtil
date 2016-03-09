/*
 * test.cpp
 *
 *  Created on: Dec 20, 2015
 *      Author: fox
 */



#include <set>
#include <iostream>
#include <assert.h>
#include "FoxUtil.h"
#include "WordNet.h"





using namespace std;
using namespace fox;



int main(int argc, char **argv)
{
	if(wninit())
		cout<<"error"<<endl;
	else {
		cout<<"success"<<endl;
	}



	// lowercase

/*	char* word = "dogs";
	char* m = morphstr(word, NOUN);*/

	// check search type
	unsigned int search = 0;
/*	bool found = false;
	for(int i=1;i<=NUMPARTS;i++) {
		search = is_defined(word, i);
		if(search != 0) {
			found = true;
		} else {
			char* morphword = morphstr(word, i);
			if(morphword != NULL) {
				do {
					if((search = is_defined(morphword, i))!=0) {
						found = true;
					}
				} while((morphword = morphstr(NULL, i))!=NULL);
			}
		}
	}
*/

/*	char* outbuf = findtheinfo(word, NOUN, HYPERPTR, 1);
	cout<<outbuf<<endl;*/
/*	SynsetPtr ptr = findtheinfo_ds(word, NOUN, HYPERPTR, ALLSENSES);
	while(ptr->nextss != NULL) {
		ptr = ptr->nextss;
		cout<<endl;
	}*/
	SynsetPtr ptr = findtheinfo_ds("dog", NOUN, -HYPERPTR, 1);
	//SynsetPtr ptr = findtheinfo_ds("hit", VERB, -HYPERPTR, 1);
	//SynsetPtr ptr = findtheinfo_ds("good", ADJ, SIMPTR, 1);
	//SynsetPtr ptr = findtheinfo_ds("too", ADV, SYNS, 1);
	do {
		if(ptr!=NULL) {
			char buffer[64] = {0};
			sprintf(buffer, "%i", ptr->hereiam);
			cout<<buffer<<" "<<*(ptr->words)<<endl;

			ptr = ptr->ptrlist;
		}
	} while(ptr!=NULL);

	string w = "fdsaldsaj";
	char temp[64] = {0};
	sprintf(temp, "%s", w.c_str());
	string id = getWnID(temp, NOUN, 2);
	cout<<id<<endl;

	return 0;
}




