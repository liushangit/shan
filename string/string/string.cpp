#include<string>
#include<iostream>
#include<windows.h>
using namespace std;
class String
{
public:
	String& operator=(const String& _s)
	{
		if (this != &s){
			delete[]_str;
			_str = new char[strlen(s._str + 1)];
			strcpy(_str, s._str);
		}
		return *this;
	}

		
		~String()
		{
			delete[]_str;
			*_str = nullptr;
		}
private:
	char* _str;
};


//class solution{
//public:
//	string addstrings(string num1, string num2)
//	{
//		int end1 = num1.size() - 1;
//		int end2 = num2.size() - 1;
//		string retstr;
//		char next;
//		while (end1 >= 0 || end2 >= 0)
//		{
//			char  value1 = 0;
//			if (end1 >= 0)
//				value1 = num1[end1] - '0';
//			char  value2 = 0;
//			if (end2 >= 0)
//				value2 = num2[end2] - '0';
//			int addvalue = value1 + value2 + next;
//			if (addvalue > 9)
//			{
//				next = 1;
//				addvalue -= 10;
//			}
//			else{
//				next = 0;
//			}
//			retstr.insert(retstr.begin(), addvalue + '0');
//			
//			--end1;
//			--end2;
//		}
//		if (next == 1)
//		{
//			retstr.insert(retstr.begin(), 1);
//		}
//		return retstr;
//	}
//
//
//};
//int main()
//{
//	string s1("2);
//	string s2("1674");
//	string addstrings(s1, s2);
//	system("pause");
//	return 0;
//}


//class a1
//{
//public :
//	void f1()
//	{}
//	void f2()
//	{}
//private :
//	int _a;
//};
//class a2
//{
//public :
//	void f1()
//	{}
//	void f2()
//	{}
//};
//class a3
//{};
//int main()
//{
//
//	cout << sizeof(a1) << endl;
//	cout << sizeof(a2) << endl;
//	cout << sizeof(a3) << endl;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	string s1("eggehhfg");
//	
//	int count[256] = { 0 };
//	int size = s1.size();
//	for (int i = 0; i<size; ++i)
//	{
//		count[s1[i]] += 1;
//	}
//	for (int i = 0; i<size; ++i)
//	{
//		if (1 == count[s1[i]])
//
//			cout <<s1[i]<< endl;
//	}
//	system("pause");
//	return 0;
//}





//int main()
//{
//	
//	string s("hello world");
//		size_t left = 0;
//		size_t right = s.size() - 1;
//		while (left < right)
//		{
//			swap(s[left], s[right]);
//			++left;
//			--right;
//		}
//    cout << s << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	string url("http://www.cplusplus.com/reference/string/string/find/");
//	cout << url << endl;
//	size_t start = url.find('://');
//	if (start == string::npos)
//	{
//		cout << "invalid url" << endl;
//	}
//	start += 2;
//	size_t finish=url.find('/', start);
//	string address = url.substr(start, finish - start);
//	cout << address << endl;
//	cout << start << endl;
//	system("pause");
//	return 0;
//}




//void TestString()
//{
//	string s1("hello Bit");
//	const string s2("Hello Bit");
//	cout << s1 << " " << s2 << endl;
//	cout << s1[0] << " " << s2[0] << endl;
//
//	s1[0] = 'H';
//	cout << s1 << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << endl;
//	}
//}
	//int main()
	//{
	//	TestString();
	//	system("pause");
	//	return 0;
	//}
