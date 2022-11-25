CC=g++
CFLAGS=-I.
DEPS = ElementaryParticle.h

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

analyzer: Analyzer.o ElementaryParticle.o
	$(CC) -o Analyzer Analyzer.o ElementaryParticle.o

clean:
	rm -rf *.o Analyzer
