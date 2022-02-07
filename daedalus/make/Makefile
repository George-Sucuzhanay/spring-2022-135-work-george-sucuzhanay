# if you just type "make" the top most target is run
# you can also specify by typing "make main" or "make help", etc..
main: main.cpp
	g++ -o main main.cpp

# using @ removes the command from showing up in the terminal
help:
	@echo "This is a help screen"
	@echo "You can make main"
	@echo "or or make clean"
	@echo "or make help"

# when running dependency these are run first
chain: chain2 chain3
	@echo "Chain was called"

chain2:
	@echo "Chain 2 was called"
chain3:
	@echo "Chain 3 was called"
	@ls
