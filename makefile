cult: main.o profile.o leader.o admin.o interface.o
	g++ main.o profile.o leader.o admin.o interface.o -o cult

main.o: main.cpp
	g++ -c main.cpp

profile.o: profile.cpp
	g++ -c profile.cpp

leader.o: leader.cpp
	g++ -c leader.cpp

admin.o: admin.cpp
	g++ -c admin.cpp

interface.o: interface.cpp
	g++ -c interface.cpp

clean:
	rm *.o cult
