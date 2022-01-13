#include<iostream>
#include<string>

using namespace std;

class IErrorLog // Interface class
{
public:
	virtual bool reportError(const char *errorMassage) = 0; // 순수 가상 함수(pure virtual function)

	virtual ~IErrorLog()
	{

	}
};

class FileErrorLog : public IErrorLog
{
	bool reportError(const char *errorMassage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsolErrorLog : public IErrorLog
{
	bool reportError(const char *errorMassage) override
	{
		cout << "Printing error to a file" << endl;
		return true;
	}
};

void doSomething(IErrorLog &log)
{
	log.reportError("Runtime Error");
}

int main()
{
	FileErrorLog file_log;
	ConsolErrorLog consol_log;

	doSomething(file_log);
	doSomething(consol_log);

	return 0;
}