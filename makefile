CXX = g++
CXXFLAGS = -Wall -std=c++11
horserace: main.o horses.o raceandtrack.o
	$(CXX) $(CXXFLAGS) main.o horses.o raceandtrack.o -o horserace

main.o: main.cpp raceandtrack.h
	$(CXX) $(CXXFLAGS) -c main.cpp

horses.o: horses.cpp horses.h
	$(CXX) $(CXXFLAGS) -c horses.cpp

raceandtrack.o: raceandtrack.cpp raceandtrack.h horses.h
	$(CXX) $(CXXFLAGS) -c raceandtrack.cpp
	
run: horserace
	./horserace

clean:
	rm -f *.o horserace