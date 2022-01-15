#include<iostream>
#include<string>

using namespace std;

int main()
{
	//try, catch, throw 예제
	try
	{
		//throw std::string("Error message");	// Error message
		//throw - 1.0;							// 런타임 에러
		throw "Error";
	}

	catch(int x)
	{
		cout << "Integer " << x << endl;
	}

	catch (const char *error_message) // char * 은 문자열을 나타낼때 (문자열을 담기 위해 사용)
									  // 문자열 끝에 null(\0) 들어간다
	{
		cout << "char " << error_message << endl;
	}
	catch (const std::string error_message	)
	{
		cout << error_message << endl;
	}

	return 0;
}