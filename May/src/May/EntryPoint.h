#pragma once


#ifdef MAY_PLATFORM_WINDOWS

extern May::Application* May::CreateApplication();

int main(int argc, char** argv)
{
	auto app = May::CreateApplication();
	app->Run();
	delete app;
}

#endif