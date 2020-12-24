#include <Stone.h>

class Sandbox : public Stone::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Stone::Application* Stone:: CreateApplication() 
{
	return new Sandbox();
}