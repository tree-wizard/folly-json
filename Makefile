CC=clang-7
CXX=clang++-7


FOLLY=/root/proxygen/proxygen/folly

all: Fuzzer

clean:
	rm -rf Fuzzer

Fuzzer: fuzzer.cpp

	$(CXX) -o jsonfuzzer fuzzer.cpp -I$(FOLLY)/include $(FOLLY)/_build/libfolly.so -g -fsanitize=fuzzer,address,undefined -lfolly -lboost_system -lglog
	