#include <iostream>
#include <cstring>
using namespace std;

class String
{
	char* buf;
	int len;
public:
	String(const char* sz)
	{
		cout << "String 생성자" << endl;
		len = strlen(sz) + 1;
		buf = new char[len];
		strcpy_s(buf, len, sz);
	}
	~String()
	{
		delete[] buf;
	}

	// 깊은 복사
	const String& operator=(const String& arg)
	{
		cout << "operator= 복사 생성자" << endl;
		delete[] buf; // ?
		len = arg.len;
		buf = new char[len];
		strcpy_s(buf, len, arg.buf);

		return *this;
	}

	void Print() const
	{
		int idx = 0;
		while (buf[idx] != NULL)
			cout << buf[idx++];
		cout << endl;
	}
};

int main()
{
	const char* sz = "Hello!";
	String s("Hi~!");

	// 우선 sz를 임시객체 String 을 만들어준다.
	// 그런 다음 s.operator=(String 임시객체)에 의해서
	// 기존에 저장했던 s의 buf을 지워주고
	// 깊게 복사한 후에
	// 이 문장이 끝나면 임시객체의 소멸자가 호출되면서
	// 결국 String s만 남는다.
	s = sz;

	s.Print();

	return 0;
}