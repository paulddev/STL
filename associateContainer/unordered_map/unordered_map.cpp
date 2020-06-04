#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<int, float> hash1;

	// insert case 1:
	hash1.insert(unordered_map<int, float>::value_type(10, 20.7f));

	// insert case 2:
	hash1.insert(hash1.begin(), unordered_map<int, float>::value_type(20, 104.8f));

	// insert case 3:
	unordered_map<int, float> hash2;
	hash2.insert(hash1.begin(), hash1.end());

	// for문 활용
	cout << "hash1: ";
	// iterator 사용
	unordered_map<int, float>::iterator iter;
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	cout << "hash2: ";
	for (iter = hash2.begin(); iter != hash2.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// erase case 1:
	hash1.erase(hash1.begin());

	cout << "hash1: ";
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// erase case 2:
	hash1.erase(hash1.begin(), hash1.end());

	cout << "hash1: ";
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// erase case 3:
	hash2.erase(10); // key가 10인 요소를 삭제한다.

	cout << "hash2: ";
	for (iter = hash2.begin(); iter != hash2.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// search case 1:
	unordered_map<int, float>::iterator findIter;

	// 찾으면 그 요소의 반복자를 리턴, 아니면 end()를 리턴
	findIter = hash2.find(20);
	if (findIter != hash2.end())
	{
		cout << "key가 20인 요소가 있어요." << endl << endl;
	}
	else
	{
		cout << "그런 요소는 없네요." << endl << endl;
	}

	unordered_map<int, int> hash3;
	for (int i = 0; i < 10; i++)
		hash3.insert(unordered_map<int, int>::value_type(i, i + 10));

	cout << "hash3: ";
	unordered_map<int, int>::iterator iter2;
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	// 다른 형태로도 insert할 수 있습니다.
	hash3[1000] = 200;
	hash3[2000] = 300;

	cout << "hash3: ";
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	// 이런 형태도 생성되어서 넣어집니다. default로 넣어집니다. int면 0
	hash3[3000];

	cout << "hash3: ";
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	cout << "hash3 size : " << hash3.size() << endl;

	// string도 확인!
	unordered_map<int, string> hash4;
	hash4[1] = "Apple";
	hash4[2] = "Banana";
	hash4[3] = "Cheeze";

	unordered_map<int, string>::iterator iter3;

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// hash[key]를 이용하면 변경이 가능합니다.
	hash4[3] = "Tomato";

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// insert는 이미 key가 저장되어 있으면 변경이 불가능 합니다.
	// 구문 오류는 뜨지 않으나 변경이 되지 않습니다.
	hash4.insert(unordered_map<int, string>::value_type(3, "Grape"));
	hash4.insert(unordered_map<int, string>::value_type(4, "Grape"));

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// search 방법에 또 다른 방법이 있습니다.
	// count입니다.

	if (hash4.count(4))
	{
		cout << hash4[4] << endl << endl;
	}
	else
	{
		cout << "찾고 싶은 요소는 버킷에 없네요." << endl << endl;
	}

	// 이렇게 뽑아서 사용할 수 도 있습니다.
	auto item = hash4.find(3);
	if (item != hash4.end())
	{
		cout << "[" << item->first << "," << item->second << "]" << endl << endl;
	}
	else
	{
		cout << "찾고 싶은 요소는 버킷에 없네요." << endl << endl;
	}

	// 아까 hash[key]에 아무것도 안넣으면 default가 넣어진다고 했죠
	// string도 확인해봅시다.
	hash4[5];

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// value가 텅 비었는데 이것은 key로 인정될까요?
	// key로 인정이 되네요. value는 null로 인정되는 것 같습니다.
	auto item2 = hash4.find(5);
	if (item2 != hash4.end())
	{
		cout << "[" << item2->first << "," << item2->second << "]" << endl << endl;
	}
	else
	{
		cout << "찾고 싶은 요소는 버킷에 없네요." << endl << endl;
	}
	return 0;
}