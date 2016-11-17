#include <vector>

//using namespace std;
unsigned int lower_limit = 646;
unsigned int limit = 100000;
std::vector<unsigned int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};

bool isPrime(unsigned int num)
{
  for(int i = 0; i < num; i++)
  {
    
  }
}

unsigned int getNextPrime(unsigned int num)
{
  bool found = false;
  unsigned int n = num;

  while(!found)
  {
    for(int i = 0; i < primes.size(); i++)
    {
        if(n % primes[i] == 0)

    }
  }
}

int main()
{

  unsigned int* arr = new unsigned int[limit - lower_limit];
  std::vector<unsigned int> candidates;

  for(unsigned int i = 2; i < limit; i++)
  {
    for(unsigned int j = lower_limit; j < limit; j++)
    {
      if(j % i == 0) //if j is divisible by i
      {
        bool sure = false;
        unsigned int tempI = i;
        unsigned int tempJ = j;
        while(!sure)
        {
          tempI
        }
      }
    }
  }
}
