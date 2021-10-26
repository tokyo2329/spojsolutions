#include <iostream>


int main() {

    int t;
    std::cin >> t;

    while(t--) {

        int n; //liczba liczb do zsumowania
        std::cin >> n;

        int suma = 0;

        while(n--) {

            int temp;
            std::cin >> temp;

            suma += temp;

        }

        std::cout << suma << std::endl;

    }

    return 0;
}