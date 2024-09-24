# Define the compiler
CXX = g++
# Set the C++ standard and other flags
CXXFLAGS = -std=c++11 -Wall

# Default target
all: help

# Help message
help:
	@echo "Usage: make <target_name>"
	@echo "Available targets:"
	@echo "  make program_name  # Compiles program_name.cpp"
	@echo "  make clean         # Removes compiled programs"

# Generic rule to compile any .cpp file
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f *.o
	rm -f $(TARGET)