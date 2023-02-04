#pragma once

#include "Core.h"

namespace jushouyingqing {

	class JUSHOUYINGQING_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}