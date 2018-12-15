#include <iostream>
using namespace std;

int findPrime(int size)
{
    int *nums   = new int[size];
    int current = 2;
    int i       = 0;
    int result  = 0;

    while (result != size)
    {
        nums[i]          = current;
        bool isNotAPrime = false;

        for (int y = 0; y < i; y++)
        {
            if (nums[i] % nums[y] == 0 && nums[i] % nums[y] != 1 )
            {
                isNotAPrime = true;
            }
        }
        if (!isNotAPrime)
        {
            result += 1;
        }

        if(result == size)
        {
            return current;
        }
        
        current += 1;
        i += 1;
    }
    return 0;
}


int main() {
    
  cout << findPrime(1001) << endl;
}