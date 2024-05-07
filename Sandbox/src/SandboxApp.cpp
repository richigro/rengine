#include <Rengine.h>
#include <iostream>

class Sandbox : public Rengine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Rengine::Application* Rengine::CreateApplication()
{
	return new Sandbox();
}