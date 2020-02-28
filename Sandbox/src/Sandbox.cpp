#include <Chernobyl.h>

class Sandbox : public Chernobyl::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}

	void Run()
	{
		while (true);
	}
};


Chernobyl::Application* CreateApplication()
{
	return new Sandbox();
}
