#include<iostream>
using namespace std;
namespace a
{
	int v=9;
}
namespace b
{
	int v=12;
}
int main()
{
	cout<<a::v;
}
