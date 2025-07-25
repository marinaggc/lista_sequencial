# Variáveis
CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJ = main.o ListaSequencial.o
EXEC = lista

# Regra padrão
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(EXEC) $(OBJ) 
	
testes: testes_lista_pronta.o ListaSequencial.o
	$(CXX) $(CXXFLAGS) -o testes testes_lista_pronta.o ListaSequencial.o

testes_lista_pronta.o: testes_lista_pronta.cpp ListaSequencial.hpp
	$(CXX) $(CXXFLAGS) -c testes_lista_pronta.cpp
