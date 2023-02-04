#include <jushouyingqing.h>

class SandBox : public jushouyingqing::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

jushouyingqing::Application* jushouyingqing::CreateApplication()
{
	return new SandBox();
}