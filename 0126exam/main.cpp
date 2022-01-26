#include <stdio.h>
#include <vector>
#include <list>


//問1
//class ExamClass
//{
//public:
//	ExamClass() 
//	{
//		printf("コンストラクタ\n");
//	}
//	~ExamClass()
//	{
//		printf("デストラクタ\n");
//	}
//
//};
//
//int main()
//{
//	ExamClass examClass;
//
//	printf("main\n");
//	return 0;
//}

//問2
//int main()
//{
//	int* newInt = newInt;
//	char* newChar = newChar;
//
//	delete newInt;
//	newInt = nullptr;
//	delete newChar;
//	newChar = nullptr;
//}

//問3
//class Test
//{
//public:
//    Test()
//    {
//        printf("Test\n");
//    }
//    ~Test()
//    {
//        printf("~Test\n");
//    }
//};
//class Test2 : public Test
//{
//public:
//    Test2()
//    {
//        printf("Test2\n");
//    }
//    ~Test2()
//    {
//        printf("~Test2\n");
//    }
//};
//int main()
//{
//    Test2 t;
//}

//問4
//template <typename T>
//
//T Calc(T a, T b, int type)
//{
//    float ans = 0;
//    switch (type)
//    {
//    case 0:
//        ans = a + b;
//        break;
//    case 1:
//        ans = a - b;
//        break;
//    case 2:
//        ans = a * b;
//        break;
//    case 3:
//        ans = a / b;
//        break;
//    }
//
//    return ans;
//}
//
//int main()
//{
//    int ans1;
//    float ans2;
//    char ans3;
//
//    ans1 = Calc<int>(2, 5, 0);
//    ans2 = Calc<float>(10.0f, 2.5f, 3);
//    ans3 = Calc<char>(10, 4, 2);
//
//    return 0;
//}

//問5
//int main()
//{
//    std::list<int> lst;
//    for (int i = 0; i < 5; ++i)
//    {
//        // ここにプログラムを記述
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//    }
//
//    // リストを修正してnum=30と表示されるようにプログラムを記述
//}

//問6
//int main()
//{
//    std::vector<int> vec;
//
//    for (int i = 50; i >=0; --i)
//    {
//        if (i%10==0&&i!=0)
//        {
//            vec.push_back(i);
//        }
//    }
//
//    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//    }
//    for (std::vector<int>::iterator it = vec.begin(); it != vec.end();)
//    {
//        if (*it != 30)
//        {
//            it = vec.erase(it);
//        }
//        else
//        {
//            
//        }
//    }
//    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
//    {
//        printf("num = %d\n", *it);
//    }
//}