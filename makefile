cult: main.o profile.o leader.o admin.o run.o
	g++ main.o profile.o leader.o admin.o run.o -o cult

main.o: main.cpp
	g++ -c main.cpp

profile.o: profile.cpp
	g++ -c profile.cpp

leader.o: leader.cpp
	g++ -c leader.cpp

admin.o: admin.cpp
	g++ -c admin.cpp

run.o: run.cpp
	g++ -c run.cpp

clean:
	rm *.o cult
