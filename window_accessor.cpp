
#include "main.h"
#include "window.h"

namespace Window
{
	/// <summary>
	/// getter func for instance handle
	/// </summary>
	HINSTANCE& Manager::GetInstanceHandle()
	{
		return _wcex.hInstance;
	}

	/// <summary>
	/// getter func for window handle
	/// </summary>
	HWND& Manager::GetWindowHandle()
	{
		return _hWnd;
	}
}
