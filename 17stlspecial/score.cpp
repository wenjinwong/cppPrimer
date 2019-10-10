#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<bitset>
#include<tuple>
using namespace std;

int main()
{
	bool status;
	unsigned long quizA = 0;
	quizA |= 1UL << 27;
	status = quizA & (1UL << 27);
	quizA &= ~(1UL << 27);

	bitset<30> quizB;
	quizB.set(27);
	status = quizB[27];
	quizB.reset(27);
    return 0;
}
