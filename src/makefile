export EXE := binmatrix
export C_files := $(wildcard *.cpp)
export O_files := $(patsubst %.cpp, %.o, $(C_files))
$(EXE) : $(O_files)
	g++ $^ -o $@
%.o : %.cpp
	g++ -c $^ -o $@
clean :
	rm *.o $(EXE)
