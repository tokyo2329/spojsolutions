#include <iostream>
#include <string>


int main() {

    int c;
    std::cin >> c;

    while(c--) {

        std::string wyraz;
        std::cin >> wyraz;

        std::string wynik = "";

        int temp = 1;

        for(int i=1; i<=wyraz.size(); ++i) {

            if(wyraz[i] == wyraz[i-1]) {
                temp++;
            } else {
                if(temp <= 2) {
                    for(int j=0; j<temp; ++j) {
                        wynik += wyraz[i-1];
                    }
                    temp = 1;
                } else {
                    wynik += wyraz[i-1];
                    wynik += std::to_string(temp);
                    temp = 1;
                }
            }

        }

        std::cout << wynik << std::endl;
        
    }


    return 0;
}