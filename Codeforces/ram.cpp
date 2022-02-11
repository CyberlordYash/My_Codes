

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
    int k;
    cin>>k;
    while (k--)
    {   cpp_int n,fact=1;
        cin>>n;
        while(n)
        {
            fact=fact*n;
            n--;
        }
    cout<<fact<<endl;
    }
    

}