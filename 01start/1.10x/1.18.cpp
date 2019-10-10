#include<iostream>

int main()
{
	int currVal = 0, val = 0;
	if(std::cin >> currVal)				//read currntval
	{
		int count = 1;
		while(std::cin >> val)			//loop read
		{
			if(val == currVal)			//count 
				{	//if the next num equal currentVal
	
					count++;
				}//count ++
			else{
				std::cout << currVal << ":   " << count << std::endl;
				count = 1;
				currVal = val;
			}//if not 
	//ouput the num
	//current == next
		}}
}
