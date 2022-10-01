#include <iostream>

using namespace std;

int main()
{
   int n;
   int sum =0;
   std::cout << "enter the value of n" << std::endl;
   std::cin >> n;
   for(int i=0;i<=n;i++){
       cout<< i<<endl ;
       sum += i;
       
   }
  cout<< sum;
    return 0;
}
