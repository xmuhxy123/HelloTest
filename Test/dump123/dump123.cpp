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
////ʹ���а汾�����Բ����쳣 
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
////����δ������쳣������ 
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
////�ѵ�ǰʱ�̵��߳�ջ��¼��DUMP�ļ��� 
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
////ѭ������߳� 
////�鿴����ADTV2_TEMP.TXT�ļ������¼�µ�ǰʱ�̵Ķ�ջ 
//void CreateDumpThrd(void* pv) 
//{ 
//    HANDLE hFile;  
//    string strPath = FileAssist::GetExePath() + "\\ADTV2_TEMP.TXT"; 
//    while(bCreateDumpThrd) 
//    { 
//        //ÿ5����һ�� 
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
//            //��ֹ��μ�¼��ǰ��ջ��Ϣ��ɾ���ļ� 
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

