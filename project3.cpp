#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



void touppercase(string &str){
    for(char c : str){
        c = toupper(c);
    }
}
void tolowercase(string &str){
    for(char &c : str){
        c = tolower(c);
    }
}
int randonNumber(){
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int randomNumber = rand();

    // creting a 4 digit random number 
    int lowerBound = 1000, upperBound = 9999;
    int randomInRange = lowerBound + (rand() % (upperBound - lowerBound + 1));

    return randomInRange;
}
int randomseat(){
    srand(time(0));
    int randomseat = rand();
    int lowerBound = 1, upperBound = 50;
    int randomInSeat = lowerBound + (rand() % (upperBound - lowerBound + 1));

    return randomInSeat;
}


int countLength(int number){
    int count = 0;
    if (number == 0)
    {
        return 1;
    }
    if (number < 0)
    {
        number = - number;
    }
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;

}




int main(){

    // umesh();

    return 0;
}

// void umesh(){
//     cout<<"umesh"<<endl;
// }
