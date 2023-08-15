# include <iostream>
using namespace std;

// Função

int sum(int &n1, int &n2) {
    return n1 + n2;
}

int main() {

    int n1;
    int n2;
    std::cout << "digite n1:";
    std::cin >> n1;
    std::cout << "digite n2:";
    std::cin >> n2;
    //int sum = n1+n2;
    //float fdiv = (float)n1/n2;
    //std::cout << "soma igual a:" << "\n" << sum << "\n" << "divisao igual a:" << "\n" << fdiv << "\n";
    cout << sum(n1, n2);

// If

    /*
    if (sum == 2)
        std::cout << "soma igual a 2" << "\n";
    */

// While

    /*
    int counter = 0;
    int amount = 0;
    while (counter < 10)
    {
        std::cout << "digite um numero(" << counter << ")" << "\n";
        std::cin >> n1;

        if(n1 < 5){
            amount++;
        }
        counter++;
    }
    std::cout << "o amount e: " << amount << "\n";
    */

// For

    /*
    int total;
    for (int i = 2; i <= 20; i+= 2)
        total += i;

    cout << "a soma da serie e: " << total << "\n";
    */

    return 0;
}
