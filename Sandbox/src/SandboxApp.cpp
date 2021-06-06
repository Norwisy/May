#include <May.h>


class Sandbox :public May::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

May::Application* May::CreateApplication()
{
	return new Sandbox();
}