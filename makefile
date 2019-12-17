cult: main.o profile.o leader.o
	g++ main.o profile.o leader.o -o cult

main.o: main.cpp
	g++ -c main.cpp

profile.o: profile.cpp
	g++ -c profile.cpp

leader.o: leader.cpp
	g++ -c leader.cpp

clean:
	rm *.o cult
