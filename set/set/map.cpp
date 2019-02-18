#include<iostream>
#include<string>
#include<map>
#include<windows.h>
#include<vector>
using namespace std;

//����ǰk�εĵ���
class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		map<string, int>count_map;
		for (size_t i = 0; i<words.size(); ++i)
		{
			count_map[words[i]]++;
		}
		multimap<int, string, greater<int>>sort_map;
		for (auto e : count_map)
		{
			sort_map.insert(make_pair(e.second, e.first));
		}
		vector<string>v;
		auto it = sort_map.begin();
		while (it != sort_map.end() && k-- != 0)
		{
			v.push_back(it->second);
			++it;
		}
		return v;
	}
};

//void Testmap()
//{
//	string str_array[] = { "sort", "first", "first", "first", "end" };
//	typedef map<string, int>CountMap;
//	typedef map<string, int>::iterator CountMapIterator;
//	CountMap count_map;
//	for (const auto& e : str_array)
//	{
//		count_map[e]++;
//	}
//	count_map["insert"];
//}
//void Testmap()
//{
//	map<string, string>m1;
//	map<string, string>m2{ { "apple", "ƻ��" },
//	                       {"banana","�㽶"},
//						   { "pear", "��" }
//	};
//	//cout << m2["apple"] << endl;
//	//map<string, string>m3(m2);
//	//cout << m3["pear"] << endl;
//	/*m2["waterme"] = "ˮ����";
//	m2.at("waterme");
//	m2.insert(make_pair("orange", "����"));
//	m2.insert(pair<string,string>("watermalon", "����"));*/
//	m2.insert(m2.find("banana"), make_pair("waterme", "ˮ����"));
//	for (auto& e : m2)
//	{
//		cout << e.first << "-->" << e.second << endl;
//	}
//	m2.erase("apple");
//
//	for (auto it = m2.begin(); it != m2.end(); ++it)
//	{
//		cout << it->first << "-->" << it->second << endl;
//	}
//	cout << m2.size()<< endl;
//}
void Testmultimap()
{
	multimap<string, string>m1;
	m1.insert(make_pair("�����", "��սʤ��"));
	m1.insert(make_pair("��˽�", "��̳ʹ��"));
	m1.insert(make_pair("³����", "������"));
	m1.insert(make_pair("��˽�", "�����"));
	for (auto& e : m1)
		cout << e.first << "-->" << e.second << endl;
	cout << endl;
	cout << m1.count("��˽�") << endl;
}

int main()
{
	//Testmap();
	Testmultimap();
	system("pause");
	return 0;
}