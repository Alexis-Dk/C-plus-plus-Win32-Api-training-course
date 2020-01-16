//#include <windows.h>
//
//#define ID_EDIT 1001
//#define ID_BUTTON 1002
//
//BOOL RegClass(WNDPROC, LPCTSTR, UINT);
//LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
//
//char szClassName[] = "EditClass";
//char szTitle[] = "������������ ��������";
//HINSTANCE hInstance;
//
//int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
//{
//	MSG msg; HWND hwnd; hInstance = hInst;
//	if (!RegClass(WndProc, szClassName, COLOR_WINDOW))
//		return FALSE;
//	if (!(hwnd = CreateWindow(szClassName, szTitle,
//		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
//		100, 50, 364, 150, 0, 0, hInstance, NULL)))
//		return FALSE;
//	ShowWindow(hwnd, SW_SHOWNORMAL);
//	UpdateWindow(hwnd);
//	while (GetMessage(&msg, 0, 0, 0))
//	{
//		TranslateMessage(&msg); DispatchMessage(&msg);
//	}
//	return msg.wParam;
//}
//
//
//BOOL RegClass(WNDPROC Proc, LPCTSTR szName, UINT brBackground)
//{
//	WNDCLASS wc;
//	wc.style = wc.cbClsExtra = wc.cbWndExtra = 0;
//	wc.lpfnWndProc = Proc; wc.hInstance = hInstance;
//	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
//	wc.hbrBackground = (HBRUSH)(brBackground + 1);
//	wc.lpszMenuName = (LPCTSTR)NULL;
//	wc.lpszClassName = szName;
//	return (RegisterClass(&wc) != 0);
//}
//
//LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//	static HWND hEdit, hButton, hStatic; char chBuff[80];
//	switch (msg)
//	{
//		case WM_CREATE:
//		{
//			hStatic = CreateWindow("static", "������� ������ � ������� ������ ��",
//								   WS_CHILD | WS_VISIBLE | SS_CENTER,
//								   30, 10, 300, 20, hwnd, (HMENU)0, hInstance, NULL);
//			hEdit = CreateWindow("edit", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER |
//								 ES_LEFT, 30, 40, 300, 30, hwnd, (HMENU)ID_EDIT, hInstance, NULL);
//			hButton = CreateWindow("button", "OK", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
//								   130, 85, 100, 30, hwnd, (HMENU)ID_BUTTON, hInstance, NULL);
//			SetFocus(hEdit); return 0;
//		}
//		case WM_COMMAND:
//		{
//			switch (LOWORD(wParam))
//			{
//				case ID_EDIT:
//				{
//					if ((HIWORD(wParam)) == EN_ERRSPACE)
//						MessageBox(hwnd, "���� ������", szTitle, MB_OK);
//					return 0;
//				}
//				case ID_BUTTON:
//				{
//					SendMessage(hEdit, EM_GETLINE, 0, (LPARAM)chBuff);
//					MessageBox(hwnd, chBuff, szTitle, MB_OK);
//					SetWindowText(hEdit, "\0");
//					SetFocus(hEdit); return 0;
//				}
//			}
//			return 0;
//		}
//		case WM_DESTROY:
//		{
//			PostQuitMessage(0);
//			return 0;
//		}
//	}
//	return DefWindowProc(hwnd, msg, wParam, lParam);
//}
