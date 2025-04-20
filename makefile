# === Compiler and Flags ===
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -g -Isrc

# === Source File Discovery ===

# All .cpp files under src/ excluding tests and main.cpp (used for app build)
APP_SRC := $(filter-out src/tests/% src/main.cpp, $(wildcard src/**/*.cpp))
APP_MAIN := src/main.cpp
APP_OBJ := $(APP_SRC:.cpp=.o) $(APP_MAIN:.cpp=.o)
APP_BIN := app

# All test source files
TEST_SRC := $(wildcard src/tests/*.cpp)
# Reuse APP_SRC for test linking, but exclude main.cpp
TEST_OBJ := $(APP_SRC:.cpp=.o)
TEST_BIN := test_app

# === Default Target ===
all: $(APP_BIN)

# === Application Build ===
$(APP_BIN): $(APP_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# === Test Build and Run ===
test: $(TEST_BIN)
	./$(TEST_BIN)

$(TEST_BIN): $(TEST_SRC) $(APP_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# === Object Compilation Rule ===
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# === Clean Up ===
clean:
	find src -name '*.o' -delete
	rm -f $(APP_BIN) $(TEST_BIN)

# === Tooling ===
version:
	$(CXX) --version

