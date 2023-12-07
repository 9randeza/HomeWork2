#include <iostream>
#include <unordered_map>
#include <string>

bool func(std::string word , std::string word2){
	std::unordered_map <char, int> ABC;
	std::unordered_map <char, int> ABC2;
	
	for(char s : word){
		ABC[s]++;
	}
	for(char s : word2){
		ABC2[s]++;
	}
	
	 for (const auto& A : ABC2) {
        char S = A.first;
        int Count2 = A.second;

        if (ABC[S] < Count2) {
           return false;
        }
    }
    return true;
}

int main()
{
	std::string word;
	std::string word2;
	
	std::cin >> word;
	std::cin >> word2;
	
	if(func(word, word2)){
		std::cout << "true";
	}else{
		std::cout << "false";
	}
}
