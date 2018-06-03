// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include<map>
#include<vector>
#include <iostream>     // std::cout
#include <algorithm>    // std::max

//#include <stdio.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

//using namespace std;

//template<class T>
//T GetMax(T arg1, T arg2)
//{
//	return arg1 > arg2 ? arg1: arg2;
//}
//
//template<>
//int GetMax<int>(int arg1, int arg2)
//{
//	return arg1 > arg2 ? arg1: arg2;
//}

//struct A
//{
//    int m_a;
//    int n;
//    A(){ 
//        memset(this , 0 , sizeof(A)) ;
//        cout<<sizeof(A)<<endl;
//    }    
//    virtual ~A(){}
//    virtual void set(){
//        m_a = 123;
//    }
//};
// 
//struct B:A
//{
//    B(){ 
//		int n = 1;
//		int n2 = 2;
//    }  
//    virtual void set(){
//        m_a = 456;
//    }
//};

//typedef vector<int> ID_VER;
//typedef map<int, int> INT_MAP;
//
//class NumberParseException {};
//bool isNumber(char * str) {
//     using namespace std;
//     if (str == NULL) 
//        return false;
//     int len = strlen(str);
//     if (len == 0) 
//        return false;
//     bool isaNumber = false;
//     char ch;
//     for (int i = 0; i < len; i++) {
//         if (i == 0 && (str[i] == '-' || str[i] == '+')) 
//            continue;
//         if (isdigit(str[i])) {
//            isaNumber = true;
//         } else {
//           isaNumber = false;
//           break;
//         }
//     }
//     return isaNumber;
//}
//int parseNumber(char * str) throw(NumberParseException) {
//    if (!isNumber(str)) 
//       throw NumberParseException();
//    return atoi(str);
//}

class IData
{
public:
	IData(){};
	virtual ~IData() {};

	void BaseUpdate() {
		update();
	}
protected:
	virtual void update() {
		int n = 10; 
        cout<<n<<endl;
		return;
	}
};

class IMata
{
public:
	IMata(){};
	virtual ~IMata() {};
};

class CData : public IData /*, public IMata*/
{
public:
	CData(){};
	~CData() {};

private:
		virtual void update() {
		int n = 9; 
        cout<<n<<endl;
		return;
	}
};

#define SAFE_DELETE(p) { if(NULL != p) delete p; p=NULL; }

//class A
//
//{
//
//public:
//
//	A(){ m_char = new char[5]; }
//
//	~A()
//	{
//		if( m_char!=NULL )
//			delete [] m_char;
//	}
//
//private:
//
//	char *m_char;
//	char test[5];
//};


#include<set>

#include <iostream>
#include <algorithm>

#include<map>
//struct A
//{
//    int m_a;
//    int n;
//    A(){ 
//        memset(this , 0 , sizeof(A)) ;
//        cout<<sizeof(A)<<endl;
//    }    
//    virtual ~A(){}
//    virtual void set(){
//        m_a = 123;
//    }
//};
// 
//struct B:public A
//{
//    B(){ 
//        //memset(this , 0 , sizeof(B)) ;
//    }  
//
//    virtual void set(){
//        m_a = 456;
//    }
//};
//
//struct C:public B
//{
//    C(){ 
//        //memset(this , 0 , sizeof(B)) ;
//    }  
//
//};
////
//
//bool fncomp (int lhs, int rhs) 
//{
//	 return lhs<rhs;
//} 
//
//struct classcomp 
//{   
//
//	bool operator() (const int& lhs, const int& rhs) const
//    {
//
//	return	lhs>rhs;
//	} 
//
//};  
//
//class Person 
//{ 
//public: 
//void Walk() //普通人的“走” 
//{ 
//cout << "Person::Walk I am an Ordinary People." << endl; 
//}; 
//}; 
// 
//class Student : public Person 
//{ 
//public: 
//void Walk() //学生的“走” 
//{ 
//cout << "Student::Walk I am a student." << endl; 
//}; 
//}; 

//struct Skey
//{
//	int m_step;
//	int m_subStep;
//	Skey(int step, int subStep)
//	{
//		m_step = step;
//		m_subStep = subStep;
//	}
//	
//};
//
//class Person 
//{ 
//public: 
//	virtual void Walk() //普通人的“走” 
//	{ 
//	cout << "Person::Walk I am an Ordinary People." << endl; 
//	}; 
//}; 
// 
//class Student : public Person 
//{ 
//protected:
//	virtual void Walk() //学生的“走” 
//	{ 
//	cout << "Student::Walk I am a student." << endl; 
//	}; 
//}; 
//
//class Student111 : public Student 
//{ 
//virtual void Walk() //学生的“走” 
//{ 
//cout << "Student::Walk I am a student." << endl; 
//}; 
//}; 
//
//#include<winsock2.h>
//#include<stdio.h>
//#pragma comment(lib,"ws2_32.lib")
//
//
//class A 
//{ 
//	public: 
//	A() 
//	{ 
//		cout<<"A的构造函数"<<endl;
//		print(); 
//	} 
//
//	virtual void print() 
//	{ 
//	cout<<"A中的虚函数print()"<<endl;
//	} 
//
//	virtual ~A() 
//	{ 
//	cout<<"A的析构函数"<<endl;
//	} 
//}; 
//
//
//class B:public A 
//{ 
//public: 
//	B() 
//	{ 
//	cout<<"B的构造函数"<<endl; 
//	print(); 
//	} 
//
//	virtual void print() 
//	{ 
//	cout<<"B中的虚函数print()"<<endl;
//	Sub();
//	} 
//
//	virtual ~B() 
//	{ 
//	cout<<"B的析构函数"<<endl;
//	}
//protected:
//	virtual void Sub() {};
//
//}; 
//
//class C:public B 
//{ 
//public: 
//	C() 
//	{ 
//	cout<<"C的构造函数"<<endl; 
//	print(); 
//	} 
//
//	//void print() 
//	//{ 
//	//cout<<"B中的虚函数print()"<<endl;
//	//} 
//	virtual ~C() 
//	{ 
//	cout<<"B的析构函数"<<endl;
//	} 
//
//	virtual void Sub() 
//	{ 
//	cout<<"Sub"<<endl;
//	} 
//}; 
//
// template<class T1,class T2,class T3 = int> class CeilDemo{
//     public:
//         double ceil(T1,T2,T3);
// };
// 
// template<class T1,class T2,class T3> 
// double CeilDemo<T1,T2,T3>::ceil(T1 a,T2 b,T3 c){
//     return a+b+c;
// }
//
//#include   <map>
//
// namespace
//{
//    class placeholder_ {};
//    placeholder_ __1;
//}
// 
//template <typename R, typename T, typename Arg>
//class simple_bind_t
//{
//private:
//    typedef R (T::*F)(Arg);
//    F f_;
//    T* t_;
//    Arg& a_;
// 
//public:
//    simple_bind_t(F f, T* t, Arg &a)
//        : f_(f), t_(t), a_(a)
//    {}
// 
//    R operator()()
//    {
//        return (t_->*f_)(a_);
//    }
//};
// 
//template <typename R, typename T, typename Arg>
//class simple_bind_t2
//{
//private:
//    typedef R (T::*F)(Arg);
//    F f_;
//    T* t_;
// 
//public:
//    simple_bind_t2(F f, T* t)
//        : f_(f), t_(t)
//    {}
// 
//    R operator()(Arg& a)
//    {
//        return (t_->*f_)(a);
//    }
//};
// 
//template <typename R, typename T, typename Arg>
// simple_bind_t<R, T, Arg> simple_bind(R (T::*f)(Arg), T* t, Arg& a)
//{
//    return simple_bind_t<R, T, Arg>(f, t, a);
//}
// 
//template <typename R, typename T, typename Arg>
//simple_bind_t2<R, T, Arg> simple_bind(R (T::*f)(Arg), T* t, placeholder_& a)
//{
//    return simple_bind_t2<R, T, Arg>(f, t);
//}
// 
//class bind_test
//{
//public:
//    void print_string(const std::string str)
//    {
//        printf("%s", str.c_str());
//    }
//};
// 
//void test()
//{
//    bind_test t;
//    std::string h = "hehe\n";
//    simple_bind(&bind_test::print_string, &t, h)();
//    simple_bind(&bind_test::print_string, &t, __1)(h);
//    //boost::function<void (const std::string)> f;
//    //f = simple_bind(&bind_test::print_string, &t, __1);
//    //f(h);
//}
//
//int GetCeil(float f)
//{
//	return (int)::floor(f);
//}
//
//enum eType
//{
//	eType1,
//	eType2,
//
//};
//

#define BUFFER_SIZE 100


struct A
{
	int n;
	float fArry[2];
	A()
	{
		 n = 10;
		 fArry[0] = 9.f;
		 fArry[1] = 8.f;
	}
};

struct B : public A
{
	int c;
	B()
	{
		 memset(this, 0, sizeof(B));
	}
};

template<typename T>   
int f(T)  
{   
    return 1;  
}  
template<typename T>   
int f(T*)  
{   
    return 2;  
}  

#include<iostream>
#include<deque>
int _tmain(int argc, _TCHAR* argv[])
{
//	double DBL_EPSILON = 2.2204460492503131E-16,
//	LDBL_EPSILON = 1.084202172485504E-19,                
//		DBL_MIN = 2.2250738585072014E-308;    
//	float FLT_MIN = 1.17549435E-38F,             
//		FLT_EPSILON = 1.19209290E-07F;    
//	
	printf("%.16e\n%.16e\n%.16e\n",DBL_EPSILON,LDBL_EPSILON,DBL_MIN);   
	printf("%.8e\n%.8e\n",FLT_MIN,FLT_EPSILON);
	
	float fNum = 0.f;
	int n = 0;
	if (n != 0 && n != 1)
		n = 1;

	if (fNum > 0)
		n = 1;
	else if (fNum < 0)
		n = 2;
	else if (fNum == 0)
		n = 3;


    std::cout << f<int*>((int*)0) << std::endl;   //输出1  
    std::cout << f<int>((int*)0)  << std::endl;   //输出2  

	return 0;


//std::map<int, int> arData; 
//for(int i=0; i<10; ++i) 
//{ 
//auto item = arData.insert(std::map<int, int>::value_type(i, i*100+1)); 
//int n = 1;
//} 
//std::cout << "original data:" << std::endl; 
//for(std::map<int, int>::iterator it(arData.begin()); it != arData.end(); ++it) 
//{ 
//std::cout << "(" << it->first << "," << it->second <<") "; 
//} 
//std::cout << std::endl << std::endl; 
//
////删除Key=6 
//std::cout << "erase key 6 : " << std::endl; 
//for(std::map<int, int>::iterator it(arData.begin()); it != arData.end(); ) 
//{ 
//	auto ite2 = arData.find(8);
//if (it->first == 6) 
//{ 
//it = arData.erase(it); //关键操作 
//continue; //关键操作 
//} 
//std::cout << "(" << it->first << "," << it->second <<") "; 
//++it; //关键操作 
//} 


//std::vector<int> arData; 
//arData.push_back(6); 
//for(int i=0; i<10; ++i) 
//{ 
//arData.push_back(i); 
//} 
//
//arData.push_back(6); 
//
//std::cout << "original data:" << std::endl; 
////std::copy(arData.begin(), arData.end(), std::stream_iterator(std::cout, " ")); 
//std::cout << std::endl; 
//
////删除掉值为6的元素 
//std::cout << "erase value 6 :" << std::endl; 
//for(std::vector<int>::iterator it(arData.begin()); it != arData.end(); ) 
//{ 
//int nValue = *it; 
//if (6 == nValue) 
//{ 
//arData.erase(it++); //关键操作 
//continue;
//} 
//else 
//{ 
//std::cout << *it << " "; 
//++it; //关键操作 
//} 
//} 

	//A* pA = new A();
	//B* pB = new B();
	//B* pB2 = static_cast<B*> (pA);
	//int n = 41;
	////a.n = 11;
	//a.fArry[0] = 100.1f;
	//A b = a;
	//int n = b.n;
	//int n = a.n;
	B b; 
	//n = b.n;

    //size_t   i;  
    //char      *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    //wchar_t*pWCBuffer = L"Hello, world.";  
  
    //printf( "Convert wide-character string:\n" );  
  
    //// Conversion  
    //wcstombs_s(&i, pMBBuffer, (size_t)BUFFER_SIZE,   
    //           pWCBuffer, (size_t)BUFFER_SIZE );  
  
    //// Output  
    //printf("   Characters converted: %u\n", i);  
    //printf("    Multibyte character: %s\n\n",  
    // pMBBuffer );  
  
    //// Free multibyte character buffer  
    //if (pMBBuffer)  
    //{  
    //free(pMBBuffer);  
    //}  







    //   string str1 = "hello world";

    //   string str2 = str1;

    //   

    //   printf ("Sharing the memory:/n");

    //   printf ("/tstr1's address: %x/n", str1.c_str() );

    //   printf ("/tstr2's address: %x/n", str2.c_str() );

    //   

    //str1[1]='q';

    //   str2[1]='w';

 

    //   printf ("After Copy-On-Write:/n");

    //   printf ("/tstr1's address: %x/n", str1.c_str() );

    //   printf ("/tstr2's address: %x/n", str2.c_str() );

 

    //   return 0;


	//int i=5; 
	//eType type = (eType)i;

	//char j='1'; 
	//int n=j;

	//int act1 = 1;
	//char action = 48;
	//int act = action;

	//unsigned int l1 = 10;
	//float l2 = 20.f;
	//unsigned int  l3 = std::max(0, 2);
	//float l4 = min(0, l1 - l2);
	//float l3 = l1 - l2;


	//int n = GetCeil(0.3);

	//char *p = (char*) malloc(100*sizeof(char));
	//int nn = sizeof(p);
	//char sz[100];
	//int l = sizeof(sz);

	//int n = 1;
	//if(n != 1 && n != 2 && n != 3)
	//{
	//	n =10;
	//}

	//test();
	//std::map<int, int> m_map1;
	//std::map<int, int> m_map2;
	//m_map1[0] = 1;
	//m_map1[1] = 1;
	//m_map2 = m_map1;
	//for(auto iter = m_map2.begin(); iter != m_map2.end(); /*iter++*/)
	//{
	//	m_map2.erase(iter++);
	//}
 //  CeilDemo<int, double,double> cd;
 //  cout<<cd.ceil(2,3.1,4.1)<<endl;


//char a = 'a' ;
//int b = static_cast<int>(a);
//char c = static_cast<char>(b);
//type = static_cast<test_enum>(b);

//char* pa = NULL;
////int *pb = (int*)pa;
//int *pb = static_cast<int*>(pa);        //error
//pa = static_cast<char*>(pb)           //error
//char *pc = (char*)pb;
////char *pc = static_cast<char*>(pb);    //error
//
//void *p = static_cast<void*>(pa);
//pb = static_cast<int*>(p);
//pc = static_cast<char*>(p);



// A *pA = new C; 
// pA->print(); 
//delete pA; 

//
//Student s; 
//Person* pp = &s; 
//pp->Walk(); 
// 
//Student* ps= &s; 
//ps->Walk(); 
//
//
//
//	//map<Skey, int> mapStep;
//	//Skey step11(1,1), step12(1,2), step20(1,2);
//	//mapStep[step11] = 1;
//	//mapStep[step12] = 2;
//	//mapStep[step20] = 3;
//
//
//	//auto iter = mapStep.find(step11);
//	//if (iter != mapStep.end())
//	//{
//	//	int n = iter->second;
// //
//	//}
////Student s; 
////Person* pp = &s; 
////pp->Walk(); 
//// 
////Student* ps= &s; 
////ps->Walk(); 
////
////
////  std::set<int> first;                        // empty set of ints  
////
////  int myints[]= {10,20,30,40,50};  
////
////  std::set<int> second (myints,myints+5);       // range
////
//// 
////  std::set<int> third (second);                  // a copy of second
////
////  std::set<int,classcomp> fourth (second.begin(), second.end()); //iterator ctor.
////  
////  std::set<int,classcomp> fifth;               // class as Compare
////
////
////  bool(*fn_pt)(int,int) = fncomp;  
////
////  std::set<int,bool(*)(int,int)> sixth (fncomp);  // function pointer as Compare
//
//
//    // //定义一个int型集合对象s,当前没有任何元素.由www.169it.com搜集整理
//
//    //set<int> s; 
//
//    //s.insert(8);  //第一次插入8，可以插入  
//
//    //s.insert(1); 
//
//    //s.insert(12); 
//
//    //s.insert(6); 
//
//    //s.insert(8);   //第二次插入8，重复元素，不会插入  
//
//    //set<int>::iterator it; //定义前向迭代器 
//
//    ////中序遍历集合中的所有元素  
//
//    //for(it=s.begin();it!=s.end();it++) 
//
//    //cout<<*it<<endl;    
//
//    //system("pause"); 
//
//    //return 0; 
//
// //getchar();
//
//
//
//
//	//假设拥有以上类，然后在应用中
//
// //   vector<string> m;
// //   m.push_back("hello");
// //   m.push_back("hello2");
// //   m.push_back("hello3");
//	////std::find(m.begin(), m.end(), "hello");
//
// //   //if (std::find(m.begin(), m.end(), "hello") == m.end())
// //   //    cout << "no" << endl;
// //   //else
// //   //    cout << "yes" << endl;
//
//	//set<int> s1;
//
//	//s1.insert(10);
//	//s1.insert(5);
//	//s1.insert(11);
//	//s1.insert(10);
//
//
//
//	//char t[10];
//
//	//A *pA = new A;
//
//	////....//其他操作
//
//	//delete pA;
//
//
//	IData* pData = NULL;
//	//delete pData;
//
//	pData = new CData();
//	pData->BaseUpdate();
//	delete pData;
//	delete pData;
//	pData = NULL;
//	
//	void* temp = (void*)pData;
//	SAFE_DELETE(temp)
//	delete temp;	


    //char *str1 = "1", *str2 = NULL;
    ////try {
    //    int num1 = parseNumber(str1);
    //    int num2 = parseNumber(str2);
    //    printf("sum is %d\n", num1 + num2);
    //} catch (NumberParseException) {
    //    printf("输入不是整数\n"); 
    //    //打印文件的路径,行号，str1,str2等信息足够自己去定位问题所在 
    //}


	//int n = GetMax( 1, 2);


	//ID_VER vecKey;

	//vecKey.clear();

	//INT_MAP map_xx;
	//for(int i = 0; i < 5; i++)
	//{
	//	map_xx[i] = i;
	//}

	//for(INT_MAP::iterator it = map_xx.begin(); it!=map_xx.end(); ++it) 
	//{ 
	//	vecKey.push_back(it->first);
	//}

	//for(int i = 0; i < vecKey.size(); ++i)
	//{
	//	map_xx.erase(vecKey[i]); //或者map_xx.insert(make_pair(vecKey[i], value)); //或者其它对map枝叶结构异动动作
	//}



 //   A aa;
 //   aa.set();
 //   cout<<aa.m_a <<endl;
 //
 //   B bb;
 //   A * pA = &aa;
	//pA->set(); 
 //   cout<<pA->m_a <<endl;
 //   getchar();

	//WSADATA wsaData;
	//SOCKET sockServer;
	//SOCKADDR_IN addrServer;
	//SOCKET sockClient;
	//SOCKADDR_IN addrClient;
	//WSAStartup(MAKEWORD(2,2),&wsaData);
	//sockServer=socket(AF_INET,SOCK_STREAM,0);
	//addrServer.sin_addr.S_un.S_addr=htonl(INADDR_ANY);//INADDR_ANY表示任何IP
	//addrServer.sin_family=AF_INET;
	//addrServer.sin_port=htons(6000);//绑定端口6000
	//bind(sockServer,(SOCKADDR*)&addrServer,sizeof(SOCKADDR));
 //
	////Listen监听端
	//listen(sockServer,5);//5为等待连接数目
	//printf("服务器已启动:\n监听中...\n");
	//int len=sizeof(SOCKADDR);
	//char sendBuf[100];//发送至客户端的字符串
	//char recvBuf[100];//接受客户端返回的字符串
 //
	////会阻塞进程，直到有客户端连接上来为止
	//sockClient=accept(sockServer,(SOCKADDR*)&addrClient,&len);
	////接收并打印客户端数据
	//recv(sockClient,recvBuf,100,0);
	//printf("%s\n",recvBuf);
 //
	////关闭socket
	//closesocket(sockClient);
	//WSACleanup();



	return 0;
}

