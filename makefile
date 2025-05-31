# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

# Diretórios
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Arquivos
TARGET = $(BIN_DIR)/grafo.exe
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/cupholder.cpp
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Regras
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@if exist $(OBJ_DIR) del /Q $(OBJ_DIR)\*.o
	@if exist $(BIN_DIR) del /Q $(BIN_DIR)\*.exe

.PHONY: all clean
