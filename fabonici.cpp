#include <iostream>

using namespace std;

int main() 
{
    int first = 0;
    int second = 1;
    int third; 
    int nthfibanoccaiIndex;

    cout<<"enter num:-";

    cin>>nthfibanoccaiIndex;

    cout<<first<<endl;
    cout<<second<<endl;

    for (int i=2; i<nthfibanoccaiIndex; i++)
    {
      third = first + second;
      first = second;
      second = third;
      cout << third << " ";
    }
    return 0;
}
