// dump123.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include<exception>
#include<map>
#include<vector>
using namespace std;

//
////使所有版本都可以捕获到异常 
//void DisableSetUnhandledExceptionFilter() 
//{ 
//    void *addr = (void*)GetProcAddress(LoadLibrary(_T("kernel32.dll")), "SetUnhandledExceptionFilter"); 
// 
//    if (addr)  
//    { 
//        unsigned char code[16]; 
//        int size = 0; 
//        code[size++] = 0x33; 
//        code[size++] = 0xC0; 
//        code[size++] = 0xC2; 
//        code[size++] = 0x04; 
//        code[size++] = 0x00; 
// 
//        DWORD dwOldFlag, dwTempFlag; 
//        VirtualProtect(addr, size, PAGE_READWRITE, &dwOldFlag); 
//        WriteProcessMemory(GetCurrentProcess(), addr, code, size, NULL); 
//        VirtualProtect(addr, size, dwOldFlag, &dwTempFlag); 
//    } 
//} 
// 
////程序未捕获的异常处理函数 
//LONG WINAPI ExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo) 
//{ 
//    ::AfxMessageBox("ExceptionFilter"); 
// 
//    HANDLE hFile = ::CreateFile( _T("C:\\dumpfile.dmp"), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL); 
//    if( hFile != INVALID_HANDLE_VALUE) 
//    { 
//        MINIDUMP_EXCEPTION_INFORMATION einfo; 
//        einfo.ThreadId = ::GetCurrentThreadId(); 
//        einfo.ExceptionPointers = ExceptionInfo; 
//        einfo.ClientPointers = FALSE; 
// 
//        ::MiniDumpWriteDump(::GetCurrentProcess(), ::GetCurrentProcessId(), hFile, MiniDumpWithFullMemory, &einfo, NULL, NULL); 
//        ::CloseHandle(hFile); 
//    } 
// 
//    return 0; 
//} 
// 
////把当前时刻的线程栈记录到DUMP文件中 
//int RecordCurStack() 
//{ 
//    HANDLE hFile = ::CreateFile( _T("C:\\dumpfile.dmp"), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL); 
//    if( hFile != INVALID_HANDLE_VALUE) 
//    { 
//        ::MiniDumpWriteDump(::GetCurrentProcess(), ::GetCurrentProcessId(), hFile, MiniDumpWithFullMemory  ,NULL, NULL, NULL); 
// 
//        ::CloseHandle(hFile); 
//        return 1; 
//    } 
// 
//    return 0; 
//} 
// 
// 
//bool bCreateDumpThrd = true; 
////循环检测线程 
////查看到有ADTV2_TEMP.TXT文件，则记录下当前时刻的堆栈 
//void CreateDumpThrd(void* pv) 
//{ 
//    HANDLE hFile;  
//    string strPath = FileAssist::GetExePath() + "\\ADTV2_TEMP.TXT"; 
//    while(bCreateDumpThrd) 
//    { 
//        //每5秒检测一次 
//        Sleep(5000); 
//        hFile = CreateFileA(strPath.c_str(),    // file to open 
//            GENERIC_READ,          // open for reading 
//            FILE_SHARE_READ,       // share for reading 
//            NULL,                  // default security 
//            OPEN_EXISTING,         // existing file only 
//            FILE_ATTRIBUTE_NORMAL, // normal file 
//            NULL);                 // no attr. template 
// 
//        if (hFile != INVALID_HANDLE_VALUE)  
//        {  
//            //防止多次记录当前堆栈信息，删除文件 
//            ::CloseHandle(hFile); 
//            ::DeleteFile(strPath.c_str()); 
//            RecordCurStack(); 
//        } 
//    } 
//} 

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

