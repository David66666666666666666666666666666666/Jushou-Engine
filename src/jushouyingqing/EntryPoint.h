#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern jushouyingqing::Application* jushouyingqing::CreateApplication();

int main(int argc,char** argv)
{
	jushouyingqing::Log::Init();
	HZ_CORE_WARN("Initialize Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}",a);

	auto app = jushouyingqing::CreateApplication();
	app->Run();
	delete app;

}
#endif
