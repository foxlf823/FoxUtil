cc=g++

cflags = -O0 -g3 -w -funroll-loops  \
			-I/home/fox/Downloads/wordnet-blast-master \

libs = /home/fox/Downloads/wordnet-blast-master/lib/libwnb.a

all: test

test: test.cpp Token.h EnglishPos.h FoxUtil.h Sent.h Tokenizer.h SentSplitter.h  Word2Vec.h Punctuation.h
	$(cc) -o test test.cpp $(cflags) $(libs)

	




clean:
	rm -rf *.o
	rm -rf test

