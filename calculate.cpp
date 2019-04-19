
#include "calculate.hpp"
using namespace std;
string calculateBullAndPgia(string choice, string guess) { 
int bull = 0;
int pgia = 0;
int length = choice.length();
int numbers[10] = {0};
for(int i=0; i<length; i++)
{
    if(choice.at(i) == guess.at(i))
    {
        bull++;
    }
    else
    {
        if(numbers[guess.at(i) - '0'] ++ < 0) pgia++;
        if(numbers[choice.at(i) - '0'] -- > 0) pgia++;
    } 
} // End for
string ans = to_string(bull) + "," + to_string(pgia);
return ans;
} // End calculateBullAndPgia



