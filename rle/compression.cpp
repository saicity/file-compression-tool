#include <iostream>
#include <string>

int main() {
    std::string text = "aabbcc";
    char current = text[0];
    int count = 1;
    
    for(int i = 1; i <= text.length(); i++){
        if (current == text[i]){
            count += 1;
        }
        else{
            std::cout << current << count;
            current = text[i];
            count = 1;
        }
    }
    
    return 0;
}
