CXX=g++
CXXFLAGS=-g -std=c++11 -Wall -pedantic

SRC=src/

all: main.out

main.out: main.o ECUE.o formation.o maquette.o UE.o UE_choix.o UE_composee.o UE_seule.o
	$(CXX) $(CXXFLAGS) -o main.out main.o ECUE.o formation.o maquette.o UE.o UE_choix.o UE_composee.o UE_seule.o

main.o: $(SRC)main.cpp
	$(CXX) $(CXXFLAGS) -o main.o -c $(SRC)main.cpp

ECUE.o: $(SRC)ECUE.cpp $(SRC)ECUE.h
	$(CXX) $(CXXFLAGS) -o ECUE.o -c $(SRC)ECUE.cpp

formation.o: $(SRC)formation.cpp $(SRC)formation.h
	$(CXX) $(CXXFLAGS) -o formation.o -c $(SRC)formation.cpp

maquette.o: $(SRC)maquette.cpp $(SRC)maquette.h
	$(CXX) $(CXXFLAGS) -o maquette.o -c $(SRC)maquette.cpp

UE.o: $(SRC)UE.cpp $(SRC)UE.h
	$(CXX) $(CXXFLAGS) -o UE.o -c $(SRC)UE.cpp

UE_choix.o: $(SRC)UE_choix.cpp $(SRC)UE_choix.h
	$(CXX) $(CXXFLAGS) -o UE_choix.o -c $(SRC)UE_choix.cpp

UE_composee.o: $(SRC)UE_composee.cpp $(SRC)UE_composee.h
	$(CXX) $(CXXFLAGS) -o UE_composee.o -c $(SRC)UE_composee.cpp

UE_seule.o: $(SRC)UE_seule.cpp $(SRC)UE_seule.h
	$(CXX) $(CXXFLAGS) -o UE_seule.o -c $(SRC)UE_seule.cpp

clean:
	@rm -f *.o
