#include "test.hpp"

int main(int argc, char* argv[])
{
    Load load;
	Test test;

	std::vector<Data*> input;
	
    if(argc > 1){
	    std::string file(argv[1]);
	    input = load.read(file);
    }
    else input = load.read("../Data/wdbc.data");
	
	for(int i = 0; i < 200; i++){
		test.makeTest(input, 30, {5, 1}, 285, 2000);
	}

    return 0;
}
