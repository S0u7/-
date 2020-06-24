//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
///*Ä§Öä´Êµä*/
//int main()
//{
//	string str, key, value, ans;
//	map<string, string> dictionary;
//	while (getline(cin,str))
//	{
//		if (str == "@END@")
//			break;
//		int pos = str.find(']');
//		key = str.substr(0, pos + 1);
//		value = str.substr(pos + 2);
//		dictionary[key] = value;
//		dictionary[value] = key;
//	}
//	int n;
//	cin >> n;
//	getchar();
//	while (n--)
//	{
//		getline(cin, key);
//		ans = dictionary[key];
//		if (ans == "")
//			cout << "what?" << endl;
//		else if (ans != "" && ans[0] == '[')
//			cout << ans.substr(1, ans.size() - 2) << endl;
//		else
//			cout << ans << endl;
//	}
//	return 0;
//}