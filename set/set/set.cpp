#include<iostream>
#include<set>
#include<string>
#include<windows.h>
using namespace std;

void Testset()
{
	int array[]={2,4,6,8,0,1,3,5,7,9,2,4,6,8};
	set<int> s(array, array+sizeof(array) / sizeof(array[0]));
	cout << s.size() << endl;
	//for (auto& e : s)
	//	cout << e << " ";
	//cout << endl;
	//for (auto it = s.rbegin(); it != s.rend(); ++it)
	//	cout << *it << " ";
	//cout << endl;
	cout << s.count(2)<<endl;
}
int main()
{
	Testset();
	system("pause");
	return 0;
}